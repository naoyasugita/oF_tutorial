#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup () {
    //  600x400, 30 frames/sec
    ofSetWindowShape(600, 400);
    ofSetFrameRate(30);
    //  white background
    ofSetBackgroundColor(255, 255, 255);
    //  init instance var
    posX = 300;  posY = 200;
    goalX = posX;  goalY = posY;
}

void ofApp::update () {
    float difX, difY;
    difX = goalX - posX,
    difY = goalY - posY;
    //  update circle position
    posX += difX * 0.15;
    posY += difY * 0.15;
}
void ofApp::draw () {
    ofSetColor(215, 19, 69);
    ofDrawCircle(posX, posY, 20);
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
    goalX = x;  goalY = y;

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    goalX = x;  goalY = y;
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
