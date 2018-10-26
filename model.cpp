//
// Created by Kushal Kuchibhotla on 10/25/18.
//
#include <iostream>
#include <conio.h>
#include "Ball.h"
#include "Paddle.h"
class Model {
private:
    int w,
    int h;
    char up2,char down2;
    int score_player1,
    int score_player2;
    bool end;
    Ball *ball;
    Paddle *player1;
    Paddle *player2;
public:
    Model(int neww, int

    new h)
    {
        end = false;
        up2='w';
        down2='a';
        score_player1 = 0;
        score_player2 = 0;
        w = neww;
        h = newh;
        ball = new Ball(w / 2, h / 2);
        player1 = new Paddle(1, h / 2 - 3);
        player2 = new Pddle(w - 2, h / 2 - 3);
    }

    ~Model() {
        delete ball, player1, player2;
    }

    void ScoreUp(Paddle *player) {
        if (player == player1)
            score_player1++;
        else if (player == player2)
            score_player2++;
        ball->setx(w / 2);
        ball->sety(h / 2);
        player1->set_x(1);
        player1->set_y(h / 2 - 3);
        player2->set_x(w - 2);
        player->set_y(h / 2 - 3);
    }

    void move(std::string direction, Ball *b) {
        switch (direction) {
            case Reset:
                break;
            case Left: {
                b->set_x(b->getx()--);
                b->sety(b->gety());
                break;
            }
            case Right: {
                b->setx(b->getx()++);
                b->sety(b->gety());
                break;
            }
            case UpLeft: {
                b->setx(b->getx()--);
                b->sety(b->gety()--);
                break;
            }
            case DownLeft: {
                b->setx(b->getx()--);
                b->sety(b->gety()++);
                break;
            }
            case UpRight: {
                b->setx(b->getx()++);
                b->sety(b->gety()--);
                break;
            }
            case DownRight: {
                b->setx(b->getx()++);
                b->sety(b->gety()++);
                break;
            }
            default:
                break;


        }
    }

    void Input() {
        int ballx = ball->getx();
        int bally = ball->gety();
        int player1x = player1->get_x();
        int player1y = player1->get_y();
        int player2x = player2->get_x();
        int player2y = player2->get_y();

        int current = getch();

        if (current == 65) {
            if (player1y > 0) {
                player1->set_x(player1->get_x());
                player1->set_y(player1->Up_move());
            }

        }

        if (up2) {
            if (player2y > 0) {
                player2->set_x(player2->get_x());
                player2->set_y(player2->Up_move());
            }

        }
        if (current==66){
            if (player1y+4<height)
                
        }

    }


};
