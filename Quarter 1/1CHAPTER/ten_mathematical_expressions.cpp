#include <iostream>
#include <cmath>
using namespace std ;


int main(){
    int x=5;
    int y=3;
    int z=8;
    int a=2;
    cout << "1. "<<"the product of "<< x << " and " << y << " is ";
    cout << x * y << ". \n" << endl; 
    cout << "2. "<<"the difference between "<< y << " and " << z << " is ";
    cout << y - z << ". \n" << endl; 
    cout << "3. "<<"the sum of "<< a << " and " << z << " is ";
    cout << a + z << ". \n" << endl; 
    cout << "4. "<<"the quotient between "<< a << " and " << x << " is ";
    cout << a / x << ". \n" << endl; 
    cout << "5. "<<"the remainder between "<< y << " and " << z << " is ";
    cout << y % z << ". \n" << endl; 
    cout << "6. "<<"the value of "<< y << " to the power of " << "1/"<< a << " is ";
    cout << sqrt(y) << ". \n" << endl; 
    cout << "7. "<<"the result of "<< x << " to the power of " << y << " minus " << z << " is ";
    cout << pow(x, y) - z << ". \n" << endl; 
    cout << "8. "<<"the absolute value of "<< a << " minus " << z << " is ";
    cout << abs(a - z) << ". \n" << endl; 
    cout << "9. "<<"the difference between "<< z << " and " << x << " is ";
    cout << z - x << ". \n" << endl; 
    cout << "10. "<<"the product of "<< y << " and " << x << " over "<< a << " is ";
    cout << (y * x)/a << ". \n" << endl; 

    return 0;
    }   