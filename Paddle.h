//
// Created by Kushal Kuchibhotla on 10/25/18.
//

#ifndef PONGGAME_PADDLE_H
#define PONGGAME_PADDLE_H

class Paddle{
private:
    int x,y;
public:
    Paddle()
    :x(0),y(0){}
    Paddle(int newx, int newy)
    {
        x(newx),y(newy)
    }
    void set_x(int b){x=b;}
    void set_y(int c){x=c;}
    int get_x(){return x;}
    int get_y(){return y;}
    void Up_move(){y--;}
    void down_move(){y++}
    friend ostream & operator<<(ostream & out,Paddle p)
    {
        out<<"Paddle ["<<p.x<<","<<p.y<<"]";
        return out;
    }

};
#endif //PONGGAME_PADDLE_H
