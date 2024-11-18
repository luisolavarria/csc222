#include <iostream>
using namespace std;

int main() {
    float a[3][3] = {{.1, 1., 10.}, {10., .1, 1.}, {.1, 10., 0}};
    float f = 10.;
    for (int i = 0; i < 2; i++)
        f *= a[i][i];
    cout << f << endl;

    return 0;
}