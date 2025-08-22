//Cho 3 cạnh a, b, c của một tam giác, nếu tam giác đã cho là tam giác đều thì in ra 1, tam giác cân thì in ra 2, tam giác vuông thì in ra 3, tam giác thường in ra 4, trường hợp tam giác nhập vào không hợp lệ thì in ra "INVALID".

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c;
    cin >> a >> b >> c;

    if (a <= 0 || b <= 0 || c <= 0 ||a + b <= c || a + c <= b || b + c <= a) {
        cout << "INVALID\n";
        return 0;
    }

    if (a == b && b == c) {
        cout << 1;
    }

    else if (a == b || b == c || a == c) {
        cout << 2;
    }

    else if (a * a == b * b + c * c || b * b == a * a + c * c || c * c == a * a + b * b) {
        cout << 3;
    }

    else {
        cout << 4;
    }

    return 0;
}
