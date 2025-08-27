#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    char c; cin >> c;

    if(c >= 'a' && c < 'z') {
        c += 1;
        cout << c << endl;
    }
    else if (c >= 'A' && c < 'Z') {
        c += 33;
        cout << c << endl;
    }
    else if(c == 'z' || c == 'Z') {
        cout << 'a' << endl;
    }

    return 0;
}
