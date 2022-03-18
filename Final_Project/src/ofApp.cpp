#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofBackground(0, 0, 0);
    ofSetCircleResolution(100);

    ofSetFrameRate(60); // 60 FPS for now

    centerX = ofGetWidth()/2;
    centerY = ofGetHeight()/2;
    
    //SOUND SETUP --> Source: https://freesound.org/
    synth1.load("main-synth.wav");
    synth2.load("jazz-chords.wav");
    synth3.load("other-synth.wav");
    synth4.load("reverse-classic.wav");

    synth1.setVolume(0.75f);
    synth2.setVolume(0.75f);
    synth3.setVolume(0.75f);
    synth4.setVolume(0.75f);
    
    synth1.setLoop(true);
    synth2.setLoop(true);
    synth3.setLoop(true);
    synth4.setLoop(true);

    //GUI SETUP
    gui.setup();
    gui.add(playPause.setup("FREEZE!!!", false));
    gui.add(soundPlay.setup("Jazz", false));
    gui.add(jazzSound.setup("Mix", false));
    gui.add(pianoSound.setup("Classic", false));
    gui.add(mix.setup("Default", false));

    //LOAD 3D SETUP FOR COLORFULSPACE CLASS
    mySpace.setup();
    
    //DEFAULT MUSIC ON RUN [This has to go in setup!]
    synth1.play();
    synth1.setSpeed(1.0f);


}

//--------------------------------------------------------------
void ofApp::update(){

    ofSoundUpdate();
    mySpace.update();

}

//--------------------------------------------------------------
void ofApp::draw(){

    //GUI DRAW
    ofPushMatrix();
        if (playPause) {
            ofResetElapsedTimeCounter();
        }
        if (soundPlay) {
            synth1.stop();
            synth3.stop();
            synth4.stop();
            
            synth2.play();
            synth2.setSpeed(1.0f);
        }
        if (jazzSound) {
            synth1.stop();
            synth2.stop();
            synth4.stop();
            
            synth3.play();
            synth3.setSpeed(1.0f);
        }
        if (pianoSound) {
            synth1.stop();
            synth2.stop();
            synth3.stop();
            
            synth4.play();
            synth4.setSpeed(1.0f);
        }
        if (mix) {
            synth2.stop();
            synth3.stop();
            synth4.stop();
            
            synth1.play();
            synth1.setSpeed(1.0f);
        }
    
    gui.draw();
    ofPopMatrix();
    
    

    //CALLING CLASS OBJECTS THROUGH FRAME NUMBER
    ofPushMatrix();

        ofEnableDepthTest(); //Don't forget to disable later!!!
    
    //FRAMES 0 --> 800
        if (ofGetFrameNum() < 800) {

        //FOLIOS
        ofPushMatrix();
                ofSetColor(120, 255, 100);
                ofTranslate(250, 0);
                ofDrawBitmapString("Advanced Coding #2 / Final Project / By Sali Mallat / 20040127 \n>>> Move your MOUSE around!", 15, 20);
        ofPopMatrix();

        //CLASS OBJECTS --> BUBBLES
        ofPushMatrix();
        myBubbles1.draw();

        ofScale(0.5);
        ofTranslate(0, centerY);
        myBubbles2.draw();
        ofPopMatrix();

        }
    
    //FRAMES 800 --> 1600
        else if (ofGetFrameNum() > 800 && ofGetFrameNum() < 1600) {
         
        //FOLIOS
        ofPushMatrix();
                ofSetColor(120, 255, 100);
                ofTranslate(250, 0);
                ofDrawBitmapString("Advanced Coding #2 / Final Project / By Sali Mallat / 20040127 \n>>> MOVE / DRAG / ZOOM!", 15, 20);
        ofPopMatrix();

        //CLASS OBJECTS --> WAVES
        ofPushMatrix();
        myWaves1.draw();
        ofPopMatrix();
            
        }
    
    //FRAMES 1600 --> 2400
        else if (ofGetFrameNum() > 1600 && ofGetFrameNum() < 2400) {
            
            //FOLIOS
            ofPushMatrix();
                ofSetColor(120, 255, 100);
                ofTranslate(250, 0);
                ofDrawBitmapString("Advanced Coding #2 / Final Project / By Sali Mallat / 20040127 \n>>> MOVE / DRAG / ZOOM!", 15, 20);
            ofPopMatrix();

            //CLASS OBJECTS --> COLORFULSPACE
            ofPushMatrix();
            ofEnableLighting(); //Must include of colored light won't show
            mySpace.draw(50);
            ofDisableLighting();
            ofPopMatrix();
                    
        }
    
    //FRAMES 2400+
        if (ofGetFrameNum() > 2400) {
            
            //FOLIOS
            ofPushMatrix();
                    ofSetColor(120, 255, 100);
                    ofTranslate(250, 0);
                    ofDrawBitmapString("Advanced Coding #2 / Final Project / By Sali Mallat / 20040127 \n>>> This is the last composition! Thank you for watching!", 15, 20);
            ofPopMatrix();

            //CLASS OBJECTS --> COLORFULSPACE
            ofPushMatrix();
            ofEnableLighting();
                ofPushMatrix();
                mySpace.draw(50);
                ofPopMatrix();
                
                
                ofPushMatrix();
                mySpace2.draw(5);
                ofPopMatrix();
            ofDisableLighting();
            ofPopMatrix();


        }
    
            ofDisableDepthTest();
    
    ofPopMatrix();


}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if(key == 'p'){
            ofSaveFrame();
        }
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
