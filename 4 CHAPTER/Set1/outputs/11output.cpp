#include <iostream>
using namespace std;

int main() {
    unsigned char n = 'a', m = ~n;
    cout << int(m) << endl;
    return 0;
}