//
//  baby_boid.hpp
//  ArtificialLife_Boids
//
//  Created by Sally Mallat on 01/02/2022.
//

#ifndef baby_boid_hpp
#define baby_boid_hpp

#include <stdio.h>
#include <vector>
#include "ofMain.h"
#include "boid.h"

// Make the pointer array static and const
// in the parent class.

class baby_boid : public Boid {
    
public:
    
    ofVec3f newPos = getPosition();
    ofVec3f newVel = getVelocity();
    
    void draw();

};

#endif /* baby_boid_hpp */
