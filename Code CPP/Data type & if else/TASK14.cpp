    #include <bits/stdc++.h>
    using namespace std;

    #define ll long long

    int main() {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);

        float a,b,c,d; cin >> a >> b >> c >> d;

        double tongdiem = (a + b + c * 2 + d * 3)/7;

        if(tongdiem >= 8) cout << "GIOI";
        else if(tongdiem < 8 && tongdiem >= 6.5) cout << "KHA";
        else if(tongdiem < 6.5 && tongdiem >= 5) cout << "TRUNG BINH";
        else cout << "YEU";
        return 0;
    }
