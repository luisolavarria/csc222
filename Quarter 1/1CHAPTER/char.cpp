#include <iostream>
using namespace std;

int main()
{
    char n = 33;
    n *= 2;
    cout << n << " is n printed as a character." << endl;
    cout << "But look at this: " << n + 1 << " and " << ++n;
    cout << ". What's all that about?" << endl;
    cout << "Oh, the 1st one is evaluated as an int, and the 2nd a char.";
    cout << endl;
    return 0;
}