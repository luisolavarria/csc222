#include <iostream>
#include <string>
using namespace std;

int find(string s, char ch) {
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ch)
            return i+1; // we add one to the index so that it prints the number in order of the letter.
    }
    return -1;
}
   int main(){
    string s = "camello";
    char ch = 'o';
    string str= "mello";
   cout <<find(s, str)<<endl;
   return 0;
   }
