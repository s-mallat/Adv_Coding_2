//
//  myComp.cpp
//  myFinalProject
//
//  Created by Sali Mallat on 03/03/2022.
//

#include "myComp.hpp"


// -----------------------------------------------------------------
// BUBBLES CLASS ---------------------------------------------------
// -----------------------------------------------------------------

bubbles::bubbles() {
    
}

void bubbles::setup() {
    ofSetBackgroundAuto(true);

    
}

void bubbles::update() {

}

void bubbles::draw() {
    
    theta = theta + .03;
    amplitude = 300;
    frequency = 0.01;
    time = ofGetElapsedTimef();

    //WAVES --> ONLY STROKES
    ofPushMatrix();
    
        ofNoFill();
        ofSetLineWidth(2);
        ofSetColor(255);
        
        for (int i = 0; i < ofGetWindowWidth(); i++) {
            
            translate = amplitude * sin(i * frequency + time);
            ofDrawCircle(i * sin(tan(i) * 0.08 + time), ofGetHeight()/2 + translate, 100 * sin(tan(i)*0.01));
            
        }

        for (int i = 0; i < ofGetWindowWidth(); i++) {
            ofDrawCircle(i * sin(tan(i) * 0.08 + time), ofGetHeight()/2 + amplitude * cos(i * frequency + time), 100 * sin(tan(i)*0.01));
        }
    
    ofPopMatrix();
    
    //WAVES --> FILL
        ofFill();
        for (int i = 0; i < ofGetWindowWidth(); i++) {
            
            ofSetColor(ofGetMouseX() + sin(i * 0.01 + time),
                       91 * sin(i * 0.011 + time),
                       ofGetMouseX() * sin(i * 0.012 + time));
            
            translate = amplitude * sin(i * frequency + time);
            ofDrawCircle(i * sin(tan(i) * 0.08 + time), ofGetHeight()/2 + translate, 100 * sin(tan(i)*0.01));
            
        }

        for (int i = 0; i < ofGetWindowWidth(); i++) {
            
            ofSetColor(42 * sin(i * 0.01 + time),
                       ofGetMouseX() + sin(i * 0.011 + time),
                       ofGetMouseX() + sin(i * 0.012 + time));
            
            ofDrawCircle(i * sin(tan(i) * 0.08 + time), ofGetHeight()/2 + amplitude * cos(i * frequency + time), 100 * sin(tan(i)*0.01));
        }
    
}

//--------------------------------------------------------------
void bubbles::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void bubbles::mouseReleased(int x, int y, int button){

}


// -----------------------------------------------------------------
// WAVES CLASS -----------------------------------------------------
// -----------------------------------------------------------------


waves::waves() {
    
}

void waves::setup() {
    
}

void waves::update() {
    
}

void waves::draw() {
    
camera.begin();
    
    ofTranslate(-300, -250);
    time = ofGetElapsedTimef();
    ofFill();
    
    for (int x = 1; x < 20; x++) {
     
        for (int i = 0; i < 900; i++) {
            
            ofPushMatrix();
            ofSetColor(100 + ofGetMouseX() * sin(i * 0.01 + time),
                       50 + ofGetMouseX() * sin(i * 0.011 + time),
                       50 + ofGetMouseX() * sin(i * 0.012 + time));
            
            ofDrawSphere(i,
                         50 * x + 100 * cos( i * tan(0.01) + time + x),
                         50 * x + ofGetMouseY()/10 * sin( i * cos( i * tan(0.01) + time + x) + time * 0.5) ,
                         sin( i * 0.005 + time + x));
            ofPopMatrix();
        }
    }
    
camera.end();
}
