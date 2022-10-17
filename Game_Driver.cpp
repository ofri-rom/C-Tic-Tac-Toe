/*Assignment: 2
Author: ofri rom, ID: 208891804*/
#include<iostream>
#include"Game.h"
#include"Board.h"

using namespace std;

int main() {
	char name1[60], name2[60];
	cout << "Enter the first name" << endl;
	cin >> name1;
	cout << "Enter the second name" << endl;
	cin >> name2;
	Game game(name1,name2);
	game.Play();
	return 0;
}