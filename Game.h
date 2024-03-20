#pragma once


#include <iostream> 

using namespace std;



class Game {

private:

	char GameBoard[3][3];

	bool Win;

	int WCounter;

	bool isFull;

public:

	Game();

	bool CheckWin();

	void DrawBoard();

	int WinCounter();

	bool isFull();



};