#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a,b; cin >> a >> b;

    cout << a / b * b;

    if(a % b == 0) cout << a;
    else cout << (a / b + 1) * b;

    return 0;
}