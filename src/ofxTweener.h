/*
 *  ofxTweener.h
 *  openFrameworks
 *
 *  Created by Sander ter Braak on 26-08-10.
 *
 */

#include "ofMain.h"
#include "ofxTransitions.h"
#ifndef _WIN32
#include <functional>
#endif

#ifndef _OFXTWEEN
#define _OFXTWEEN

#define TWEENMODE_OVERRIDE 0x01
#define TWEENMODE_SEQUENCE 0x02

class Tween {
public:
	typedef float(ofxTransitions::* easeFunction)(float,float,float,float);
	float* _var;
	float _from, _to, _duration,_by, _useBezier;
	easeFunction _easeFunction;
	Poco::Timestamp _timestamp;
};


class ofxTweener : public ofBaseApp {

public:
	
	ofxTweener();

#ifndef _WIN32
	void addTween(float &var, float to, float time, void (^callback)(float * arg)=NULL);
	void addTween(float &var, float to, float time, float (ofxTransitions::*ease) (float,float,float,float), void (^callback)(float * arg)=NULL);
	void addTween(float &var, float to, float time, float (ofxTransitions::*ease) (float,float,float,float), float delay, void (^callback)(float * arg)=NULL);
	void addTween(float &var, float to, float time, float (ofxTransitions::*ease) (float,float,float,float), float delay, float bezierPoint, void (^callback)(float * arg)=NULL);
#else
	void addTween(float &var, float to, float time, void std::function<void(float arg)> callbacl);
	
	void addTween(float &var, float to, float time, float (ofxTransitions::*ease) (float,float,float,float), std::function<void(float arg)> callback);
	void addTween(float &var, float to, float time, float (ofxTransitions::*ease) (float,float,float,float), float delay, std::function<void(float arg)> callbacl);
	void ofxTweener::addTween(float &var, float to, float time, float (ofxTransitions::*ease) (float,float,float,float), float delay, float bezierPoint, std::function<void(float arg)> callback);
	
	void addTween(float &var, float to, float time, float (ofxTransitions::*ease) (float,float,float,float), float delay, float bezierPoint, bool useBezier, std::function<void(float arg)> callback);
#endif
	
	void removeTween(float &var);	
	void setTimeScale(float scale);
	void update();
	void removeAllTweens();	
	void setMode(int mode);
	
	int getTweenCount();	
	
	
private:
	float				_scale;
	ofxTransitions		a;
	bool				_override;
	float				bezier(float b, float e, float t, float p);
	vector<Tween>		tweens;
#ifndef _WIN32
	void				addTween(float &var, float to, float time, float (ofxTransitions::*ease) (float,float,float,float), float delay, float bezierPoint, bool useBezier, std::function<void(float arg)> callback);
    std::map<float *, void (^)(float * arg)>   callbacks;
#else
	void				addTween(float &var, float to, float time, float (ofxTransitions::*ease) (float,float,float,float), float delay, float bezierPoint, bool useBezier, std::function<void(float arg)> callback);
	std::map<float *, std::function<void(float * arg)> >   callbacks;
#endif
    
};


extern ofxTweener Tweener;
#endif