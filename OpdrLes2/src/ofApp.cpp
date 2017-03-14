#include "ofApp.h"

void ofApp::setup() {
	ofSetBackgroundColor(ofColor::black);

	for (int i = 0; i < MAX_PARTICLES; i++) {
		particles[i] = new Particle();
		particles[i]->init();
		setRandomColor(particles[i]);
	}

	for (int i = 0; i < MAX_PARTICLES2; i++) {
		particles2[i] = new Particle2();
		particles2[i]->init();
		setRandomColor(particles2[i]);
	}
}


void ofApp::update(){
		for (int i = 0; i < MAX_PARTICLES; i++) {
			particles[i]->move();
		}
		for (int i = 0; i < MAX_PARTICLES2; i++) {
			particles2[i]->move();
		}
}

void ofApp::draw(){
	for (int i = 0; i < MAX_PARTICLES; i++) {
		particles[i]->draw();
	}
	for (int i = 0; i < MAX_PARTICLES2; i++) {
		particles2[i]->draw();
	}
}

void ofApp::keyPressed(int key){
	for (int i = 0; i < MAX_PARTICLES; i++) {
		particles[i] = new Particle();
		particles[i]->init();
		setRandomColor(particles2[i]);
	}
	for (int i = 0; i < MAX_PARTICLES2; i++) {
		particles2[i] = new Particle2();
		particles2[i]->init();
		setRandomColor(particles2[i]);
	}
}

void ofApp::keyReleased(int key) {
}

void ofApp::setRandomColor(Particle* particle) {
	float random = ofRandom(10);
	if (random > 3 && random < 7) {
		particle->setColors(ofColor(247, 140, 129, 15), ofColor(227, 47, 27, 127));
	} else if (random >= 7) {
		particle->setColors(ofColor(185, 250, 155, 15), ofColor(144, 240, 55, 127));
	}
}

void ofApp::setRandomColor(Particle2* particle2) {
	float random = ofRandom(10);
	if (random > 3 && random < 7) {
		particle2->setColors(ofColor(0, 140, 129, 15), ofColor(255, 47, 27, 127));
	}
	else if (random >= 7) {
		particle2->setColors(ofColor(0, 250, 155, 15), ofColor(0, 240, 55, 127));
	} 
} 
