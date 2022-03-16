#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0);
    //ofSetBackgroundAuto(false);
    ofSetCircleResolution(100);
    ofSetFrameRate(80);
    ofSetRectMode(OF_RECTMODE_CENTER);
}

//--------------------------------------------------------------
void ofApp::update(){
    rotate++;
}

//--------------------------------------------------------------
void ofApp::draw(){
    theta = theta + .03;
    amplitude = 200;
    frequency = 0.01;
    
    // Waves
    
        
    time = ofGetElapsedTimef();
    
    
    ofNoFill();

    ofSetColor(157, 70);
    
    for (int i = 0; i < 5; i++) {

        for (int j = 0; j < 140; j++) {
            size = 70 * tan(sin(j + time));
            ofSetLineWidth(ofRandom(1,2.5));

            x = ofGetWidth()/2 + size * sin(tan(sin(j))*0.05) * 70;
            y = ofGetHeight()/2;

            ofDrawCircle(x , y , size * i);
        }

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
