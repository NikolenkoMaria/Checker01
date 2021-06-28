// BOARD_H
#include"Board.h"
#include"Draught.h"
#include"Figures.h"

Board::Board(int size) : m_Size(size)
{
    m_Board = new Figure * *[size];
    for (int i = 0; i < size; i++)
    {
        m_Board[i] = new Figure * [size];
        for (int j = 0; j < size; j++)
        {
            m_Board[i][j] = nullptr;
        }
    }

    int lines = size / 2 - 1;

    for (int i = 0; i < lines; i++)
    {
        for (int j = i % 2; j < size; j += 2)
        {

            m_Board[i][j] = new Checker(this, i, j, White);
        }
    }
   for (int i = 0; i < lines; i++)
    {
        for (int j = i % 2; j < size; j += 2)
        {

            m_Board[i][j] = new Checker(this, i, j, Black);
        }
    }
}

Board::~Board()
{

}

Board::Board(const Board& other)
{

}

Board& Board::operator=(const Board& rhs)
{
    if (this == &rhs) return *this;
    return *this;
}

char** Board::ToCharArray()
{
    return nullptr;
}
