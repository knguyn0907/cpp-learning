#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int R; cin >> R;
    double PI = 3.14;

    double chuvi = 2 * PI * R;
    double dientich = PI * R * R;

    cout << fixed << setprecision(4) << chuvi << " " << dientich << endl;

    return 0;
}
