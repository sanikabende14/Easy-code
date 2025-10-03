#include <iostream>
using namespace std;
int main() {
    int n, rev = 0, rem, orig;
    cout << "Enter number: ";
    cin >> n;
    orig = n;
    while(n != 0) {
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }
    if(orig == rev)
        cout << "Palindrome";
    else
        cout << "Not Palindrome";
    return 0;
}