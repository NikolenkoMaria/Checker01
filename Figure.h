#pragma once

#include<string>

class Board;

class Figure
{
    int theCentrX, theCentrY;
    Board * board;    
public:
    Figure(Board* board, int tCentrX, int tCentrY);
    std::string Position();
    virtual void Show() {}
    //virtual void move(Figure&) =0; //?
    //virtual void moveeat(Figure&) =0; //?


};
