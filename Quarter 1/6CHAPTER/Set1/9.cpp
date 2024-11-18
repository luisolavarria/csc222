#include <iostream>
using namespace std;

int main() {
    int u = 2, v = 1;
    do {
        u--;
        v++;
    } while (u >= 0);
    cout << u << '&' << v << endl;

    return 0;
}
