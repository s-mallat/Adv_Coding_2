//
//  myComp.hpp
//  myFinalProject
//
//  Created by Sally Mallat on 03/03/2022.
//

#ifndef myComp_hpp
#define myComp_hpp


#include <stdio.h>
#include "ofMain.h"

// myComp --> Parent Class
//
//
// All other classes will be derived from this
// class NOT ofApp class. This is because if I
// make a class from ofApp, it will override
// the existing draw function and the file won't
// compile or won't work!

class myComp {
    
    public:
        
        myComp();
    
        void setup();
        void update();
        virtual void draw();

    
        float theta;
        float amplitude;
        float frequency;

        float translate;
        float time;

        int x;
        int y;
    
        float centerX;
        float centerY;
};

//--------------------------------------------------------------
//--------------------------------------------------------------


class myClass : myComp {
    
    public:
        
        myClass();
    
        void draw();

};

#endif /* myComp_hpp */
