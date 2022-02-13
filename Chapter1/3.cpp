#include <iostream>
#include <numeric>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::accumulate;
using std::begin;
using std::end;
using vi = std::vector<int>;

int gcd(int const a, int const b) {
    return b == 0 ? a : gcd(b, a%b);
}

int lcm(int const a, int const b) {
    int h = gcd(a, b);
    return h ? (a * (b / h)) : 0;
}

template<class T>
inline int lcmr(T first, const T last) {
    return accumulate(first, last, 1, lcm);
}

int main(void) {
    int n = 0;
    cout << "Input count:";
    cin >> n;

    vi numbers;
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }

    cout
        << "lcm="
        << lcmr(begin(numbers), end(numbers))
        << endl;
    return 0;
}
