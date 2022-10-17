/*Assignment: 2
Author: ofri rom, ID: 208891804*/
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include"Player.h"
#include"Board.h"
#include"Cell.h"
#include<string.h>
using namespace std;

Player::Player() {
	Name = NULL;
	symbol = ' ';
}

Player::Player(char name, char sym) {
    Name = new char[5];
	*Name = name;
	symbol = sym;
}

Player::~Player() {
	delete Name;
}

void Player::Print_board() {

    cout << "     |     |     " << endl;
    cout << "  " << "       " << "  |  " <<"       " << "  |  " << "       " << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << "       " << "  |  " << "       " << "  |  " << "       " << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " <<"       " << "  |  " <<"       " << "  |  " << "       " << endl;

    cout << "     |     |     " << endl << endl;

}

char Player:: Make_move(char sym) {
    return sym;
}

void Player::Print_Player() {
    cout << "The name of the player is:  " << Name << endl;
    cout << "The symbol that player got is:" << symbol << endl;
}

void Player::set_symbol(char sym) {
    symbol = sym;
}

void Player::set_name(char name[]) {
    Name = new char[6];
    strcpy(Name, name);
}

char* Player::get_name() {
    return Name;
}

char Player::get_symbol() {
    return symbol;
}