/*Assignment: 2
Author: ofri rom, ID: 208891804*/
#ifndef __BOARD_H
#define __BOARD_H
#pragma once
#include<iostream>
#include"Cell.h"
using namespace std;

class Board {
private:
	Cell* Board1;
	int size=10;
public:
	Board();
	Board(int Size);
	Board(const Board& obj);
	~Board();
	void Print_board();
	int set_symbol(int cell_num,char symbol);
	int count_board();
	char get_symbol(int cell_number);
	
};
#endif