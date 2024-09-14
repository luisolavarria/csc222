#include <iostream>
using namespace std;

int main() {
    int x = 3, y = x++, z = ++x; //y=3, z=5, x=5
    cout << (z - x < y - x ? 5 : 6) <<  endl;
    return 0;
}cd 