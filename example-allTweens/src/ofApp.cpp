#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    radius = 5;

	easeInSineRect.set(200, 40, 15, 15);
	easeOutSineRect.set(200, 60, 15, 15);
	easeInOutSineRect.set(200, 80, 15, 15);

	easeInCubicRect.set(200, 100, 15, 15);
	easeOutCubicRect.set(200, 120, 15, 15);
	easeInOutCubicRect.set(200, 140, 15, 15);

	easeInQuintRect.set(200, 160, 15, 15);
	easeOutQuintRect.set(200, 180, 15, 15);
	easeInOutQuintRect.set(200, 200, 15, 15);

	easeInCircRect.set(200, 220, 15, 15);
	easeOutCircRect.set(200, 240, 15, 15);
	easeInOutCircRect.set(200, 260, 15, 15);

	easeInBackRect.set(200, 280, 15, 15);
	easeOutBackRect.set(200, 300, 15, 15);
	easeInOutBackRect.set(200, 320, 15, 15);

	easeInQuadRect.set(200, 340, 15, 15);
	easeOutQuadRect.set(200, 360, 15, 15);
	easeInOutQuadRect.set(200, 380, 15, 15);

	easeInQuartRect.set(200, 400, 15, 15);
	easeOutQuartRect.set(200, 420, 15, 15);
	easeInOutQuartRect.set(200, 440, 15, 15);

	easeInExpoRect.set(200, 460, 15, 15);
	easeOutExpoRect.set(200, 480, 15, 15);
	easeInOutExpoRect.set(200, 500, 15, 15);

	easeInElasticRect.set(200, 520, 15, 15);
	easeOutElasticRect.set(200, 540, 15, 15);
	easeInOutElasticRect.set(200, 560, 15, 15);

	easeInBounceRect.set(200, 580, 15, 15);
	easeOutBounceRect.set(200, 600, 15, 15);
	easeInOutBounceRect.set(200, 620, 15, 15);

	linearRect.set(200, 640, 15, 15);
}

//--------------------------------------------------------------
void ofApp::update(){
    Tweener.update();
}

//--------------------------------------------------------------
void ofApp::draw() {
	ofSetHexColor(0x0000ff);
	ofCircle(position.x, position.y, radius);

	ofSetHexColor(0x000000);
	ofDrawBitmapString("Click anywhere to start the animation of the circle,\n\tor click on the red square area to start the selected animation.", 10, 10);

	ofDrawBitmapString("easeInSine", easeInSineRect.x - 120, easeInSineRect.y + 15);
	ofDrawBitmapString("easeOutSine", easeOutSineRect.x - 120, easeOutSineRect.y + 15);
	ofDrawBitmapString("easeInOutSine", easeInOutSineRect.x - 120, easeInOutSineRect.y + 15);

	ofDrawLine(50, easeInOutSineRect.y + 17.5, 976, easeInOutSineRect.y + 17.5);

	ofDrawBitmapString("easeInCubic", easeInCubicRect.x - 120, easeInCubicRect.y + 15);
	ofDrawBitmapString("easeOutCubic", easeOutCubicRect.x - 120, easeOutCubicRect.y + 15);
	ofDrawBitmapString("easeInOutCubic", easeInOutCubicRect.x - 120, easeInOutCubicRect.y + 15);

	ofDrawLine(50, easeInOutCubicRect.y + 17.5, 976, easeInOutCubicRect.y + 17.5);

	ofDrawBitmapString("easeInQuint", easeInQuintRect.x - 120, easeInQuintRect.y + 15);
	ofDrawBitmapString("easeOutQuint", easeOutQuintRect.x - 120, easeOutQuintRect.y + 15);
	ofDrawBitmapString("easeInOutQuint", easeInOutQuintRect.x - 120, easeInOutQuintRect.y + 15);

	ofDrawLine(50, easeInOutQuintRect.y + 17.5, 976, easeInOutQuintRect.y + 17.5);

	ofDrawBitmapString("easeInCirc", easeInCircRect.x - 120, easeInCircRect.y + 15);
	ofDrawBitmapString("easeOutCirc", easeOutCircRect.x - 120, easeOutCircRect.y + 15);
	ofDrawBitmapString("easeInOutCirc", easeInOutCircRect.x - 120, easeInOutCircRect.y + 15);

	ofDrawLine(50, easeInOutCircRect.y + 17.5, 976, easeInOutCircRect.y + 17.5);

	ofDrawBitmapString("easeInBack", easeInBackRect.x - 120, easeInBackRect.y + 15);
	ofDrawBitmapString("easeOutBack", easeOutBackRect.x - 120, easeOutBackRect.y + 15);
	ofDrawBitmapString("easeInOutBack", easeInOutBackRect.x - 120, easeInOutBackRect.y + 15);

	ofDrawLine(50, easeInOutBackRect.y + 17.5, 976, easeInOutBackRect.y + 17.5);

	ofDrawBitmapString("easeInQuad", easeInQuadRect.x - 120, easeInQuadRect.y + 15);
	ofDrawBitmapString("easeOutQuad", easeOutQuadRect.x - 120, easeOutQuadRect.y + 15);
	ofDrawBitmapString("easeInOutQuad", easeInOutQuadRect.x - 120, easeInOutQuadRect.y + 15);

	ofDrawLine(50, easeInOutQuadRect.y + 17.5, 976, easeInOutQuadRect.y + 17.5);

	ofDrawBitmapString("easeInQuart", easeInQuartRect.x - 120, easeInQuartRect.y + 15);
	ofDrawBitmapString("easeOutQuart", easeOutQuartRect.x - 120, easeOutQuartRect.y + 15);
	ofDrawBitmapString("easeInOutQuart", easeInOutQuartRect.x - 120, easeInOutQuartRect.y + 15);

	ofDrawLine(50, easeInOutQuartRect.y + 17.5, 976, easeInOutQuartRect.y + 17.5);

	ofDrawBitmapString("easeInExpo", easeInExpoRect.x - 120, easeInExpoRect.y + 15);
	ofDrawBitmapString("easeOutExpo", easeOutExpoRect.x - 120, easeOutExpoRect.y + 15);
	ofDrawBitmapString("easeInOutExpo", easeInOutExpoRect.x - 120, easeInOutExpoRect.y + 15);

	ofDrawLine(50, easeInOutExpoRect.y + 17.5, 976, easeInOutExpoRect.y + 17.5);

	ofDrawBitmapString("easeInElastic", easeInElasticRect.x - 120, easeInElasticRect.y + 15);
	ofDrawBitmapString("easeOutElastic", easeOutElasticRect.x - 120, easeOutElasticRect.y + 15);
	ofDrawBitmapString("easeInOutElastic", easeInOutElasticRect.x - 120, easeInOutElasticRect.y + 15);

	ofDrawLine(50, easeInOutElasticRect.y + 17.5, 976, easeInOutElasticRect.y + 17.5);

	ofDrawBitmapString("easeInBounce", easeInBounceRect.x - 120, easeInBounceRect.y + 15);
	ofDrawBitmapString("easeOutBounce", easeOutBounceRect.x - 120, easeOutBounceRect.y + 15);
	ofDrawBitmapString("easeInOutBounce", easeInOutBounceRect.x - 120, easeInOutBounceRect.y + 15);

	ofDrawLine(50, easeInOutBounceRect.y + 17.5, 976, easeInOutBounceRect.y + 17.5);

	ofDrawBitmapString("linear", linearRect.x - 120, linearRect.y + 15);

	ofSetHexColor(0xff0000);
	ofDrawRectangle(easeInSineRect);
	ofDrawRectangle(easeOutSineRect);
	ofDrawRectangle(easeInOutSineRect);

	ofDrawRectangle(easeInCubicRect);
	ofDrawRectangle(easeOutCubicRect);
	ofDrawRectangle(easeInOutCubicRect);

	ofDrawRectangle(easeInQuintRect);
	ofDrawRectangle(easeOutQuintRect);
	ofDrawRectangle(easeInOutQuintRect);

	ofDrawRectangle(easeInCircRect);
	ofDrawRectangle(easeOutCircRect);
	ofDrawRectangle(easeInOutCircRect);

	ofDrawRectangle(easeInBackRect);
	ofDrawRectangle(easeOutBackRect);
	ofDrawRectangle(easeInOutBackRect);

	ofDrawRectangle(easeInQuadRect);
	ofDrawRectangle(easeOutQuadRect);
	ofDrawRectangle(easeInOutQuadRect);

	ofDrawRectangle(easeInQuartRect);
	ofDrawRectangle(easeOutQuartRect);
	ofDrawRectangle(easeInOutQuartRect);

	ofDrawRectangle(easeInExpoRect);
	ofDrawRectangle(easeOutExpoRect);
	ofDrawRectangle(easeInOutExpoRect);

	ofDrawRectangle(easeInElasticRect);
	ofDrawRectangle(easeOutElasticRect);
	ofDrawRectangle(easeInOutElasticRect);

	ofDrawRectangle(easeInBounceRect);
	ofDrawRectangle(easeOutBounceRect);
	ofDrawRectangle(easeInOutBounceRect);

	ofDrawRectangle(linearRect);
}

//--------------------------------------------------------------
void ofApp::callbackX(float *arg)
{
	std::cout << "[INFO] Callback-method. Now X is " << position.x << std::endl;
}

void ofApp::callbackY(float * arg)
{
	std::cout << "[INFO] Callback-method. Now Y is " << position.y << std::endl;
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
	
	if (easeInSineRect.inside(x, y)) {
		auto newX = (rightInSine) ? 200 : 1024 - 100;
		Tweener.addTween(easeInSineRect.x, newX, 2.5, &ofxTransitions::easeInSine);
		rightInSine = !rightInSine;
		return;
	}
	if (easeOutSineRect.inside(x, y)) {
		auto newX = (rightOutSine) ? 200 : 1024 - 100;
		Tweener.addTween(easeOutSineRect.x, newX, 2.5, &ofxTransitions::easeOutSine);
		rightOutSine = !rightOutSine;
		return;
	}
	if (easeInOutSineRect.inside(x, y)) {
		auto newX = (rightInOutSine) ? 200 : 1024 - 100;
		Tweener.addTween(easeInOutSineRect.x, newX, 2.5, &ofxTransitions::easeInOutSine);
		rightInOutSine = !rightInOutSine;
		return;
	}

	if (easeInCubicRect.inside(x, y)) {
		auto newX = (rightInCubic) ? 200 : 1024 - 100;
		Tweener.addTween(easeInCubicRect.x, newX, 2.5, &ofxTransitions::easeInCubic);
		rightInCubic = !rightInCubic;
		return;
	}
	if (easeOutCubicRect.inside(x, y)) {
		auto newX = (rightOutCubic) ? 200 : 1024 - 100;
		Tweener.addTween(easeOutCubicRect.x, newX, 2.5, &ofxTransitions::easeOutCubic);
		rightOutCubic = !rightOutCubic;
		return;
	}
	if (easeInOutCubicRect.inside(x, y)) {
		auto newX = (rightInOutCubic) ? 200 : 1024 - 100;
		Tweener.addTween(easeInOutCubicRect.x, newX, 2.5, &ofxTransitions::easeInOutCubic);
		rightInOutCubic = !rightInOutCubic;
		return;
	}

	if (easeInQuintRect.inside(x, y)) {
		auto newX = (rightInQuint) ? 200 : 1024 - 100;
		Tweener.addTween(easeInQuintRect.x, newX, 2.5, &ofxTransitions::easeInQuint);
		rightInQuint = !rightInQuint;
		return;
	}
	if (easeOutQuintRect.inside(x, y)) {
		auto newX = (rightOutQuint) ? 200 : 1024 - 100;
		Tweener.addTween(easeOutQuintRect.x, newX, 2.5, &ofxTransitions::easeOutQuint);
		rightOutQuint = !rightOutQuint;
		return;
	}
	if (easeInOutQuintRect.inside(x, y)) {
		auto newX = (rightInOutQuint) ? 200 : 1024 - 100;
		Tweener.addTween(easeInOutQuintRect.x, newX, 2.5, &ofxTransitions::easeInOutQuint);
		rightInOutQuint = !rightInOutQuint;
		return;
	}

	if (easeInCircRect.inside(x, y)) {
		auto newX = (rightInCirc) ? 200 : 1024 - 100;
		Tweener.addTween(easeInCircRect.x, newX, 2.5, &ofxTransitions::easeInCirc);
		rightInCirc = !rightInCirc;
		return;
	}
	if (easeOutCircRect.inside(x, y)) {
		auto newX = (rightOutCirc) ? 200 : 1024 - 100;
		Tweener.addTween(easeOutCircRect.x, newX, 2.5, &ofxTransitions::easeOutCirc);
		rightOutCirc = !rightOutCirc;
		return;
	}
	if (easeInOutCircRect.inside(x, y)) {
		auto newX = (rightInOutCirc) ? 200 : 1024 - 100;
		Tweener.addTween(easeInOutCircRect.x, newX, 2.5, &ofxTransitions::easeInOutCirc);
		rightInOutCirc = !rightInOutCirc;
		return;
	}

	if (easeInBackRect.inside(x, y)) {
		auto newX = (rightInBack) ? 200 : 1024 - 100;
		Tweener.addTween(easeInBackRect.x, newX, 2.5, &ofxTransitions::easeInBack);
		rightInBack = !rightInBack;
		return;
	}
	if (easeOutBackRect.inside(x, y)) {
		auto newX = (rightOutBack) ? 200 : 1024 - 100;
		Tweener.addTween(easeOutBackRect.x, newX, 2.5, &ofxTransitions::easeOutBack);
		rightOutBack = !rightOutBack;
		return;
	}
	if (easeInOutBackRect.inside(x, y)) {
		auto newX = (rightInOutBack) ? 200 : 1024 - 100;
		Tweener.addTween(easeInOutBackRect.x, newX, 2.5, &ofxTransitions::easeInOutBack);
		rightInOutBack = !rightInOutBack;
		return;
	}

	if (easeInQuadRect.inside(x, y)) {
		auto newX = (rightInQuad) ? 200 : 1024 - 100;
		Tweener.addTween(easeInQuadRect.x, newX, 2.5, &ofxTransitions::easeInQuad);
		rightInQuad = !rightInQuad;
		return;
	}
	if (easeOutQuadRect.inside(x, y)) {
		auto newX = (rightOutQuad) ? 200 : 1024 - 100;
		Tweener.addTween(easeOutQuadRect.x, newX, 2.5, &ofxTransitions::easeOutQuad);
		rightOutQuad = !rightOutQuad;
		return;
	}
	if (easeInOutQuadRect.inside(x, y)) {
		auto newX = (rightInOutQuad) ? 200 : 1024 - 100;
		Tweener.addTween(easeInOutQuadRect.x, newX, 2.5, &ofxTransitions::easeInOutQuad);
		rightInOutQuad = !rightInOutQuad;
		return;
	}

	if (easeInQuartRect.inside(x, y)) {
		auto newX = (rightInQuart) ? 200 : 1024 - 100;
		Tweener.addTween(easeInQuartRect.x, newX, 2.5, &ofxTransitions::easeInQuart);
		rightInQuart = !rightInQuart;
		return;
	}
	if (easeOutQuartRect.inside(x, y)) {
		auto newX = (rightOutQuart) ? 200 : 1024 - 100;
		Tweener.addTween(easeOutQuartRect.x, newX, 2.5, &ofxTransitions::easeOutQuart);
		rightOutQuart = !rightOutQuart;
		return;
	}
	if (easeInOutQuartRect.inside(x, y)) {
		auto newX = (rightInOutQuart) ? 200 : 1024 - 100;
		Tweener.addTween(easeInOutQuartRect.x, newX, 2.5, &ofxTransitions::easeInOutQuart);
		rightInOutQuart = !rightInOutQuart;
		return;
	}

	if (easeInExpoRect.inside(x, y)) {
		auto newX = (rightInExpo) ? 200 : 1024 - 100;
		Tweener.addTween(easeInExpoRect.x, newX, 2.5, &ofxTransitions::easeInExpo);
		rightInExpo = !rightInExpo;
		return;
	}
	if (easeOutExpoRect.inside(x, y)) {
		auto newX = (rightOutExpo) ? 200 : 1024 - 100;
		Tweener.addTween(easeOutExpoRect.x, newX, 2.5, &ofxTransitions::easeOutExpo);
		rightOutExpo = !rightOutExpo;
		return;
	}
	if (easeInOutExpoRect.inside(x, y)) {
		auto newX = (rightInOutExpo) ? 200 : 1024 - 100;
		Tweener.addTween(easeInOutExpoRect.x, newX, 2.5, &ofxTransitions::easeInOutExpo);
		rightInOutExpo = !rightInOutExpo;
		return;
	}

	if (easeInElasticRect.inside(x, y)) {
		auto newX = (rightInElastic) ? 200 : 1024 - 100;
		Tweener.addTween(easeInElasticRect.x, newX, 2.5, &ofxTransitions::easeInElastic);
		rightInElastic = !rightInElastic;
		return;
	}
	if (easeOutElasticRect.inside(x, y)) {
		auto newX = (rightOutElastic) ? 200 : 1024 - 100;
		Tweener.addTween(easeOutElasticRect.x, newX, 2.5, &ofxTransitions::easeOutElastic);
		rightOutElastic = !rightOutElastic;
		return;
	}
	if (easeInOutElasticRect.inside(x, y)) {
		auto newX = (rightInOutElastic) ? 200 : 1024 - 100;
		Tweener.addTween(easeInOutElasticRect.x, newX, 2.5, &ofxTransitions::easeInOutElastic);
		rightInOutElastic = !rightInOutElastic;
		return;
	}

	if (easeInBounceRect.inside(x, y)) {
		auto newX = (rightInBounce) ? 200 : 1024 - 100;
		Tweener.addTween(easeInBounceRect.x, newX, 2.5, &ofxTransitions::easeInBounce);
		rightInBounce = !rightInBounce;
		return;
	}
	if (easeOutBounceRect.inside(x, y)) {
		auto newX = (rightOutBounce) ? 200 : 1024 - 100;
		Tweener.addTween(easeOutBounceRect.x, newX, 2.5, &ofxTransitions::easeOutBounce);
		rightOutBounce = !rightOutBounce;
		return;
	}
	if (easeInOutBounceRect.inside(x, y)) {
		auto newX = (rightInOutBounce) ? 200 : 1024 - 100;
		Tweener.addTween(easeInOutBounceRect.x, newX, 2.5, &ofxTransitions::easeInOutBounce);
		rightInOutBounce = !rightInOutBounce;
		return;
	}

	if (linearRect.inside(x, y)) {
		auto newX = (rightLinear) ? 200 : 1024 - 100;
		Tweener.addTween(linearRect.x, newX, 2.5, &ofxTransitions::linear);
		rightLinear = !rightLinear;
		return;
	}


    // simple fast implementation with callback
	auto cbX = std::bind(&ofApp::callbackX, this, std::placeholders::_1);
	auto cbY = std::bind(&ofApp::callbackY, this, std::placeholders::_1);
	Tweener.addTween(position.x, ofRandom(1024), 5, cbX);
    Tweener.addTween(position.y, ofRandom(768), 5, cbY);
	Tweener.addTween(radius, 5 + ofRandom(50), 5, [](float *arg) { std::cout << "[INFO] Lambda callback. Now radius is " << arg[0] << std::endl; });

	// simple fast implementation without callback
	//Tweener.addTween(position.x, ofRandom(1024), 5);
	//Tweener.addTween(position.y, ofRandom(768), 5);

    // custom ease
    //Tweener.addTween(position.x, ofRandom(1024), 5, &ofxTransitions::easeOutElastic);
    //Tweener.addTween(position.y, ofRandom(768),  5, &ofxTransitions::easeOutElastic);
    
    // adding delay
    //Tweener.addTween(position.x, ofRandom(1024), 5, &ofxTransitions::easeOutElastic, 1);
    //Tweener.addTween(position.y, ofRandom(768),  5, &ofxTransitions::easeOutElastic, 0.5);
    
    // bezier tweening
    //Tweener.addTween(position.x, ofRandom(1024), 1, &ofxTransitions::easeOutCubic, 0, 1024/2);
    //Tweener.addTween(position.y, ofRandom(768),  1, &ofxTransitions::easeOutCubic, 0, 768/2);
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
