
//Codeforce Problem No: 112A
//Problem Name: Petya and Strings


#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;

    int n = s1.length();
    for (int i = 0; i < n; i++) {
        char c1 = tolower(s1[i]);
        char c2 = tolower(s2[i]);
        if (c1 < c2) {
            cout << "-1" << endl;
            return 0;
        } else if (c2 < c1) {
            cout << "1" << endl;
            return 0;
        }
    }
    cout << "0" << endl;

    return 0;
}
