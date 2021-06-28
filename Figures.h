#pragma once

#include "Figure.h"
#include "Draught.h"


/*
class Event
{
public:
    EventConst What;
};*/

class Checker : public Figure
{
    CheckerState m_State;
    CheckerColor m_Color;
    CheckerKing m_King;
public:

    Checker(Board* board, int m_CentrX, int m_CentrY, CheckerColor m_Color,  CheckerState m_State = stOnField, CheckerKing m_King = NKing);

    virtual void Show() {}
};

class Cursor : public Figure
{
public:
    Cursor(Board* board, int m_CentrX, int m_CentrY);
    virtual void Show() {}
    int GetCenterX();
    int GetCenterY();
};