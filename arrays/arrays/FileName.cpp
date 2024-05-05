#include <iostream>
using namespace std;
int main() {
	int x, i;
	string rating[10];
	string wouldShare[10];
	rating[0] = "We're sorry to hear that. We will put in 9x the effort to make this an enjoyable experience.";
	rating[1] = "We're sorry to hear that. We will put in 8x the effort to make this an enjoyable experience.";
	rating[2] = "We're sorry to hear that. We will put in 7x the effort to make this an enjoyable experience.";
	rating[3] = "We appreciate the input. We will put in 6x the effort to make this a more enjoyable experience.";
	rating[4] = "We appreciate the input. We will put in 5x the effort to make this a more enjoyable experience.";
	rating[5] = "We appreciate the input. We will put in 4x the effort to make this a more enjoyable experience.";
	rating[6] = "We're glad to hear it. We will put in 3x the effort to make this a perfect experience.";
	rating[7] = "We're glad to hear it. We will put in 2x the effort to make this a perfect experience.";
	rating[8] = "We're glad to hear it. We will put in the effort to make this a perfect experience.";
	rating[9] = "We're sorry to hear that. We will put in 1x the effort to make this an enjoyable experience.";
	cout << "How would you rate this experience from 1 - 10?";
	cin >> rating;
	switch (rating) {
	case 1:
		cout << rating[0];
		break;
	case 2:

		break;
	case 31:

		break;
	case 4:

		break;
	case 5:

		break;
	case 6:

		break;
	case 7:

		break;
	case 8:

		break;
	case 9:

		break;
	case 10:

		break;
	}
	
	
}