#include <iostream>
using namespace std;

struct A
{
    char a;
    char b;
};

struct B
{
    char a;
    double b;
};

struct C
{
    A a;
    B b;
};

int main() {
    A a = {'a', 'A'};
    B b = {'B', 3.14};
    C c = {{'c', 'C'}, {'d', 4.9}};
    cout << (a.b < c.b.a) << ' ' << c.a.a + b.b << ' ' << char(a.b + 5);
    cout << endl;
    return 0;
}