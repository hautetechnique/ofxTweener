/*
 *  ofxTransitions.h
 *  openFrameworks
 *
 *  Created by Sander ter Braak on 27-08-10.
 *  Copyright 2010 hautetechnique.com. All rights reserved.
 *
 */

#include "ofMain.h";

#ifndef _OFXTRANSITIONS
#define _OFXTRANSITIONS

class ofxTransitions{
	public:
		 float linear(float t,float b , float c, float d);
					 
		 float easeInSine(float t,float b , float c, float d);
		 float easeOutSine(float t,float b , float c, float d);
		 float easeInOutSine(float t,float b , float c, float d);

		 float easeInCubic(float t,float b , float c, float d);
		 float easeOutCubic(float t,float b , float c, float d);
		 float easeInOutCubic(float t,float b , float c, float d);
		 
		 float easeInQuint(float t,float b , float c, float d);
		 float easeOutQuint(float t,float b , float c, float d);
		 float easeInOutQuint(float t,float b , float c, float d);
		 
		 float easeInCirc(float t,float b , float c, float d);
		 float easeOutCirc(float t,float b , float c, float d);
		 float easeInOutCirc(float t,float b , float c, float d);
		 
		 float easeInBack(float t,float b , float c, float d);
		 float easeOutBack(float t,float b , float c, float d);
		 float easeInOutBack(float t,float b , float c, float d);
		 
		 float easeInQuad(float t,float b , float c, float d);
		 float easeOutQuad(float t,float b , float c, float d);
		 float easeInOutQuad(float t,float b , float c, float d);
		 
		 float easeInQuart(float t,float b , float c, float d);
		 float easeOutQuart(float t,float b , float c, float d);
		 float easeInOutQuart(float t,float b , float c, float d);
	
		 float easeInExpo(float t,float b , float c, float d);
		 float easeOutExpo(float t,float b , float c, float d);
		 float easeInOutExpo(float t,float b , float c, float d);
		 
		 float easeInElastic(float t,float b , float c, float d);
		 float easeOutElastic(float t,float b , float c, float d);
		 float easeInOutElastic(float t,float b , float c, float d);
					 
		 float easeInBounce(float t,float b , float c, float d);
		 float easeOutBounce(float t,float b , float c, float d);
		 float easeInOutBounce(float t,float b , float c, float d);
		 
};			 

#endif