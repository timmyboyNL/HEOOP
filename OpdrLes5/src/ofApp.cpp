#include "ofApp.h"

void ofApp::setup() {
    ofSetBackgroundColor(ofColor::black);
	for (int i = 0; i < MAX_PARTICLES; i++) {
		Particle part = Particle();
		part.init();
		particles.push_back(part);
		setRandomColor(part);
	}
}

void ofApp::update() {
	vector<Particle>::iterator it = particles.begin();
	while (it != particles.end()) {
		it->move();
		it++;
	}

	particleKiller();
}

void ofApp::draw() {
	vector<Particle>::iterator it = particles.begin();
	while (it != particles.end()) {
		it->draw();
		it++;
	}
}

void ofApp::keyPressed(int key) {
	vector<Particle>::iterator it = particles.begin();
	while (it != particles.end()) {
		it->init();
		it++;
		
	}

	for (int i = 0; i < MAX_PARTICLES; i++) {
		Particle part = Particle();
		part.init();
		particles.push_back(part);
	}
}

void ofApp::particleKiller()
{
	vector<Particle>::iterator it = particles.begin();
	while (it != particles.end()) {
		if (it->isDead == true)
		{
			it = particles.erase(it);
		}

		else
		{
			it++;
		}
	}
}// kreeg het niet werkend, wel nog een & er tussen gezet.
void ofApp::setRandomColor(Particle& part) {
	float random = ofRandom(10);
	if (random > 3 && random < 7) {
		part.setColors(ofColor(247, 140, 129, 15), ofColor(227, 47, 27, 127));
	}
	else if (random >= 7) {
		part.setColors(ofColor(185, 250, 155, 15), ofColor(114, 240, 55, 127));
	}

}

