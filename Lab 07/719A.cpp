
//Codeforce Problem No: 791A
//Problem Name: Bear and Big Brother



#include <iostream>

using namespace std;

int main() {

    int a, b, year;
    cin >> a >> b;

    year = 0;

    while (a <= b){
        a *= 3;
        b *= 2;
        year++;
    }

    cout << year << endl;

    return 0;
}
