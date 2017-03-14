#include "Particle2.h"

Particle2::Particle2() {

}

void Particle2::init() {
	radius = ofRandom(10,20);
	location.x = ofGetWidth() / 2;
	location.y = ofGetHeight() / 2;

	speed.x = ofRandom(-2, 2);
	speed.y = ofRandom(-2, 2);
	
	innerColor = ofColor(144, 240, 55, 127);
	outerColor = ofColor(185, 250, 155, 50);
}

void Particle2::move() {
	location = location + speed;
	
	radius = ofRandom(10, 20);
}

void Particle2::draw() {
	ofSetColor(outerColor);
	ofDrawCircle(location, radius * 2);

	ofSetColor(innerColor);
	ofDrawCircle(location, radius);
}