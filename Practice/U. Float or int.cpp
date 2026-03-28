#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    string n;
    cin >> n;

    double num = stod(n);

    if (num == (int)num) {
        cout << "int " << (int)num << endl;
    } else {
        int integer_part = (int)num;
        double decimal_part = num - integer_part;

        cout << "float " << integer_part << " ";
        cout << fixed << setprecision(3) << decimal_part << endl;
    }

    return 0;
}
