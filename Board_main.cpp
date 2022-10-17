/*Assignment: 2
Author: ofri rom, ID: 208891804*/
#include<iostream>
#include"Board.h"
using namespace std;


Board::Board() {
	size = 10;
	Board1 = new Cell[size];
}

Board::Board(int Size) {
    size = Size;
	Board1 = new Cell[size];
}

Board::~Board() {
	delete Board1;
}

Board::Board(const Board&obj) {
     Board1 = new Cell[size];
     *Board1 = *obj.Board1;

}



void Board::Print_board() {
    
    cout << "     |     |     " << endl;
    cout << "  " << Board1[1].getter() << "  |  " << Board1[2].getter() << "  |  " << Board1[3].getter() << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << Board1[4].getter() << "  |  " << Board1[5].getter() << "  |  " << Board1[6].getter() << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << Board1[7].getter() << "  |  " << Board1[8].getter() << "  |  " << Board1[9].getter() << endl;

    cout << "     |     |     " << endl << endl;

}


int Board::set_symbol(int cell_num,char symbol) {
    if (symbol == 'x' || symbol == 'o' || symbol == ' ') {
        cout << "symbol is legal" << endl;
        if (cell_num <= 9 && cell_num >= 1) {
            if (Board1[cell_num].is_free() == true) {
                Board1[cell_num].setter(symbol);
            }
            else {
                cout << "This cell is already full" << endl;
            }
        }
    }
    else {
        cout << "symbol is iligal" << endl;
    }
   // if (cell_num <= 9 && cell_num >= 1) {
       // if (Board1[cell_num].is_free() == true) {
           // Board1[cell_num].setter(symbol);
       // }
       // else {
           // cout << "This cell is already full" << endl;
      //  }
   // }
    return 0;
}


int Board::count_board() {
    int sum = 0;
    int i;
    for (i = 0; i < size; i++) {
        if (Board1[i].is_free()==true) {
            sum++;
        }
    }
    return sum;
}


char Board::get_symbol(int cell_number) {
   char get = Board1[cell_number].getter();
   return get;
}
