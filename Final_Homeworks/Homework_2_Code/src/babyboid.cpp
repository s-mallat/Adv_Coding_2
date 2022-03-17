#include "babyboid.h"
#include "ofMain.h"

void BabyBoid::draw2()
{
    time = ofGetElapsedTimef();
    ofNoFill();
    ofSetLineWidth(4);
	ofSetColor(255, 150, 30);
	//ofDrawCircle(position.x, position.y, 20 + sin(TWO_PI / 1000) * 200);
    ofDrawRectangle(position.x, position.y, 20 * sin( time / TWO_PI ), 10 * sin( time / TWO_PI ));

}
