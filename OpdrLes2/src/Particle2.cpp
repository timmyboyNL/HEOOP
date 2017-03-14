#include "Particle2.h"

Particle2::Particle2() {

}

void Particle2::init() {
	location.x = ofGetWidth() / 2;
	location.y = ofGetHeight() / 2;

	speed.x = ofRandom(2, -2);
	speed.y = ofRandom(2, -2);

	innerColor = ofColor(0, 127, 255, 127);
	outerColor = ofColor(255, 255, 255, 15);
}

void Particle2::move() {
	location = location + speed;
	radius = ofRandom(5, 20);
}

void Particle2::draw() {
	ofSetColor(outerColor);
	ofDrawCircle(location, radius * 2);

	ofSetColor(innerColor);
	ofDrawCircle(location, radius);

	//ofSetColor(ofColor::white);
	//ofDrawCircle(location, radius * 2);
}

void Particle2::setColors(ofColor outer, ofColor inner) {
	outerColor = outer;
	innerColor = inner;
}