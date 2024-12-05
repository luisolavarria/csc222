#include <iostream>
using namespace std;

int main() {
    int *ia[3] = { new int[3], new int[3], new int[3] }, *ip;

    for (int i = 0; i < 3; i++) {
        ip = ia[i];
        *ip = ip[1] = *(ip + 2) = i + 5;
    }
    cout << ia[0][0] << ' ' << ia[0][1] << ' ' << ia[0][2] << ' '; 
    cout << ia[1][0] << ' ' << ia[1][1] << ' ' << ia[1][2] << ' '; 
    cout << ia[2][0] << ' ' << ia[2][1] << ' ' << ia[2][2] << endl; 
    delete[] ia[0];
    delete[] ia[1];
    delete[] ia[2];
    return 0;
}