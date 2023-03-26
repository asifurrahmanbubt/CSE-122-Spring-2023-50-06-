
//Codeforce Problem No: 266A
//Problem Name: Stones on the Table

#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;

    int ans = 0;
    for (int i = 1; i < n; i++) {
        if (s[i] == s[i-1]) {
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}
