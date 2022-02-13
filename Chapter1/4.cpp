#include <iostream>

using std::cin;
using std::cout;
using std::endl;

template <typename T>
inline bool is_prime(T N) {
    for (int i = 2; i*i < N+1; i++) {
        if (N%i == 0) return false;
    }
    return true;
}

bool is_prime2(int const num) {
    if (num <= 3) {
        return num > 1;
    } else if (num % 2 == 0 || num % 3 == 0) {
        return false;
    } else {
        for (int i = 5; i * i <= num; i += 6) {
            if (num % i == 0 || num % (i + 2) == 0) {
                return false;
            }
        }
        return true;
    }
}

int main(void) {
    int limit = 0;
    cout << "Upper limit:";
    cin >> limit;

    for (int i = limit; i > 1; i--) {
        if (is_prime(i)) {
            cout << "Largest prime:" << i << endl;
            return 0;
        }
    }
}
