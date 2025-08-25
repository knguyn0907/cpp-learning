// Cho 2 số nguyên a và b. Bạn hãy tìm 2 số sau, số thứ 1 là số lớn nhất <= a mà chia hết cho b, số thứ 2 là số nhỏ nhất >=a mà chia hết cho b. Chú ý các bạn không được dùng vòng lặp.

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a,b; cin >> a >> b;

    cout << a / b * b << " ";

    if(a % b == 0) cout << a;
    else cout << (a / b + 1) * b;

    return 0;
}
