#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;

    if(n % 400 == 0 || (n % 4 == 0 && n % 100 != 0)) {
        cout << n;
    }
    else {
        cout << "NO";
    }

    return 0;
}