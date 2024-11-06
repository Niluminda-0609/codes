#include <iostream>
#include <string>

using namespace std;

int main() {
    int x;
    char y;
    string z;
    bool a;
    double b;
    float c;

    cout << "Enter an Integer: ";
    cin >> x;

    cout << "Enter a Character: ";
    cin >> y;

    cout << "Enter a String: ";
    cin >> z;

    cout << "Enter a boolean: ";
    cin >> a;

    cout << "Enter a double: ";
    cin >> b;

    cout << "Enter a float: ";
    cin >> c;

    cout << "Int is: " << x << endl;
    cout << "Character is: " << y << endl;
    cout << "String is: " << z << endl;
    cout << "Boolean is: " << a << endl;
    cout << "Double is: " << b << endl;
    cout << "Float is: " << c << endl;

    return 0;
}
