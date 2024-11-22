#include <iostream>
using namespace std;

int main() {
    int i = 0;
    for (float f = .00001; f < 1e2; f *= 1e1)
        i++;
    cout << i << endl;
  
    return 0;
}