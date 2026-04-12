#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int amazing = 0;
    int max_score = a[0];
    int min_score = a[0];

    for (int i = 1; i < n; i++) {
        if (a[i] > max_score) {
            amazing++;
            max_score = a[i];
        } else if (a[i] < min_score) {
            amazing++;
            min_score = a[i];
        }
    }

    cout << amazing << endl;
    return 0;
}
