    #include <bits/stdc++.h>
    using namespace std;

    #define ll long long

    int main() {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);

        int n; cin >> n;

        if (n > 365) {
            cout << n / 365 << " " << (n % 365)/7 << " " << n % 365 % 7;
        }
        else if (n <= 365) {
            if (n == 365) {
                cout << 1 << " ";
            }
            else {
                cout << 0 << " " << n / 7 << " " << n % 7;
            }
        }

        return 0;
    }
