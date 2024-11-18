#include <iostream>
#include <string>
using namespace std;

int main()
{
    string word1 = "Aardvark";
    string word2 = "xylophone";
    string word3 = "Acceptable";
    string word4 = "xylophone";

    cout << (word1.compare(word2) < 0) << ' ';
    cout << (word3.compare(word4) > 0) << ' ';
    cout << (word2.compare(word1) == 0) << endl;

    return 0;
}