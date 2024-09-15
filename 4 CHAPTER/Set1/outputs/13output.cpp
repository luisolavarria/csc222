#include <iostream>
using namespace std;

int main() {
    bool b1 = true, b2 = false, b3 = !b2;
    cout << (b1 || b2 ? "mustard" : "ketchup");
    cout << " and ";
    if (b3)
        if (b1 && !(b2 && b3))
            cout << "ice cream";
        else
            cout << "spinach";
    cout << endl;
    return 0;
}