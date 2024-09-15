#include <iostream>
using namespace std;

int main() {
    char a = 3 << 1, b = a | 3, c = a ^ b;
    cout << int(a) << int(b) << int(c) << endl;
    return 0;
}