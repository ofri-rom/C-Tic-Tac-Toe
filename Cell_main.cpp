/*Assignment: 2
Author: ofri rom, ID: 208891804*/
#include<iostream>
#include"Cell.h"
using namespace std;

Cell::Cell(char _Cell1, bool _free) :Cell1(_Cell1), free(_free) {}

void Cell::Print_Cell() {
	cout << Cell1 << endl;
	cout << free << endl;
}

void Cell::setter(char update) {
	Cell1 = update;
	if (Cell1 != ' ') {
		free = false;
	}
}

char Cell::getter() {
	return Cell1;
}

bool Cell::is_free() {
	if (free == true) {
		return true;
	}
	else {
		return false;
	}
}