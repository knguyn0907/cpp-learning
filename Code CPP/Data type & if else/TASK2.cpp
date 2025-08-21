#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int C; cin >> C;

    double F = (C * 1.0 * 9 / 5) + 32;

    cout << fixed << setprecision(2) << F << endl;
    return 0;
}