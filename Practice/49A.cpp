#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    // Traverse from the end to find the last letter
    for (int i = s.size() - 1; i >= 0; i--) {
        if (isalpha(s[i])) {
            char ch = tolower(s[i]);

            // Check if it's a vowel
            if (ch == 'a' || ch == 'e' || ch == 'i' || 
                ch == 'o' || ch == 'u' || ch == 'y') {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
            break;
        }
    }

    return 0;
}
