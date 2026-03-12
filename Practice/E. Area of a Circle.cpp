#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double R;
    const double PI = 3.141592653;

    cin >> R;

    double area = PI * R * R;

    cout << fixed << setprecision(9) << area << endl;

    return 0;
}
