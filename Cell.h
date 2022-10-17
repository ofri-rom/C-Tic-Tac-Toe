/*Assignment: 2
Author: ofri rom, ID: 208891804*/
#ifndef __CELL_H
#define __CELL_H
#pragma once
#include<iostream>
using namespace std;

class Cell {
private:
	char Cell1;
	bool free;
public:
	Cell(char =' ',bool = true);
	void Print_Cell();
	void setter(char update);
	char getter();
	bool is_free();
};
#endif