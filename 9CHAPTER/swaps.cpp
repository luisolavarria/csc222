#include <iostream>
using namespace std;

void will_swap(int& a, int& b)
{
    cout << "a: " << a << "  b: " << b << endl;
    cout << "address of a: " << long(&a) << endl;
    cout << "address of b: " << long(&b) << endl;
    int temp = a;
    a = b;
    b = temp;
    cout << "a: " << a << "  b: " << b << endl;
}
void will_swap_with_pointers(char* a, char* b)
{
    cout << "a: " << *a << "  b: " << *b << endl;
    cout << "address of a: " << long(a) << endl;
    cout << "address of b: " << long(b) << endl;
    int temp = *a;
    *a = *b;
    *b = temp;
    cout << "a: " << *a << "  b: " << *b << endl;
}
int main(){
char* x ='a';
char* y ='b';
    will_swap_with_pointers(x, y);
    return 0;
}
