#pragma once

#include "ofMain.h"
#include "myComp.hpp"
#include "ofxGui.h"
#include "colorfulSpace.hpp"



class ofApp : public ofBaseApp{

	public:
		void setup();
        void update();
        void draw();

        void keyPressed(int key);
        void keyReleased(int key);
        void mouseMoved(int x, int y );
        void mouseDragged(int x, int y, int button);
        void mousePressed(int x, int y, int button);
        void mouseReleased(int x, int y, int button);
        void mouseEntered(int x, int y);
        void mouseExited(int x, int y);
        void windowResized(int w, int h);
        void dragEvent(ofDragInfo dragInfo);
        void gotMessage(ofMessage msg);
    
        float centerX;
        float centerY;

        //GUI BASICS
        ofxPanel gui;
        ofxLabel screenSize;
        ofxToggle playPause;
        
        //GUI SOUND OBJECTS
        ofxButton soundPlay;
        ofxButton jazzSound;
        ofxButton pianoSound;
        ofxButton mix;

        //CLASS OBJECTS
        bubbles myBubbles1;
        bubbles myBubbles2;
        waves myWaves1;
        colorfulSpace mySpace;
        colorfulSpace mySpace2;
    
        //SOUND OBJECTS
        ofSoundPlayer  synth1;
        ofSoundPlayer  synth2;
        ofSoundPlayer  synth3;
        ofSoundPlayer  synth4;


};
