#include<iostream>
using namespace std;
void loop_forever(int n) {
    while (true) {
        cout << "n is now " << n << "." << endl;
        n = n + 1;
    }
}
int main (){
int n;
cin >> n;
loop_forever(n); 


return 0;
}