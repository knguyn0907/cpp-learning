#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool isPrime(int n) {
    for(int i = 2; i <= sqrt(n); i++) {
        if(n % i == 0) return false;
    }
    return n > 1;
}

bool isPrimeDigits(int n) {
    while(n) {
        if(n % 10 != 2 && n % 10 != 3 && n % 10 != 5 && n % 10 != 7) return false;
        n /= 10;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a,b; cin >> a >> b;
    int sum = 0;
    for(int i = a; i <= b; i++) {
        if(isPrimeDigits(i) && isPrime(i)) {
            sum += 1;
        }
    }
    cout << sum;

    return 0;
}
