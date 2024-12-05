//Second Question
#include <iostream>
using namespace std;
void DisplayMessage()
{
    cout << "Hello world"<<endl;
}

int main() {
   int result = DisplayMessage()+ 7;       //The Function DisplayMessage doesn't return a value
    return 0;
}