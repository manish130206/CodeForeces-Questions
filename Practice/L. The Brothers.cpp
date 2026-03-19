#include <iostream>
#include <string>
using namespace std;

int main() {
    string F1, S1, F2, S2;
    // Read the names
    cin >> F1 >> S1 >> F2 >> S2;

    // Check if they are brothers based on their second names
    if (S1 == S2) {
        cout << "ARE Brothers" << endl;
    } else {
        cout << "NOT" << endl;
    }

    return 0;
}
