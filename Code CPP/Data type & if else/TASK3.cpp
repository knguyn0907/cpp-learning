#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a,b,c; cin >> a >> b >> c;

    ll S = (ll)a*(b+c)+(ll)b*(a+c);

    cout << S << endl;

    return 0;
}
