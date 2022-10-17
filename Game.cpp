/*Assignment: 2
Author: ofri rom, ID: 208891804*/
#include<iostream>
#include"Game.h"
#include"Board.h"
#include<random>
using namespace std;

Game::Game(char name1[], char name2[]) {
	players[0].set_name(name1);
	players[0].set_symbol('x');
	players[1].set_name(name2);
	players[1].set_symbol('o');
	if (rand() % 2 == 1) {
		turn=players[1].get_symbol();
	}
	else {
		turn = players[0].get_symbol();
	}
}

void Game::Play() {
	int i = 0;
	while (board.count_board()!=0) {
		system("pause");
		system("cls");
		board.Print_board();
		if (rand()%2==1) {
			cout << "Choose your move" << endl;
			players[1].Print_Player();
			int num;
			cin >> num;
			board.set_symbol(num,'o');
			i++;
			if (wining_the_game('o') == 1) {
				system("cls");
				board.Print_board();
				players[1].Print_Player();
				cout << "You Won!" << endl;
				cout << "The game is over!" << endl;
				break;
			}
			
		}
		else {
			cout << "Choose your move" << endl;
			players[0].Print_Player();
			int num;
			cin >> num;
			board.set_symbol(num, 'x');
			i++;
			if (wining_the_game('x') == 1) {
				system("cls");
				board.Print_board();
				players[0].Print_Player();
				cout << "You Won!" << endl;
				cout << "The game is over!" << endl;
				break;
			}
			
		}
	}
}


int Game::wining_the_game(char x) {
		if (board.get_symbol(1) == x && board.get_symbol(2) == x && board.get_symbol(3) == x) {
			return 1;
		}
		if (board.get_symbol(4) == x && board.get_symbol(5) == x && board.get_symbol(6) == x) {
			return 1;
		}
		if (board.get_symbol(7) == x && board.get_symbol(8) == x && board.get_symbol(9) == x) {
			return 1;
		}
		if (board.get_symbol(1) == x && board.get_symbol(4) == x && board.get_symbol(7) == x) {
			return 1;
		}
		if (board.get_symbol(2) == x && board.get_symbol(5) == x && board.get_symbol(8) == x) {
			return 1;
		}
		if (board.get_symbol(3) == x && board.get_symbol(6) == x && board.get_symbol(9) == x) {
			return 1;
		}
		if (board.get_symbol(1) == x && board.get_symbol(5) == x && board.get_symbol(9) == x) {
			return 1;
		}
		if (board.get_symbol(3) == x && board.get_symbol(5) == x && board.get_symbol(7) == x) {
			return 1;
		}
		else {
			return 0;
		}
}