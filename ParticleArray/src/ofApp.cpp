#include "ofApp.h"

void ofApp::setup() {
	ofSetBackgroundColor(ofColor::black);

	for (int i = 0; i < MAX_PARTICLES; i++) {
		particles[i] = new Particle();
		particles[i] = new Particle2();
		particles[i]->init();
		setRandomColor(particles[i]);
	}
}


void ofApp::update(){
		for (int i = 0; i < MAX_PARTICLES; i++) {
			particles[i]->move();
		}
}

void ofApp::draw(){
	for (int i = 0; i < MAX_PARTICLES; i++) {
		particles[i]->draw();
	}
}

void ofApp::keyPressed(int key){
	for (int i = 0; i < MAX_PARTICLES; i++) {
		particles[i] = new Particle();
		particles[i] = new Particle2();
		particles[i]->init();
		setRandomColor(particles[i]);
	}
}

void ofApp::keyReleased(int key) {
}
void ofApp::setRandomColor(Particle2* particle) {
	float random = ofRandom(10);
	if (random > 3 && random < 7) {
		particle->setColors(ofColor(127, 127, 127, 15), ofColor(127, 127, 127, 127));
	}
	else if (random >= 7) {
		particle->setColors(ofColor(140, 140, 140, 15), ofColor(140, 140, 140, 127));
	}
}
void ofApp::setRandomColor(Particle* particle) {
	float random = ofRandom(10);
	if (random > 3 && random < 7) {
		particle->setColors(ofColor(247, 140, 129, 15), ofColor(227, 47, 27, 127));
	} else if (random >= 7) {
		particle->setColors(ofColor(185, 250, 155, 15), ofColor(144, 240, 55, 127));
	}
}