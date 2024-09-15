#include <iostream>
using namespace std;

int main() {
    unsigned char n = 6, m = 9;
    cout << (n & m ? "yes" : "no") << endl;
    return 0;
}