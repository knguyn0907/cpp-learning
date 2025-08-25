#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int x1,x2,y1,y2; cin >> x1 >> y1 >> x2 >> y2;

    cout << fixed << setprecision(2) << sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    return 0;
}
