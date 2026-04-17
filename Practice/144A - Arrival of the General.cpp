#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int maxVal = *max_element(a.begin(), a.end());
    int minVal = *min_element(a.begin(), a.end());

    int maxIndex = 0;
    int minIndex = 0;

    // leftmost max
    for (int i = 0; i < n; i++) {
        if (a[i] == maxVal) {
            maxIndex = i;
            break;
        }
    }

    // rightmost min
    for (int i = n - 1; i >= 0; i--) {
        if (a[i] == minVal) {
            minIndex = i;
            break;
        }
    }

    int moves = maxIndex + (n - 1 - minIndex);

    // adjust if overlap happens
    if (maxIndex > minIndex) {
        moves--;
    }

    cout << moves << endl;

    return 0;
}
