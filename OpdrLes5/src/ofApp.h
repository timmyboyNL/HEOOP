#pragma once

#include "ofMain.h"

#include "Particle.h"

#define MAX_PARTICLES 50

class ofApp : public ofBaseApp {

    public:
        void setup();

        void update();

        void draw();

        void keyPressed(int key);

		//Particle particles[MAX_PARTICLES];

    private:

		void particleKiller();

		vector<Particle> particles;

		void setRandomColor(Particle& part);

};
