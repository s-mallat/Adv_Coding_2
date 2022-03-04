// ofApp will include ONLY structural script
// that will apply to the entire project.
//
// The bulk of the code will go into
// multiple classes to make it easier
// to understand and follow.

#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofBackground(0, 0, 0);
    ofSetCircleResolution(100);

    ofSetFrameRate(60); // 60 FPS for now
    ofSetDepthTest(true);
    
    centerX = ofGetWidth()/2;
    centerY = ofGetHeight()/2;
    
    Folios = "Advanced Coding #2 / Final Project / By Sali Mallat / 20040127 \n>>> Please Use Mouse to Interact!";
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofSetColor(120, 255, 100);
    ofDrawBitmapString(Folios, 15, 20);
    
    if (ofGetFrameNum() < 1000) {
            
        comp1.draw();

        ofScale(0.5);
        ofTranslate(0, centerY);
        comp2.draw();
        
        // myClass1.draw();
        
        
                
    }
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

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

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

//--------------------------------------------------------------
//--------------------------------------------------------------
