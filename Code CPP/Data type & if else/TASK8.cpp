//Nhập vào 2 số nguyên, in ra tổng, hiệu, tích, thương(lấy độ chính xác với 4 chữ số) của 2 số đó.

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a,b; cin >> a >> b;

    cout << a + b << "\n";
    cout << a - b << "\n";
    cout << (long long)a * b << "\n";
    if(a == 0 || b == 0) cout << "INVALID";
    else cout << fixed << setprecision(4) << (double)a / b;

    return 0;
}