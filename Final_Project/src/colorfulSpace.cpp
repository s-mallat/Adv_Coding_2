//
//  colorfulSpace.cpp
//  myFinalProject
//
//  Created by Sali Mallat on 17/03/2022.
//

#include "colorfulSpace.hpp"


// -----------------------------------------------------------------
// COLORFULSPACE CLASS ---------------------------------------------
// -----------------------------------------------------------------

colorfulSpace::colorfulSpace() {
    
}

void colorfulSpace::setup() {

    //BASIC SETUP
    ofBackground(0, 0, 0);
    ofSetCircleResolution(100);

    //3D PRIMITIVE SETUP
    last = ofGetElapsedTimeMillis();
    col.setHsb(0,255,255);
    alpha = ofMap(ofRandom(55, 225), 10, 200, 50, 220);
    sphere.setRadius(ofGetWidth() * .12);
    
    ofSetSmoothLighting(true);
    pointLight.setSpecularColor( ofFloatColor(1.f, 1.f, 1.f));
    
    material.setShininess( 100 );
    material.setAmbientColor(ofColor(255, 255, 255, 255));
    ofSetSphereResolution(24);
    
}

void colorfulSpace::update() {

 
    }
   
void colorfulSpace::draw(int k) {
    
    //LIGHT COLOR
    pointLight.setDiffuseColor( ofFloatColor(col) );
    
    if(ofGetElapsedTimeMillis() - last > 50)
        {
            col.setHue(counter % 256);
            counter ++;
            last = ofGetElapsedTimeMillis();
        }
    
    pointLight.setPosition((ofGetWidth()*.5)+ cos(ofGetElapsedTimef()*.5)*(ofGetWidth()*.3), ofGetHeight()/2, 500);
  
    //CAMERA CONTROLS
    camera.begin();

    segments = 1000;
    spacing = TWO_PI / segments;
    radius = 200;
    time = ofGetElapsedTimef();
    value = sin( time / M_TWO_PI );
    v = ofMap( value, -1, 1, 0, 255 );
    
    
    ofTranslate(0, 0);
    ofFill();
    ofSetLineWidth(3);
    ofRotateDeg(time * 2);
    
    //ENABLE
    ofEnableAlphaBlending();
    ofEnableDepthTest();
    ofEnableLighting();
    pointLight.enable();
    material.begin();
    
    //DESIGN
    for (int i = 0; i < 500; i++) {
              
            x = tan(spacing * i * (ofGetMouseX()/50)) * cos(spacing * i * (ofGetMouseY()/50)) * radius;
              
            y = tan(spacing * i * (ofGetMouseX()/50)) * sin(spacing * i * (ofGetMouseY()/50)) * radius;
              
              
            size = sin(spacing * i * value * 5);
              
              
 
            ofDrawSphere(x, y, k * size);
    }
    
    //VERY IMPORTANT TO DISABLE
    ofDisableAlphaBlending();
    ofDisableLighting();
    material.end();
    ofDisableDepthTest();
    camera.end();


}

//--------------------------------------------------------------
void colorfulSpace::mousePressed(int x, int y, int button){
}

//--------------------------------------------------------------
void colorfulSpace::mouseReleased(int x, int y, int button){
}
