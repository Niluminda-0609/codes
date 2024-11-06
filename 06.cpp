#include <iostream>
#include <string>

using namespace std;

int main() {
    string city, country;

    cout << "Enter your city: ";
    cin >> city;

    cin.ignore(); // Consume the newline character

    cout << "Enter your country: ";
    getline(cin, country);

    cout << "You live in " << city << ", " << country << endl;

    return 0;
}
