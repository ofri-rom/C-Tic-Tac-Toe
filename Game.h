/*Assignment: 2
Author: ofri rom, ID: 208891804*/
#ifndef __GAME_H
#define __GAME_H

#pragma once
#include<iostream>
#include"Player.h"
#include"Board.h"
using namespace std;

class Game {
private:
	Board board;
	Player players[2];
	char turn;
	enum statuses{win,draw,start};
	statuses status=start;
public:
	Game(char name1[],char name2[]);
	void Play();
	int wining_the_game(char x);
};
#endif