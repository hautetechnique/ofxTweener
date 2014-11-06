#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    radius = 5;
}

//--------------------------------------------------------------
void ofApp::update(){
    Tweener.update();
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofCircle(position.x, position.y, radius);
    ofDrawBitmapString("Click anywhere to start tween", 10,10);
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
    
    // simple fast implementation
    Tweener.addTween(position.x, ofRandom(1024), 5);
    Tweener.addTween(position.y, ofRandom(768), 5);
    
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
