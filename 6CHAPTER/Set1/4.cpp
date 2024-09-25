#include <iostream>
using namespace std;

int doit(int n, int t = 2) {
    int x = n;
    while (t >>= 1)
        x++;
    return x;
}

int main() {
    cout << doit(2, 4) << doit(6) << endl;
    return 0;
}