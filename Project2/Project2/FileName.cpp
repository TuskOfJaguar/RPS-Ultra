#include <iostream>
#include <string>
using namespace std;

int main() {
    string ratingMessages[] = {
        "We will try our hardest to make this program enjoyable.",
        "We will try our hardest to make this program enjoyable.",
        "We will try our hardest to make this program enjoyable.",
        "We will try our hardest to make this program better.",
        "We will try our hardest to make this program better.",
        "We will try our hardest to make this program better.",
        "We will try our hardest to make this program perfect.",
        "We will try our hardest to make this program perfect.",
        "We will try our hardest to make this program perfect.",
        "We appreciate the input, and we're glad you love it."
    };

    string sharingMessages[] = {
        "We hope one day this will be worthy of being shared.",
        "We hope one day this will be worthy of being shared.",
        "We hope one day this will be worthy of being shared.",
        "We'll improve this experience for you and our future players.",
        "We'll improve this experience for you and our future players.",
        "We'll improve this experience for you and our future players.",
        "We appreciate it a lot, and we're willing to work hard to make this the perfect player experience.",
        "We appreciate it a lot, and we're willing to work hard to make this the perfect player experience.",
        "We appreciate it a lot, and we're willing to work hard to make this the perfect player experience.",
        "We're glad to know you love it, and hopefully those you share this with will love it just as much."
    };

    int rate, share;

    cout << "How would you rate this experience from 1 - 10?\n\n";
    cin >> rate;
    system("cls");
    cout << ratingMessages[rate - 1] << endl;
    cin.get();
    cin.get();
    system("cls");
    cout << "How likely are you to share this with friends from 1 - 10?\n\n";
    cin >> share;
    system("cls");
    cout << sharingMessages[share - 1] << endl;

    return 0;
}