
//Codeforce Problem No: 236A
//Problem Name: Boy or Girl


#include <iostream>
#include <set>
#include <string>

using namespace std;

int main() {
    string username;
    cin >> username;

    set<char> characters;
    for (char c : username) {
        characters.insert(c);
    }

    if (characters.size() % 2 == 0) {
        cout << "CHAT WITH HER!" << endl;
    } else {
        cout << "IGNORE HIM!" << endl;
    }

    return 0;
}
