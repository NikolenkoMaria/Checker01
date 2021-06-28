#pragma once
#ifndef BOARD_H
#define BOARD_H

class Figure;

class Board
{
public:

    Board(int size = 8);

    ~Board();

    Board(const Board& other);

    Board& operator=(const Board& other);

    char** ToCharArray();

    int GetSize() { return m_Size; }

protected:

private:
    int m_Size;
    Figure*** m_Board;
};

#endif