#include <iostream>
using namespace std;
double distance(double x1, double y1, double x2, double y2) {
      double dx = x2 - x1;
    double dy = y2 - y1;
      double dsquared = dx * dx + dy * dy;
    double result = sqrt(dsquared);
    return result;
}
int main(){
  

 double Dist = distance(2.0, 5.5, 1.0, 6.2);
 cout << "The Ditance Is: " << Dist << endl;
return 0;
}