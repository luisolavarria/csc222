#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "W";
   s.append(s).append(s).append(s).append(s);
    cout <<  s << endl;
    return 0;
}