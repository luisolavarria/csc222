#include <iostream>
using namespace std;

void print_true_or_false(int n) {
    if (n)
        cout << "The variable with value " << n << " is true." << endl;
    else
        cout << "The variable with value " << n << " is false." << endl;
}

void print_true_or_false(double n) {
    if (n)
        cout << "The variable with value " << n << " is true." << endl;
    else
        cout << "The variable with value " << n << " is false." << endl;
}

int main()
{
    int i = 4;
    double d = -2.0;
    print_true_or_false(i);
    print_true_or_false(d);
    i = 0;
    d = 0;
    print_true_or_false(i);
    print_true_or_false(d);
    return 0;
}