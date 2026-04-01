#include <bits/stdc++.h>
using namespace std;

int main() {
    long long A, B, C, D;
    cin >> A >> B >> C >> D;

    // Compute last two digits using modulo 100
    long long ans = 1;
    ans = (ans * (A % 100)) % 100;
    ans = (ans * (B % 100)) % 100;
    ans = (ans * (C % 100)) % 100;
    ans = (ans * (D % 100)) % 100;

    // Print with leading zero if needed
    if (ans < 10) cout << "0";
    cout << ans << endl;

    return 0;
}
