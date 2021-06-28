#include <iostream>
#include <windows.h>
#include <conio.h>

using namespace std;

const int Size = 8;

void move_Cursor(char** arr, int size, int k)
{
    int x = 0;
    int y = 0;
    for (int i = 0; i < size; ++i)
    {
        for (int j = 0; j < size; ++j)
        {
            if (arr[i][j] == 50)
            {
                x = i;
                y = j;
            }
        }
    }
    switch (k)
    {
    case 72: //??
        arr[x][y] = 0;
        x--;
        arr[x][y] = 50;
        break;
    case 84: //??
        arr[x][y] = 0;
        x++;
        arr[x][y] = 50;
        break;
    case 54: //??
        arr[x][y] = 0;
        y--;
        arr[x][y] = 50;
        break;
    case 85:
        arr[x][y] = 0;
        y++;
        arr[x][y] = 50;
        break;
    }
}
