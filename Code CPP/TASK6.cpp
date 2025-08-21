#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n; cin >> n;

    if(n % 2 == 0) cout << "YES\n";
    else cout << "NO\n";

    if(n % 3 == 0 && n % 5 == 0) cout << "YES\n";
    else cout << "NO\n";

    if(n % 3 == 0 && n % 7 != 0) cout << "YES\n";
    else cout << "NO\n";

    if(n % 3 == 0 || n % 7 == 0) cout << "YES\n";
    else cout << "NO\n";

    if(n > 30 && n < 50) cout << "YES\n";
    else cout << "NO\n";

    if(n >= 30 && (n % 2 == 0 || n % 3 == 0 || n % 5 == 0)) cout << "YES\n";
    else cout << "NO\n";

    int lastDigit = n % 10;
    if(n >= 10 && n <= 99 && (lastDigit == 2 || lastDigit == 3 || lastDigit == 5 || lastDigit == 7)) cout << "YES\n";
    else cout << "NO\n";

    if(n <= 100 && n % 23 == 0) cout << "YES\n";
    else cout << "NO\n";

    if(n < 10 || n > 20) cout << "YES\n";
    else cout << "NO\n";

    if(lastDigit % 3 == 0) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}