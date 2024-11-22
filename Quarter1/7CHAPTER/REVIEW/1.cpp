#include <iostream>
#include <string>
using namespace std;

int main(){

string fruit = "amoeba";
for (int index = 0; index < fruit.length(); index++) {
    char letter = fruit[index];
    cout << letter <<" "<< fruit.length() << endl;
}
    return 0;
}