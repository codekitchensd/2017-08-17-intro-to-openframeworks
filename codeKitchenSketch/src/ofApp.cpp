#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

	// Like processing, this function is called exactly once at the start of the program
	
	_pointerImage = make_shared<ofImage>();
	_pointerImage->load("images/kitten.jpeg");
	
	_image.load("images/puppy.jpg");
	
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

	_pointerImage->draw(0,0);
	
	_image.draw(300,0);
	
	// You can also resize the image
	float scalar = 0.25f;
	_image.draw(300,350, _image.getWidth() * scalar,_image.getHeight() * scalar);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
