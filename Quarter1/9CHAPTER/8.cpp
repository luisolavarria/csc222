#include <iostream>
using namespace std;

char f1(char *p) {
    return ++(*p);
}

char *f2(char *p) {
    char c = *p - 3;
    *p = c;
    return p;
}

char *f3(char &n) {
    return &--n;
}

int main() {
    char mystery = 'z';
    cout << f1(f2(f3(mystery))) << endl;
    return 0;
}