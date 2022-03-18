//
//  colorfulSpace.hpp
//  myFinalProject
//
//  Created by Sali Mallat on 17/03/2022.
//

#ifndef colorfulSpace_hpp
#define colorfulSpace_hpp

#include <stdio.h>
#include "ofMain.h"

// -----------------------------------------------------------------
// COLORFULSPACE CLASS ---------------------------------------------
// -----------------------------------------------------------------

class colorfulSpace {
    
    public:
        
        colorfulSpace();
    
        void setup();
        void update();
        void draw(int k);
    
        void mousePressed(int x, int y, int button);
        void mouseReleased(int x, int y, int button);
    
        ofEasyCam camera;
    
        int segments;
        float spacing;
        int radius;
        float x;
        float y;
        float size;
    
        float time;
        float value;
        float v;
    
        unsigned long last;
        int counter;
        ofColor col;
        int alpha;
    
        ofSpherePrimitive sphere;
        
        ofLight pointLight;
        ofLight pointLight2;
        ofLight pointLight3;

        ofMaterial material;
    
        float mouseX = ofGetMouseX()/50;

};



#endif /* colorfulSpace_hpp */
