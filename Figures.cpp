#include "Board.h"
#include "Figures.h"
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


Checker::Checker(Board* m_board, int m_CentrX, int m_CentrY, CheckerColor m_Color, CheckerState m_State,  CheckerKing m_King)
:Figure(m_board, m_CentrX, m_CentrY)
{
    this -> m_State = m_State;
    this -> m_Color = m_Color;
    this->m_King = m_King;
};

Cursor::Cursor(Board* m_board, int m_CentrX, int m_CentrY)
    :Figure(m_board, m_CentrX, m_CentrY)
{

};

