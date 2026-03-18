#include <iostream>
#include <algorithm>

int main() {
    long long A, B, C;
    if (!(std::cin >> A >> B >> C)) return 0;

    long long min_val = std::min({A, B, C});
    long long max_val = std::max({A, B, C});

    std::cout << min_val << " " << max_val << std::endl;

    return 0;
}
