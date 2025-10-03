#include <iostream>
using namespace std;
int main() {
    float s1, s2, s3, s4, s5;
    cout << "Enter marks of 5 subjects: ";
    cin >> s1 >> s2 >> s3 >> s4 >> s5;
    float total = s1 + s2 + s3 + s4 + s5;
    cout << "Percentage = " << (total / 5);
    return 0;
}