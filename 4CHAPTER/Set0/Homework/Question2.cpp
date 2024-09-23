#include <iostream>
using namespace std;
void n_lines(int n) {
    if (n > 0) {
        cout << endl;
        n_lines(n-1);
    }
}
int main(){
//2. Draw a stack diagram for n_lines, invoked with the parameter n equal to 4.

int n = 4;
n_lines(n);

return 0;
}