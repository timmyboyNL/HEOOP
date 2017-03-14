#pragma once

#include "ofMain.h"
#include "Particle.h"
#include "Particle2.h"

class ofApp : public ofBaseApp {

public:
	void setup();
	void update();
	void draw();

	void keyPressed(int key);
	void keyReleased(int key);

	Particle part1;
	Particle2 part2;
};
