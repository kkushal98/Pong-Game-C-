//
// Created by Kushal Kuchibhotla on 10/25/18.
//

#ifndef PONGGAME_BALL_H
#define PONGGAME_BALL_H

#include <iostream>
using namespace std

class Ball{
private:
    int x,y;
public:
    Ball(int newx,newy)
    :x(newx),y(newy){}
    int getx(){return x}
    int gety(){return y}

    void setx(int a){x=a;}
    void sety(int b){y=b;}

    friend ostream& operator<<(ostream & out,Ball b)
    {
        out<<"Ball ["<<b.x<<","<<b.y<<"]"
        return out;
    }

};
#endif //PONGGAME_BALL_H
