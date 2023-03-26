
//Codeforce Problem No: 339A
//Problem Name: Helpful Maths

#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;

    int count[4] = {0};
    for (char c : s) {
        if (c >= '1' && c <= '3') {
            count[c - '0']++;
        }
    }

    string newSum = "";
    for (int i = 1; i <= 3; i++) {
        for (int j = 0; j < count[i]; j++) {
            newSum += to_string(i);
            newSum += "+";
        }
    }
    newSum.pop_back();

    cout << newSum << endl;

    return 0;
}
