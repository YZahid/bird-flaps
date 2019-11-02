#pragma once

#include "ofMain.h"
#include "ofxLeapC.h"
#include "stdlib.h" // this is only here to use abs()

class ofApp : public ofBaseApp {

public:
	void setup();
	void update();
	void draw();

	ofxLeapC::Device m_device;
	Leap::Frame m_frame;

	void onLeapFrame(Leap::Frame frame);

	float WINDOW_WIDTH	= 1280;
	float WINDOW_HEIGHT = 720;
	float FRAMERATE		= 60.0f;

	ofImage m_bird;
	ofVec2f m_birdPos;
	ofVec2f m_birdVelocity;
	float	m_birdAcceleration;
	float	m_birdMaxVelocity;
	float	m_birdAngle;
	bool	m_flapped;

};
