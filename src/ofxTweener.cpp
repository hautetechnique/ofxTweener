/*
 *  ofxTweener.cpp
 *  openFrameworks
 *
 *  Created by Sander ter Braak on 26-08-10.
 *
 */

#include "ofxTweener.h"

ofxTweener Tweener;

ofxTweener::ofxTweener(){
	_scale = 1;
	setMode(TWEENMODE_OVERRIDE);
}

void ofxTweener::addTween(float &var, float to, float time, void (^callback)(float * arg)){
	addTween(var,to,time, &ofxTransitions::easeOutExpo ,0,0,false, callback);
}

void ofxTweener::addTween(float &var, float to, float time, float (ofxTransitions::*ease) (float,float,float,float), void (^callback)(float * arg)){
	addTween(var,to,time,ease,0,0,false, callback);
}
void ofxTweener::addTween(float &var, float to, float time, float (ofxTransitions::*ease) (float,float,float,float), float delay, void (^callback)(float * arg)){
	addTween(var,to,time,ease,delay,0,false, callback);
}
void ofxTweener::addTween(float &var, float to, float time, float (ofxTransitions::*ease) (float,float,float,float), float delay, float bezierPoint, void (^callback)(float * arg)){
	addTween(var,to,time,ease,delay, bezierPoint, true, callback);
}
	
void ofxTweener::addTween(float &var, float to, float time, float (ofxTransitions::*ease) (float,float,float,float), float delay, float bezierPoint, bool useBezier, void (^callback)(float * arg)){
	float from = var;
	float _delay = delay;
	Poco::Timestamp latest = 0;
	
	for(int i = 0; i < tweens.size(); ++i){
		if(tweens[i]._var == &var) {
			// object already tweening, just kill the old one
			if(_override){
				tweens[i]._from = from;
				tweens[i]._to = to;
				tweens[i]._by = bezierPoint;
				tweens[i]._useBezier = useBezier;
				tweens[i]._easeFunction = ease;
				tweens[i]._timestamp = Poco::Timestamp() + ((delay / _scale) * 1000000.0f) ;
				tweens[i]._duration = (time / _scale) * 1000000.0f;
				return;
			}
			else {
				//sequence mode
				if((tweens[i]._timestamp + tweens[i]._duration) > latest){
					latest = (tweens[i]._timestamp + tweens[i]._duration);
					delay = _delay + ((tweens[i]._duration - tweens[i]._timestamp.elapsed())/1000000.0f);
					from = tweens[i]._to;
				}	
			}
		}
	}
	
	Tween t;
	
	t._var = &var;
	t._from = from;
	t._to = to;
	t._by = bezierPoint;
	t._useBezier = useBezier;
	t._easeFunction = ease;
	t._timestamp = Poco::Timestamp() + ((delay / _scale) * 1000000.0f) ;
	t._duration = (time / _scale) * 1000000.0f;
	
	tweens.push_back(t);
	
    if (callback!=NULL) callbacks[t._var] = callback;
}

void ofxTweener::update(){
	for(int i = tweens.size() -1; i >= 0; --i){
		if(float(tweens[i]._timestamp.elapsed()) >= float(tweens[i]._duration)){
			//tween is done

			bool found = false;
			if(!_override){
				//if not found anymore, place on exact place
				for(int j = 0; j < tweens.size(); ++j){
					if(tweens[j]._var == tweens[i]._var) {
						found = true;
						break;
					}
				}
			}
			if(!found) tweens[i]._var[0] = tweens[i]._to;
            
            map<float *,void (^)(float * arg)>::iterator it = callbacks.find(tweens[i]._var);
            if(it != callbacks.end()) {
                it->second(tweens[i]._var);
                callbacks.erase(it);
            }
            tweens.erase(tweens.begin() + i);
			
		}
		else if(float(tweens[i]._timestamp.elapsed()) > 0){
			//smaller than 0 would be delayed
			if(tweens[i]._useBezier) tweens[i]._var[0] = bezier(tweens[i]._from, tweens[i]._to ,(a.*tweens[i]._easeFunction )(float(tweens[i]._timestamp.elapsed()), 0, 1, float(tweens[i]._duration)), tweens[i]._by);
			else tweens[i]._var[0] = (a.*tweens[i]._easeFunction )(float(tweens[i]._timestamp.elapsed()), tweens[i]._from, tweens[i]._to - tweens[i]._from, float(tweens[i]._duration));
		}
	}
}


void ofxTweener::removeTween(float &var){
	for(int i = 0; i < tweens.size(); i++){
		if(tweens[i]._var == &var) {
			// tween found, erase it
			tweens.erase(tweens.begin() + i); 
			return;
		}
	}
}

float ofxTweener::bezier(float b, float e, float t, float p){
	return b + t*(2*(1-t)*(p-b) + t*(e - b));
}

void ofxTweener::removeAllTweens(){
	tweens.clear();
}
void ofxTweener::setMode(int mode){
	_override = (mode == TWEENMODE_OVERRIDE);
}

int ofxTweener::getTweenCount(){
	return int(tweens.size());
}

void ofxTweener::setTimeScale(float scale){
	_scale = scale;
}
