
//Codeforce Problem No: 59A
//Problem Name: Word

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    int upper = 0, lower = 0;
    for (int i = 0; i < s.length(); i++) {
        if (isupper(s[i])) {
            upper++;
        } else {
            lower++;
        }
    }
    if (upper > lower) {
        for (int i = 0; i < s.length(); i++) {
            s[i] = toupper(s[i]);
        }
    } else {
        for (int i = 0; i < s.length(); i++) {
            s[i] = tolower(s[i]);
        }
    }
    cout << s << endl;
    return 0;
}
