#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, n;
    cin >> a >> b >> n;

    while (true) {
        // Simon's turn
        int g = __gcd(a, n);
        if (g > n) {
            cout << 1; // Simon loses
            break;
        }
        n -= g;

        // Antisimon's turn
        g = __gcd(b, n);
        if (g > n) {
            cout << 0; // Antisimon loses
            break;
        }
        n -= g;
    }

    return 0;
}
