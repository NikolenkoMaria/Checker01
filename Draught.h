#pragma once
#ifndef   draught_h
#define   draught_h

//константы 
const int cFieldLength = 200;//длина поля
const int cSquareNum = 32;//количество клеток одного цвета
const int cChechertNum = 24;//количество шашек
const int cSquareLength = 25;//длина клетки
const int cCenterX = 50;
const int cCenterY = 50;
enum TPlayer { PBlack, PWhite };
enum CheckerState { stOnField, stOutField };
enum CheckerKing { King, NKing };
enum CheckerColor { Black, White };

#endif