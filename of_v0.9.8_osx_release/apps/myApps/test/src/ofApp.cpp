#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    // 輪郭を滑らかにする
    ofEnableSmoothing();
    
    // フレームレートを設定する
    ofSetFrameRate(30);
    
    // ボールの初期X座標
    xPos = ofGetWindowWidth()*0.5;
    
    // ボールの初期Y座標
    yPos = ofGetWindowHeight()*0.5;
}

//--------------------------------------------------------------
void ofApp::update(){
    xPos += ( mouseX - xPos ) * 0.1;
    yPos += ( mouseY - yPos ) * 0.1;

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackgroundGradient(ofColor::gray,ofColor(30,10,30), OF_GRADIENT_CIRCULAR);
    ofSetColor(200,200,124);
    ofFill();
    ofCircle( xPos, yPos, 30);
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
    xPos = ofRandom( ofGetWindowWidth() );
    yPos = ofRandom( ofGetWindowHeight() );

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
//void ofApp::mouseEnterd(int x, int y){
//
//}

//--------------------------------------------------------------

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
