#include "ofApp.h"

void ofApp::setup(){
	ofSetBackgroundColor(ofColor::black);

	part1 = Particle();
	part2 = Particle2();
	part2.init();
	part1.init();
}

void ofApp::update(){
	part2.move();
	part1.move();
}

void ofApp::draw(){
	part2.draw();
	part1.draw();
}

void ofApp::keyPressed(int key){
	part1.init();
}

void ofApp::keyReleased(int key){
	part2.init();
}