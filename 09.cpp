#include <iostream>

using namespace std;

int main() {
    int x, y;

    cout << "Enter two numbers: ";
    cin >> x >> y;

    cout << "x + y = " << (x + y) << endl;
    cout << "x - y = " << (x - y) << endl;
    cout << "x * y = " << (x * y) << endl;
    cout << "x / y = " << (x / y) << endl;
    cout << "x % y = " << (x % y) << endl;

    cout << "++x = " << (++x) << endl;
    cout << "--y = " << (--y) << endl;
    cout << "x++ = " << (x++) << endl;
    cout << "y-- = " << (y--) << endl;

    return 0;
}
