#include <iostream>
using namespace std;

int main() {
    int x = 0x02, y = 011, z = x ^ y, u = z | x, v = u & 0;
    cout << x << y << z  << u << v << endl;
    return 0;
}