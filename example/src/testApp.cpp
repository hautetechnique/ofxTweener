#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    radius = 5;
}

//--------------------------------------------------------------
void testApp::update(){
    Tweener.update();
}

//--------------------------------------------------------------
void testApp::draw(){

    ofCircle(position.x, position.y, radius);
    ofDrawBitmapString("Click anywhere to start tween", 10,10);
}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){
    
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
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 

}