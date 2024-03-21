#pragma once


#include <iostream> 

using namespace std;



class Game {

protected:

	char GameBoard[3][3];

	bool Win;

	int WCounter;

	bool Full;
	int CurrentSize;

public:

	Game();

	bool CheckWin();

	void DrawBoard();

	void WinCounter();

	bool isFull();
	



};