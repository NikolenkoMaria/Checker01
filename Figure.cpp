#include "Figure.h"

Figure::Figure(Board* m_board, int m_CentrX, int m_CentrY)
{
    theCentrX = m_CentrX;
    theCentrY = m_CentrY;
    board = m_board;
}
std::string Figure::Position()
{
    return std::string();
}

