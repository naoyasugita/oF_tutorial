#include "ofApp.h"


ofPoint circlePos;
ofColor circleColor;
float radius;

//--------------------------------------------------------------
void ofApp::setup(){
//    // 輪郭を滑らかにする
    ofEnableSmoothing();
//    
//    // フレームレートを設定する
//    ofSetFrameRate(30);
//    
//    // ボールの初期X座標
//    xPos = ofGetWindowWidth()*0.5;
//    
//    // ボールの初期Y座標
//    yPos = ofGetWindowHeight()*0.5;
    ofBackground(0, 0, 0); //背景色の設定
    ofSetFrameRate(60); //フレームレートの設定
    ofSetCircleResolution(64); //円の解像度設定
    //円の初期位置
    circlePos.x = ofGetWidth() / 2;
    circlePos.y = ofGetHeight() / 2;
    //円の色、初期値
    circleColor.r = 31;
    circleColor.g = 63;
    circleColor.b = 255;
    //半径の初期値
    radius = 40;
}

//--------------------------------------------------------------
void ofApp::update(){
    
//    xPos += ( mouseX - xPos ) * 0.1;
//    yPos += ( mouseY - yPos ) * 0.1;

}

//--------------------------------------------------------------
void ofApp::draw(){

//    ofBackgroundGradient(ofColor::gray,ofColor(30,10,30), OF_GRADIENT_CIRCULAR);
//    ofSetColor(200,200,124);
//    ofFill();
//    ofCircle( xPos, yPos, ofRandom(50));
    ofSetColor(circleColor.r, circleColor.g, circleColor.b); //描画色の設定
    ofCircle(circlePos.x, circlePos.y, radius); //マウスの現在位置を中心に円を描く

    
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
    //円の色をグレーに
    circleColor.r = 127;
    circleColor.g = 127;
    circleColor.b = 127;

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
    //円の中心位置をマウスの位置に
    circlePos.x = x;
    circlePos.y = y;
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
//    xPos = ofRandom( ofGetWindowWidth() );
//    yPos = ofRandom( ofGetWindowHeight() );
    //円の中心位置をマウスの位置に
    circlePos.x = x;
    circlePos.y = y;
    //円の色を赤に
    circleColor.r = 255;
    circleColor.g = 63;
    circleColor.b = 31;
    //半径を60に
    radius = 60;

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    //円の色を青に
    circleColor.r = 31;
    circleColor.g = 63;
    circleColor.b = 255;
    //半径を40に
    radius = 40;
}

//--------------------------------------------------------------
//void ofApp::mouseEnterd(int x, int y){
//
//}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
