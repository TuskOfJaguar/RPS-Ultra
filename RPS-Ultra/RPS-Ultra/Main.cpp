#include <iostream>
#include <string>
#include <stdlib.h>
#include <random>
using namespace std;

int playerAct(int x, int y) {
	int n;
	random_device dev;
	uniform_int_distribution<int> dist(1, 100);
	n = dist(dev);
	switch (x) {
	case 1:
		switch (y) {
		case 1:
			if (n > 50) {
				return 60;
			}
			else {
				return 0;
			}
			break;
		case 2:
			return 15;
			break;
		case 3:
			if (n >= 25 and n < 50) {
				return 25;
			}
			else if (n >= 50 and n < 75) {
				return 35;
			}
			else if (n >= 75 and n <= 100) {
				return 50;
			}
			else {
				return 0;
			}
			break;
		case 4:
			if (n > 90) {
				return 100;
			}
			else {
				return 0;
			}
			break;
		}
		break;
	case 2:
		switch (y) {
		case 1:
			if (n >= 10 and n < 40) {
				return 20;
			}
			else if (n >= 40 and n < 70) {
				return 25;
			}
			else if (n >= 70 and n <= 100) {
				return 30;
			}
			else {
				return 0;
			}
			break;
		case 2:
			if (n > 75) {
				return 75;
			}
			else {
				return 0;
			}
			break;
		case 3:
			if (n > 85) {
				return 90;
			}
			else {
				return 0;
			}
			break;
		case 4:
			if (n > 40) {
				return 50;
			}
			else {
				return 0;
			}
			break;
		}
		break;
	case 3:
		switch (y) {
		case 1:
			if (n > 97) {
				return 200;
			}
			else {
				return 0;
			}
			break;
		case 2:
			return 15;
			break;
		case 3:
			if (n > 25) {
				return 40;
			}
			else {
				return 0;
			}
			break;
		case 4:
			if (n > 10 and n <= 90) {
				return 25;
			}
			else if (n > 90) {
				return 80;
			}
			else {
				return 0;
			}
			break;
		}
		break;
	}

}
void moveset(int x) {
	switch (x) {
	case 1:
		cout << "1 - Three Ton Tackle\n";
		cout << "2 - Digging Down\n";
		cout << "3 - Bullet Breakdown\n";
		cout << "4 - Morbid Maul\n\n";
		break;
	case 2:
		cout << "1 - Daring Devour\n";
		cout << "2 - Flip Flail\n";
		cout << "3 - Stingshot\n";
		cout << "4 - Paper Plane\n\n";
		break;
	case 3:
		cout << "1 - Guilded Guillotine\n";
		cout << "2 - Gruesome Grasp\n";
		cout << "3 - Soaring Spear\n";
		cout << "4 - Bleed\n\n";
		break;
	}
}
void chosenDuelist(int x) {
	switch (x) {
	case 1:
		cout << "ROCK!";
		break;
	case 2:
		cout << "PAPER!";
		break;
	case 3:
		cout << "SCISSORS!";
		break;
	}
}
void duelistInfo(int x) {
	switch (x) {
	case 1:
		cout << "ROCK!\n";
		cout << "Type: Rock\n";
		cout << "Speed/Priority: 2\n";
		cout << "Summary: Rock is a heavy combatant that uses it's enormous weight to crush the opposition.\n";
		cout << "Moves:\n";
		cout << "	1 - Three Ton Tackle - Offers Rock a 50/50 chance to deal 60 points of damage by rolling with immense speed towards it's enemy.\n";
		cout << "	2 - Digging Down - Guarantees a sneaky uppercut that deals low damage.\n";
		cout << "	3 - Bullet Breakout - Fires small stones that deal extra damage to Paper. The damage depends on how many stones hit Paper.\n";
		cout << "	4 - Morbid Maul - Aggresively maul the opponent for a 10% chance to deal 100 points of damage.\n\n";
		break;
	case 2:
		cout << "PAPER!\n";
		cout << "Type: Paper\n";
		cout << "Speed/Priority: 3\n";
		cout << "Summary: Paper is a lightweight, yet slow combatant that uses it's large surface area and flexibility to envelop and strangle the opposition\n";
		cout << "Moves:\n";
		cout << "	1 - Daring Devour - Grants a 90% chance to envelop the opposition for low damage. Damage may vary.\n";
		cout << "	2 - Flip Flail - Summons a giant origami flail to swing in random directions. It's far from a guaranteed hit, but if it does hit, it'll hit hard.\n";
		cout << "	3 - Stingshot - Allows Paper to fold itself into slingshot ammo, then launch itself like a bullet towards the enemy. It has a 15% chance to hit for 90 points of damage.\n";
		cout << "	4 - Paper Plane - Offers Rock a 60% chance to deal 50 points of damage by folding itself into a paper airplane and flying into the enemy.\n\n";
		break;
	case 3:
		cout << "SCISSORS!\n";
		cout << "Type: Scissor\n";
		cout << "Speed/Priority: 1\n";
		cout << "Summary: Scissors is a swift combatant that uses a combination of clamps, slashes and pierces to mince the opposition.\n";
		cout << "Moves:\n";
		cout << "	1 - Guilded Guillotine - This is a simple move that has a very small chance to instantly kill the enemy.\n";
		cout << "	2 - Gruesome Grasp - This move is guaranteed to clamps the opponent dealing low damage.\n";
		cout << "	3 - Soaring Spear - Has a high probability to pierce the opposition, dealing decent damage.\n";
		cout << "	4 - Bleed - This move has an 80% chance to hit for 25 points of damage and a 10% chance to cause bleed, which deals 80 points of damage.\n\n";
		break;
	}
}

int main() {
	int select, infoSelect, p1, p2, p1HP, p2HP, move;
	select = 0;
	cout << "Welcome to Rock, Paper, Scissors: Ultra!" << "\n\n";
	cout << "Press ENTER to continue!" << "\n\n";
	cin.get();
	system("CLS");
	while (select >= 0 and select <= 2)
	{
		if (select == 0)
		{
			select = 0;
			cout << "1 - Play\n";
			cout << "2 - Info\n\n";
			cin >> select;
			system("CLS");
			if (select < 0 or select > 2)
			{
				cout << "Invalid! Please select one of the given options.\n\n";
				select = 0;
			}
		}
		else if (select == 2)
		{
			cout << "0 - Back\n";
			cout << "1 - About ROCK...\n";
			cout << "2 - About PAPER...\n";
			cout << "3 - About SCISSORS...\n\n";
			cin >> infoSelect;
			system("CLS");
			if (infoSelect != 0)
			{
				duelistInfo(infoSelect);
			}
			else
			{
				select = 0;
			}
		}
		else if (select == 1)
		{
			select = -1;
		}
	}
	cout << "PLAYER 1! CHOOSE YOUR DUELIST!\n\n";
	cout << "1 - Rock\n";
	cout << "2 - Paper\n";
	cout << "3 - Scissors\n\n";
	cin >> p1;
	system("CLS");
	cout << "PLAYER 2! CHOOSE YOUR DUELIST!\n\n";
	cout << "1 - Rock\n";
	cout << "2 - Paper\n";
	cout << "3 - Scissors\n\n";
	cin >> p2;
	system("CLS");
	cout << "Player 1 has chosen "; chosenDuelist(p1);
	cout << "\n\nPlayer 2 has chosen "; chosenDuelist(p2);
	cout << "\n\nPress ENTER to continue!\n\n";
	cin.get();
	cin.get();
	system("CLS");
	p1HP = 200;
	p2HP = 200;
	while (p1HP > 0 and p2HP > 0) {
		if (p1HP > 0 and p2HP > 0) {
			system("CLS");
			cout << "You, ";
			chosenDuelist(p1);
			cout << ", have " << p1HP << "HP.\n\n";
			cout << "Player 2, ";
			chosenDuelist(p2);
			cout << ", has " << p2HP << "HP.\n\n";
			cout << "What will you do?\n";
			moveset(p1);
			cin >> move;
			p2HP = p2HP - playerAct(p1, move);
			system("CLS");
			cout << "You, ";
			chosenDuelist(p2);
			cout << ", have " << p2HP << "HP.\n\n";
			cout << "Player 1, ";
			chosenDuelist(p1);
			cout << ", has " << p1HP << "HP.\n\n";
			cout << "What will you do?\n";
			moveset(p2);
			cin >> move;
			p1HP = p1HP - playerAct(p2, move);
		}
		else {
			system("CLS");
			if (p1HP > p2HP) {
				cout << "Player 1 wins!";
			}
			else {
				cout << "Player 2 wins!";
			}
		}
	}
}