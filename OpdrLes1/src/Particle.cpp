#include "Particle.h"

Particle::Particle() {

}

void Particle::init() {
	radius = ofRandom(5, 20);
	location.x = ofGetWidth() / 2;
	location.y = ofGetHeight() /2;
	
	speed.x = ofRandom(-2, 2);
	speed.y = ofRandom(-2, 2);

	innerColor = ofColor(31, 127, 255, 127);
	outerColor = ofColor(128, 255, 255, 50);
}

void Particle::move() {
	location = location + speed;
}

void Particle::draw() {
	ofSetColor(outerColor);
	ofDrawCircle(location, radius * 2);

	ofSetColor(innerColor);
	ofDrawCircle(location, radius);
}