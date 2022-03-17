#include "testApp.h"

testApp::~testApp()
{
	for (int i = 0; i < boids.size(); i++)
	{
		delete boids[i];
	}

	for (int i = 0; i < babyboids.size(); i++)
	{
		delete babyboids[i];
	}
}

//--------------------------------------------------------------
void testApp::setup(){
	
	
	int screenW = ofGetScreenWidth();
	int screenH = ofGetScreenHeight();

	ofBackground(0,0,0);
	
	// set up the boids
	for (int i = 0; i < 100; i++)
		boids.push_back(new Boid());

	for (int i = 0; i < 100; i++)
	{
		Boid* myBoid = new BabyBoid();							//upcasting: allows a child to be treated as parent
		babyboids.push_back(myBoid);
	}
}


//--------------------------------------------------------------
void testApp::update(){
	
    ofVec3f min(0, 0);
	ofVec3f max(ofGetWidth(), ofGetHeight());

	for (int i = 0; i < boids.size(); i++)
	{
		boids[i]->update(boids, babyboids, min, max);
	}

	for (int i = 0; i < babyboids.size(); i++)
	{
		BabyBoid* myBabyBoid = (BabyBoid*)babyboids[i];
		myBabyBoid->update(babyboids, boids, min, max);
	}
}

//--------------------------------------------------------------
void testApp::draw(){

	for (int i = 0; i < boids.size(); i++)
	{
		boids[i]->draw();
	}

	for (int i = 0; i < babyboids.size(); i++)
	{
		BabyBoid* myBabyBoid = (BabyBoid*)babyboids[i];		//downcasting: allows a parent to be treated as child
		myBabyBoid->draw2();
		//babyboids[i]->draw();
	}
}


//--------------------------------------------------------------
void testApp::keyPressed(int key){
 
}

//--------------------------------------------------------------
void testApp::keyReleased(int key){
    
}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){
    
}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){
    
}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){
	
}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){
    
}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){
    
}
