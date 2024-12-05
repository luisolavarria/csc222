#include <iostream>
using namespace std;

int main() {
    int n = 1, m = n & 0;
    do {
        m++;
        if (m > 1)
            n = m;
    } while (n < 3);
    cout << m << endl;
    return 0;
}
