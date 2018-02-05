#pragma once

#include "ofMain.h"
#include "ofxTweener.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void callbackX(float *arg);
		void callbackY(float *arg);

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);

	private:
		ofPoint position;
		float radius;

		ofRectangle easeInSineRect;			bool rightInSine;
		ofRectangle easeOutSineRect;		bool rightOutSine;
		ofRectangle easeInOutSineRect;		bool rightInOutSine;

		ofRectangle easeInCubicRect;		bool rightInCubic;
		ofRectangle easeOutCubicRect;		bool rightOutCubic;
		ofRectangle easeInOutCubicRect;		bool rightInOutCubic;

		ofRectangle easeInQuintRect;		bool rightInQuint;
		ofRectangle easeOutQuintRect;		bool rightOutQuint;
		ofRectangle easeInOutQuintRect;		bool rightInOutQuint;

		ofRectangle easeInCircRect;			bool rightInCirc;
		ofRectangle easeOutCircRect;		bool rightOutCirc;
		ofRectangle easeInOutCircRect;		bool rightInOutCirc;

		ofRectangle easeInBackRect;			bool rightInBack;
		ofRectangle easeOutBackRect;		bool rightOutBack;
		ofRectangle easeInOutBackRect;		bool rightInOutBack;

		ofRectangle easeInQuadRect;			bool rightInQuad;
		ofRectangle easeOutQuadRect;		bool rightOutQuad;
		ofRectangle easeInOutQuadRect;		bool rightInOutQuad;

		ofRectangle easeInQuartRect;		bool rightInQuart;
		ofRectangle easeOutQuartRect;		bool rightOutQuart;
		ofRectangle easeInOutQuartRect;		bool rightInOutQuart;

		ofRectangle easeInExpoRect;			bool rightInExpo;
		ofRectangle easeOutExpoRect;		bool rightOutExpo;
		ofRectangle easeInOutExpoRect;		bool rightInOutExpo;

		ofRectangle easeInElasticRect;		bool rightInElastic;
		ofRectangle easeOutElasticRect;		bool rightOutElastic;
		ofRectangle easeInOutElasticRect;	bool rightInOutElastic;

		ofRectangle easeInBounceRect;		bool rightInBounce;
		ofRectangle easeOutBounceRect;		bool rightOutBounce;
		ofRectangle easeInOutBounceRect;	bool rightInOutBounce;
		
		ofRectangle linearRect;				bool rightLinear;
};
