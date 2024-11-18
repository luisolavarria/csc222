#include <iostream>
using namespace std;
void countdown(int n) {
    if (n == 0) {
        cout << "Blastoff!" << endl;
    } else {
        cout << n << endl;
        countdown(n-1);
    } }
int main() {
int x = -3;
countdown(x);
return 0;
}