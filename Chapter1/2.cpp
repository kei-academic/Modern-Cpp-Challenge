#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using ui = unsigned int;

ui gcd(ui const a, ui const b) {
    return (b == 0) ? a : gcd(b, a%b);
}

ui gcd2(ui a, ui b) {
    while(b != 0) {
        ui r = a%b;
        a = b;
        b = r;
    }
    return a;
}

int main(void) {
    cout << "Input numbers:";
    ui a, b;
    cin >> a >> b;
    cout
        << "rec gcd(" << a << ", " << b << ")="
        << gcd(a, b) << endl;
    cout
        << "    gcd(" << a << ", " << b << ")="
        << gcd2(a, b) << endl;
    return 0;
}
