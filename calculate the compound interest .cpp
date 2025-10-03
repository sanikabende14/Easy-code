#include <iostream>
#include <cmath>
using namespace std;
int main() {
    float p, r, t;
    cout << "Enter Principal, Rate, Time: ";
    cin >> p >> r >> t;
    float ci = p * pow((1 + r / 100), t) - p;
    cout << "Compound Interest = " << ci;
    return 0;
}