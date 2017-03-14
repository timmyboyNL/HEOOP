#pragma once
#include "ofMain.h"

class Particle2 {
private:
	ofPoint location;
	int radius;
	ofVec2f speed;

	ofColor innerColor;
	ofColor outerColor;

public:
	Particle2(); //constructor

	void init();
	void move();
	void draw();

};
