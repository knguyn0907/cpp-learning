#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x; cin >> x;

    ll A = (1LL) * x * x * x + 3 * (1LL) * x * x + x + 1;

    cout << A << endl;

    return 0;
}