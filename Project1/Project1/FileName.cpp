#include <iostream>
using namespace std;
int main() {
	int rate, share;
	string rating[10];
	string sharing[10];
	rating[0] = "We will try out hardest to make this program enjoyable.";
	rating[1] = "We will try out hardest to make this program enjoyable.";
	rating[2] = "We will try out hardest to make this program enjoyable.";
	rating[3] = "We will try out hardest to make this program better.";
	rating[4] = "We will try out hardest to make this program better.";
	rating[5] = "We will try out hardest to make this program better.";
	rating[6] = "We will try out hardest to make this program perfect.";
	rating[7] = "We will try out hardest to make this program perfect.";
	rating[8] = "We will try out hardest to make this program perfect.";
	rating[9] = "We appreciate the input, and we're glad you love it.";

	sharing[0] = "We hope one day this will be worthy of being shared.";
	sharing[1] = "We hope one day this will be worthy of being shared.";
	sharing[2] = "We hope one day this will be worthy of being shared.";
	sharing[3] = "We'll improve this experience for you and our future players.";
	sharing[4] = "We'll improve this experience for you and our future players.";
	sharing[5] = "We'll improve this experience for you and our future players.";
	sharing[6] = "We appreciate it a lot, and we're willing to work hard to make this the perfect player experience.";
	sharing[7] = "We appreciate it a lot, and we're willing to work hard to make this the perfect player experience.";
	sharing[8] = "We appreciate it a lot, and we're willing to work hard to make this the perfect player experience.";
	sharing[9] = "We're glad to know you love it, and hopefully those you share this with will love it just as much.";
	cout << "How would you rate this experience?";
	cin >> rate;
	switch (rate) {
	case 1:
		cout << rating[0];
		break;
	case 2:
		cout << rating[1];
		break;
	case 3:
		cout << rating[2];
		break;
	case 4:
		cout << rating[3];
		break;
	case 5:
		cout << rating[4];
		break;
	case 6:
		cout << rating[5];
		break;
	case 7:
		cout << rating[6];
		break;
	case 8:
		cout << rating[7];
		break;
	case 9:
		cout << rating[8];
		break;
	case 10:
		cout << rating[9];
		break;
	}
	cout << "Would you share this with friends?";
	cin >> share;
	switch (share) {
	case 1:
		cout << sharing[0];
		break;
	case 2:
		cout << sharing[1];
		break;
	case 3:
		cout << sharing[2];
		break;
	case 4:
		cout << sharing[3];
		break;
	case 5:
		cout << sharing[4];
		break;
	case 6:
		cout << sharing[5];
		break;
	case 7:
		cout << sharing[6];
		break;
	case 8:
		cout << sharing[7];
		break;
	case 9:
		cout << sharing[8];
		break;
	case 10:
		cout << sharing[9];
		break;
	}
}
