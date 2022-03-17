#pragma once

#include "boid.h"
#include "ofMain.h"
#include <vector>

class BabyBoid : public Boid
{
public:
	void draw2();
    float x;
    float y;
    float time;
};

