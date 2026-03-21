#include <iostream>
using namespace std;

int main() {
    char x;
    cin >> x;

    // If lowercase, convert to uppercase
    if (x >= 'a' && x <= 'z') {
        cout << char(x - 32);
    }
    // If uppercase, convert to lowercase
    else if (x >= 'A' && x <= 'Z') {
        cout << char(x + 32);
    }

    return 0;
}
