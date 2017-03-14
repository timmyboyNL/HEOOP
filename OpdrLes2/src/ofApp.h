#pragma once

#include "ofMain.h"
#include "Particle.h"
#include "Particle2.h"

#define MAX_PARTICLES 150
#define MAX_PARTICLES2 150

class ofApp : public ofBaseApp {

public:
	void setup();
	void update();
	void draw();

	void keyPressed(int key);
	void keyReleased(int key);

	Particle* particles[MAX_PARTICLES];
	void setRandomColor(Particle* particle);

	Particle2* particles2[MAX_PARTICLES2];
	void setRandomColor(Particle2* particle2);
};
