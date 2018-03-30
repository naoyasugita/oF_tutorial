//
//  ball.h
//  test
//
//  Created by 杉田尚弥 on 2018/03/30.
//
//

#ifndef ball_h
#define ball_h

#include "ofMain.h"

class Ball{
    
public:
    
    void update();
    void draw();
    
    float x;
    float y;
    int baseSpeed;
    float speedX;
    float speedY;
    int dim;
    Ball(float x, float y, int dim);
    
private:
    Ball *myBall;
    int nBalls;
    
};



#endif /* ball_h */
