#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using ui = unsigned int;
using ull = unsigned long long;
#define rep(i, n) for (ui i = 0; i < n; ++i)

int main() {
    ui limit = 0;
    cout << "Upper limit:";
    cin >> limit;

    ull sum = 0;
    rep(i, limit) {
        if (i % 3 == 0 || i % 5 == 0) {
            sum += i;
        }
    }

    cout << "sum=" << sum << endl;
    return 0;
}
