#include <iostream>
using namespace std;

int main() {
    char ch = 'd';
    for (float f = -4.0; f < 100; f *= -2)
        cout << ++ch;
    cout << endl;

    return 0;
}