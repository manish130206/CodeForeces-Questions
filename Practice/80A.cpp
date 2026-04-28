#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int x) {
    if (x < 2) return false;
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) return false;
    }
    return true;
}

int main() {
    int n, m;
    cin >> n >> m;

    // Find next prime after n
    for (int i = n + 1; i <= 50; i++) {
        if (isPrime(i)) {
            if (i == m)
                cout << "YES";
            else
                cout << "NO";
            break;
        }
    }

    return 0;
}
