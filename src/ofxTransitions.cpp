#include "ofxTransitions.h"

float ofxTransitions::linear(float t,float b , float c, float d){
	return c*t/d + b;
}

float ofxTransitions::easeInSine(float t,float b , float c, float d){
	return -c * cos(t/d * (PI/2)) + c + b;
}						
float ofxTransitions::easeOutSine(float t,float b , float c, float d){
	return c * sin(t/d * (PI/2)) + b;
}
float ofxTransitions::easeInOutSine(float t,float b , float c, float d){
	return -c/2 * (cos(PI*t/d) - 1) + b;
}


float ofxTransitions::easeInCubic(float t,float b , float c, float d){
	return c*(t/=d)*t*t + b;
}
float ofxTransitions::easeOutCubic(float t,float b , float c, float d){
	return c*((t=t/d-1)*t*t + 1) + b;
}
float ofxTransitions::easeInOutCubic(float t,float b , float c, float d){
	if ((t/=d/2) < 1) return c/2*t*t*t + b;
	return c/2*((t-=2)*t*t + 2) + b;
}

float ofxTransitions::easeInQuint(float t,float b , float c, float d){
	return c*(t/=d)*t*t*t*t + b;
}
float ofxTransitions::easeOutQuint(float t,float b , float c, float d){
	return c*((t=t/d-1)*t*t*t*t + 1) + b;
}
float ofxTransitions::easeInOutQuint(float t,float b , float c, float d){
	if ((t/=d/2) < 1) return c/2*t*t*t*t*t + b;
	return c/2*((t-=2)*t*t*t*t + 2) + b;
}


float ofxTransitions::easeInCirc(float t,float b , float c, float d){
	return -c * (sqrt(1 - (t/=d)*t) - 1) + b;
}
float ofxTransitions::easeOutCirc(float t,float b , float c, float d){
	return c * sqrt(1 - (t=t/d-1)*t) + b;
}
float ofxTransitions::easeInOutCirc(float t,float b , float c, float d){
	if ((t/=d/2) < 1) return -c/2 * (sqrt(1 - t*t) - 1) + b;
	return c/2 * (sqrt(1 - t*(t-=2)) + 1) + b;
}


float ofxTransitions::easeInBack(float t,float b , float c, float d){
	float s = 1.70158f;
	float postFix = t/=d;
	return c*(postFix)*t*((s+1)*t - s) + b;
}
float ofxTransitions::easeOutBack(float t,float b , float c, float d){
	float s = 1.70158f;
	return c*((t=t/d-1)*t*((s+1)*t + s) + 1) + b;
}	
float ofxTransitions::easeInOutBack(float t,float b , float c, float d){
	float s = 1.70158f;
	if ((t/=d/2) < 1) return c/2*(t*t*(((s*=(1.525f))+1)*t - s)) + b;
	float postFix = t-=2;
	return c/2*((postFix)*t*(((s*=(1.525f))+1)*t + s) + 2) + b;
}


float ofxTransitions::easeInQuad(float t,float b , float c, float d){
	return c*(t/=d)*t + b;
}
float ofxTransitions::easeOutQuad(float t,float b , float c, float d){
	return -c *(t/=d)*(t-2) + b;
}
float ofxTransitions::easeInOutQuad(float t,float b , float c, float d){
	if ((t/=d/2) < 1) return ((c/2)*(t*t)) + b;
	return -c/2 * (((--t)*(t-2)) - 1) + b;
}

float ofxTransitions::easeInQuart(float t,float b , float c, float d){
	return c*(t/=d)*t*t*t + b;
}
float ofxTransitions::easeOutQuart(float t,float b , float c, float d){
	return -c * ((t=t/d-1)*t*t*t - 1) + b;
}
float ofxTransitions::easeInOutQuart(float t,float b , float c, float d){
	if ((t/=d/2) < 1) return c/2*t*t*t*t + b;
	return -c/2 * ((t-=2)*t*t*t - 2) + b;
}

float ofxTransitions::easeInExpo(float t,float b , float c, float d){
	return (t==0) ? b : c * pow(2, 10 * (t/d - 1)) + b;
}
float ofxTransitions::easeOutExpo(float t,float b , float c, float d){
	return (t==d) ? b+c : c * (-pow(2, -10 * t/d) + 1) + b;
}
float ofxTransitions::easeInOutExpo(float t,float b , float c, float d){
	if (t==0) return b;
	if (t==d) return b+c;
	if ((t/=d/2) < 1) return c/2 * pow(2, 10 * (t - 1)) + b;
	return c/2 * (-pow(2, -10 * --t) + 2) + b;
}


float ofxTransitions::easeInElastic(float t,float b , float c, float d){
	if (t==0) return b;  if ((t/=d)==1) return b+c;
	float p=d*.3f;
	float a=c;
	float s=p/4;
	float postFix =a*pow(2,10*(t-=1)); 
	return -(postFix * sin((t*d-s)*(2*PI)/p )) + b;
}
float ofxTransitions::easeOutElastic(float t,float b , float c, float d){
	if (t==0) return b;  if ((t/=d)==1) return b+c;
	float p=d*.3f;
	float a=c;
	float s=p/4;
	return (a*pow(2,-10*t) * sin( (t*d-s)*(2*PI)/p ) + c + b);
}
float ofxTransitions::easeInOutElastic(float t,float b , float c, float d){
	if (t==0) return b;  if ((t/=d/2)==2) return b+c;
	float p=d*(.3f*1.5f);
	float a=c;
	float s=p/4;
	
	if (t < 1) {
		float postFix =a*pow(2,10*(t-=1));
		return -.5f*(postFix* sin( (t*d-s)*(2*PI)/p )) + b;
	}
	float postFix =  a*pow(2,-10*(t-=1)); 
	return postFix * sin( (t*d-s)*(2*PI)/p )*.5f + c + b;
}


float ofxTransitions::easeInBounce(float t,float b , float c, float d){
	return c - easeOutBounce (d-t, 0, c, d) + b;
}
	
float ofxTransitions::easeOutBounce(float t,float b , float c, float d){
	if ((t/=d) < (1/2.75f)) {
		return c*(7.5625f*t*t) + b;
	} else if (t < (2/2.75f)) {
		float postFix = t-=(1.5f/2.75f);
		return c*(7.5625f*(postFix)*t + .75f) + b;
	} else if (t < (2.5/2.75)) {
		float postFix = t-=(2.25f/2.75f);
		return c*(7.5625f*(postFix)*t + .9375f) + b;
	} else {
		float postFix = t-=(2.625f/2.75f);
		return c*(7.5625f*(postFix)*t + .984375f) + b;
	}
}

float ofxTransitions::easeInOutBounce(float t,float b , float c, float d){
	if (t < d/2) return easeInBounce (t*2, 0, c, d) * .5f + b;
	else return easeOutBounce (t*2-d, 0, c, d) * .5f + c*.5f + b;
}


