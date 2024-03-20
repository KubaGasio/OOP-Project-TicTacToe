#include "Player.h" 

Player::Player() {

	Turn = 0;

	UserName1 = "";

	xPosition = 0;

	yPosition = 0;



}

void Player::NextPlayer() {
	int Check = Turn % 2;
	if (Check = 0) {
		PlayerInputs1();
		Turn++;
	}
	else {
		PlayerInputs2();
		Turn++;
	}

}

void Player::PlayerInputs1() {

	cout << "Row position: ";

	cin >> xPosition;

	cout << "Column position: ";

	cin >> yPosition;



}

