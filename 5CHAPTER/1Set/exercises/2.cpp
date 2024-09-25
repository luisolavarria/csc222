#include <iostream>
using namespace std;

int f() {
    return 1;
}

int f(int n) {
    return n + 1;
}

int f(int n, int m) {
    return n + m + 1;
}

int main() {
    cout << f() + f(0) + f(3, 4) << endl;
    return 0;
}