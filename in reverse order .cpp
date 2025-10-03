#include <iostream>
using namespace std;

int main() {
    string msg = "hi";
    for (int i = msg.size() - 1; i >= 0; i--) {
        cout << msg[i];
    }
    return 0;
}