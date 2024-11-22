#include <cstdlib>
#include <iostream>
using namespace std;

int main()
{
    cout << "RAND_MAX is: " << RAND_MAX << endl; 
    cout << "Let's generate 3 random numbers." << endl;
    cout << "Random number 1: " << rand() << endl;
    cout << "Random number 2: " << rand() << endl;
    cout << "Random number 3: " << rand() << endl;

    return 0;
}