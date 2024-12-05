#include <iostream>
using namespace std;

int main() {
    int *ip[2] = {new int[2], new int[2]};
    for (int i = 0; i < 4; i++)
        ip[i % 2][i / 2] = i * 3;
    cout << ip[0][0] << ' ' << ip[0][1] << ' ';
    cout << ip[1][0] << ' ' << ip[1][1] << endl;
    delete[] ip[0];
    delete[] ip[1];

  return 0;
}