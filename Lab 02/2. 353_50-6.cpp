
//Codeforce Problem No - 158A

// Problem Name - Next Round

#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    int c;
    for (int i = 0; i < b; ++i)
    {
        cin >> c;
        if (c == 0)
        {
            cout << i << endl;
            return 0;
        }
    }

    int d;
    for (int i = b; i < a; ++i)
    {
        cin >> d;
        if (d != c)
        {
            cout << i << endl;
            return 0;
        }
    }

    cout << a << endl;

return 0;
}
