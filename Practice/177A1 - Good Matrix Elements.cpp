#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int sum = 0;
    int x;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> x;

            if (i == j || i + j == n - 1 || i == n / 2 || j == n / 2) {
                sum += x;
            }
        }
    }

    cout << sum << endl;

    return 0;
}
