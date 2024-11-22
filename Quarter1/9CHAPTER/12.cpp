#include <iostream>
#include <string>
using namespace std;

string multi_copy(string s = "w", int n = 1){
    string clone_str;
    while (n--)
    clone_str += s;
return  clone_str;
}
int main() {
    string pattern = "ce";
    cout<< multi_copy(pattern)<<multi_copy()<<multi_copy("v", 3)<<endl;
    return 0;
}