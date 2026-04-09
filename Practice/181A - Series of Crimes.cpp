#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<pair<int,int>> stars;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            char c;
            cin >> c;
            if (c == '*') {
                stars.push_back({i, j});
            }
        }
    }

    int r1 = stars[0].first, c1 = stars[0].second;
    int r2 = stars[1].first, c2 = stars[1].second;
    int r3 = stars[2].first, c3 = stars[2].second;

    int r4, c4;

    // Find row
    if (r1 == r2) r4 = r3;
    else if (r1 == r3) r4 = r2;
    else r4 = r1;

    // Find column
    if (c1 == c2) c4 = c3;
    else if (c1 == c3) c4 = c2;
    else c4 = c1;

    // Convert to 1-based indexing
    cout << r4 + 1 << " " << c4 + 1 << endl;

    return 0;
}
