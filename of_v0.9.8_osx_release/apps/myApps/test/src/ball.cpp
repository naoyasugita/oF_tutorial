//
//  ball.cpp
//  test
//
//  Created by 杉田尚弥 on 2018/03/30.
//
//

#include "ball.h"

Ball::Ball(float _x, float _y, int _dim){
    
    x = _x;
    y = _y;
    dim = _dim;
    baseSpeed = 15;
    speedX = ofRandom(-baseSpeed, baseSpeed);
    speedY = ofRandom(-baseSpeed, baseSpeed);
    

}

void Ball::update(){

}

void Ball::draw(){
    ofSetColor(120, 120, 120);
    ofCircle(x, y, dim);
    
}
