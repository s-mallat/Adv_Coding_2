//
//  myComp.cpp
//  myFinalProject
//
//  Created by Sally Mallat on 03/03/2022.
//

#include "myComp.hpp"

myComp::myComp() {
    
}

void myComp::setup() {
    ofSetBackgroundAuto(false);
    

    
}

void myComp::draw() {
    
    theta = theta + .03;
    amplitude = 300;
    frequency = 0.01;
    ofNoFill();
    
    time = ofGetElapsedTimef();
    
    ofSetLineWidth(2);
    ofSetColor(10 * time, 20 * time , 237);
    
    for (int i = 0; i < ofGetWindowWidth(); i++) {
        translate = amplitude * sin(i * frequency + time);
        ofDrawCircle(i * sin(tan(i) * 0.08 + time), ofGetHeight()/2 + translate, 100 * sin(tan(i)*0.01));
    }

    for (int i = 0; i < ofGetWindowWidth(); i++) {
        ofDrawCircle(i * sin(tan(i) * 0.08 + time), ofGetHeight()/2 + amplitude * cos(i * frequency + time), 100 * sin(tan(i)*0.01));
    }

}

//--------------------------------------------------------------
//--------------------------------------------------------------


myClass::myClass() {
    
}


void myClass::draw() {
    
    time = ofGetElapsedTimef();
    centerX = ofGetWidth()/2;
    centerY = ofGetHeight()/2;
    
    ofFill();
    ofSetColor(100, 100, 100);
    
    for (int i = 0; i < 900; i++) {
        ofDrawCircle(centerX * sin(i * 0.01 + time), i, 50 + 40 * sin(i * 0.005 + time));
    }
}
