#include <iostream>
using namespace std;

int main() {
    int x = 3, y = x++, z = ++x;
    cin >> x;
    cout << z - x << y - x <<  endl;
    return 0;
}