/*Assignment: 2
Author: ofri rom, ID: 208891804*/
#ifndef __PLAYER_H
#define __PLAYER_H
#pragma once
#include<iostream>
class Player {
private:
	char* Name;
	char symbol;
public:
	Player();
	Player(char name, char sym);
	~Player();
	void Print_board();
	char Make_move(char sym);
	void Print_Player();
	void set_name(char name[]);
	void set_symbol(char sym);
	char* get_name();
	char get_symbol();
};
#endif __PLAYER_H