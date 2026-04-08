#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    char mx = 'a';
    
    for(char c : s) {
        if(c > mx) mx = c;
    }

    int count = 0;
    for(char c : s) {
        if(c == mx) count++;
    }

    for(int i = 0; i < count; i++) {
        cout << mx;
    }

    return 0;
}
