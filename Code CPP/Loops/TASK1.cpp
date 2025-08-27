#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n; cin >> n;
    int cnt = 0;
    while(n) {
        int r = n % 10;
        if(r == 2 || r == 3 || r == 5 || r == 7) ++cnt;
        n /= 10;
    }
    cout << cnt;
    return 0;
}
