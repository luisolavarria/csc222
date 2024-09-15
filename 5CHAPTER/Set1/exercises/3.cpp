#include <iostream>
using namespace std;

int f() {
    return 1;
}

int f(int n) {
    return n % 2 == 0 ? 1 : 0;
}

int f(int n, int m) {
    return n > m ? n - m : m - n;
}

int main() {
    cout << f() + f(11) + f(3, 4) << endl;
    return 0;
}