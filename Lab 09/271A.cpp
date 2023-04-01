
//Codeforce Problem No: 271A
//Problem Name: Beautiful Year

#include <iostream>

using namespace std;

int main()
{
    int y;
    cin >> y;
    int a, b, c, d;
    do {
        y++;
        a = y / 1000;
        b = y / 100 % 10;
        c = y / 10 % 10;
        d = y % 10;
    } while (a == b || a == c || a == d || b == c || b == d || c == d);
    cout << y << endl;
    return 0;
}

