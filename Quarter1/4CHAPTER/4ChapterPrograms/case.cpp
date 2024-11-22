#include <iostream>
using namespace std;
char choice = 'C';
int main(){
switch (choice) {
case 'A':
    cout << "You chose A" << endl;
    break;
case 'B':
    cout << "You chose B" << endl;
    break;
case 'C':
    cout << "You chose C" << endl;
    break;
case 'D':
    cout << "You chose D" << endl;
    break;
default:
    cout << "You didn't make a valid choice" << endl;
    
}
return 0;
}