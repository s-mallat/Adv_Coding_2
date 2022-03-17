/*

 *
 */

#ifndef _BOID
#define _BOID
#include <vector>
#include "ofMain.h"

class Boid
{
public:	
	ofVec3f position;
	ofVec3f velocity;
	
	float separationWeight;
	float cohesionWeight;
	float alignmentWeight;
	
	float separationThreshold;
	float neighbourhoodSize;
	
	ofVec3f separation(std::vector<Boid *> &otherBoids, std::vector<Boid*> &otherFlock);
	ofVec3f cohesion(std::vector<Boid *> &otherBoids);
	ofVec3f alignment(std::vector<Boid *> &otherBoids);

	Boid();
	Boid(ofVec3f &pos, ofVec3f &vel);
	
	~Boid();
	
	ofVec3f getPosition();
	ofVec3f getVelocity();
	
	
	float getSeparationWeight();
	float getCohesionWeight();
	float getAlignmentWeight();
	
	float getSeparationThreshold();
	float getNeighbourhoodSize();
	
	void setSeparationWeight(float f);
	void setCohesionWeight(float f);
	void setAlignmentWeight(float f);
	
	void setSeparationThreshold(float f);
	void setNeighbourhoodSize(float f);
	
	void update(std::vector<Boid *> &otherBoids, std::vector<Boid*>& otherFlock, ofVec3f &min, ofVec3f &max);
	
	void walls(ofVec3f &min, ofVec3f &max);
	
	void draw();
};

#endif
