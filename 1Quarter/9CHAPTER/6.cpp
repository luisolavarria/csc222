#include <iostream>
using namespace std;

void swap(int n, int m) {
    int t = n;
    n = m;
    m = t;
} 

void swap(int* ip1, int* ip2) {
    int t = *ip1;
    *ip1 = *ip2;
    *ip2 = t;
} 

int main() {
    int x = 7, y = 11;
    swap(x, y);
    cout << x << ' ' << y << ' ';
    swap(&x, &y);
    cout << x << ' ' << y << endl;
    return 0;
}