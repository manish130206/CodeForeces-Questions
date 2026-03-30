#include <iostream>
using namespace std;

int main() {
    int A, B, C;
    char S, eq;

    // Input format: A S B = C
    cin >> A >> S >> B >> eq >> C;

    int result = 0;

    if (S == '+') {
        result = A + B;
    } 
    else if (S == '-') {
        result = A - B;
    } 
    else if (S == '*') {
        result = A * B;
    }

    if (result == C) {
        cout << "Yes" << endl;
    } else {
        cout << result << endl;
    }

    return 0;
}
