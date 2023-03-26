
//Codeforce Problem No: 281A
//Problem Name: Word Capitalization

#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;
    cin >> word;
    word[0] = toupper(word[0]);
    cout << word << endl;
    return 0;
}

