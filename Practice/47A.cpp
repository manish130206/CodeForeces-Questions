#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;

    int D = 1 + 8 * n;
    int sqrtD = sqrt(D);

    if (sqrtD * sqrtD == D && (sqrtD - 1) % 2 == 0) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}
