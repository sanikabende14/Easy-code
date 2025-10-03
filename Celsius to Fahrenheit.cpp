#include <iostream>
using namespace std;
int main() {
    float c;
    cout << "Enter Celsius: ";
    cin >> c;
    cout << "Fahrenheit = " << (c * 9/5) + 32;
    return 0;
}