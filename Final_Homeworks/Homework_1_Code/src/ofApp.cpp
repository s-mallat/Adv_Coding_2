#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0);
    ofSetCircleResolution(100);
    ofSetFrameRate(80);
    ofSetRectMode(OF_RECTMODE_CENTER);
    
    int sampleRate = 44100;
    int bufferSize= 512;
    ofxMaxiSettings::setup(sampleRate, 2, bufferSize);
    
    // Setup ofSound
    ofSoundStreamSettings settings;
    settings.setOutListener(this);
    settings.sampleRate = sampleRate;
    settings.numOutputChannels = 2;
    settings.numInputChannels = 0;
    settings.bufferSize = bufferSize;
    soundStream.setup(settings);
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
        
    time = ofGetElapsedTimef();
    
    ofNoFill();
    ofSetColor(157, 70);
    
    for (int i = 0; i < 5; i++) {

        for (int j = 0; j < 140; j++) {
            size = 70 * tan(sin(j + time)  + ofGetMouseX()/50);
            ofSetLineWidth(ofRandom(1,2.5));

            x = ofGetWidth()/2 + size * sin(tan(sin(j))*0.05) * 70 ;
            y = ofGetHeight()/2;

            ofDrawCircle(x , y , size * i);
        }

    }

}

void ofApp::audioOut(ofSoundBuffer& output){
    std::size_t outChannels = output.getNumChannels();
    for (int i = 0; i < output.getNumFrames(); ++i){

        output[i * outChannels] = myOsc1.sinewave(200 + (myOsc2.coswave(0.15) * 100) * myOsc3.coswave(0.20) * 20 + myOsc4.sinewave(0.10)) * myOsc5.sinewave(40) + myOsc6.sinewave(200);
        output[i * outChannels + 1] = output[i * outChannels];

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
