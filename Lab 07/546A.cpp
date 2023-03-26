
//Codeforce Problem No: 546A
//Problem Name: Soldier and Bananas

#include <iostream>

using namespace std;

int main() {
    int k, n, w;
    cin >> k >> n >> w;

    int cost = 0;
    for (int i = 1; i <= w; i++) {
        cost += i * k;
    }

    int borrow = cost - n;
    if (borrow < 0) {
        borrow = 0;
    }

    cout << borrow << endl;

    return 0;
}
