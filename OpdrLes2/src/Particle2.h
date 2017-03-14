#pragma once
#include "ofMain.h"

class Particle2 {
private:
	ofPoint location;
	int radius;
	ofVec2f speed;
	long lifetime;

	ofColor innerColor;
	ofColor outerColor;

public:
	Particle2(); //constructor

	void init();
	void move();
	void draw();
	void setColors(ofColor outer, ofColor inner);

};

