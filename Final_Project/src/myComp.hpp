//
//  myComp.hpp
//  myFinalProject
//
//  Created by Sali Mallat on 03/03/2022.
//

#ifndef myComp_hpp
#define myComp_hpp


#include <stdio.h>
#include "ofMain.h"


// -----------------------------------------------------------------
// BUBBLES CLASS ---------------------------------------------------
// -----------------------------------------------------------------

class bubbles {
    
    public:
        
        bubbles();
    
        virtual void setup();
        virtual void update();
        virtual void draw();
        
        virtual void mousePressed(int x, int y, int button);
        virtual void mouseReleased(int x, int y, int button);

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

// -----------------------------------------------------------------
// WAVES CLASS -----------------------------------------------------
// -----------------------------------------------------------------

class waves : bubbles {
    
    public:
        
        waves();
    
        void setup();
        void update();
        void draw();
        ofEasyCam camera;
    
        float time;

};


#endif /* myComp_hpp */
