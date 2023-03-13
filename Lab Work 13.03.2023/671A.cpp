//Elephant

#include <iostream>

using namespace std;

int main() {
    int x;
    cin >> x;

    int steps = 0;
    while (x > 0) {
        if (x >= 5) {
            steps += x / 5;
            x %= 5;
        }
        else if (x >= 4) {
            steps += x / 4;
            x %= 4;
        }
        else if (x >= 3) {
            steps += x / 3;
            x %= 3;
        }
        else if (x >= 2) {
            steps += x / 2;
            x %= 2;
        }
        else {
            steps += x;
            x = 0;
        }
    }

    cout << steps << endl;

    return 0;
}

