#include <iostream>
#include <cmath>
using namespace std;

struct Point { // <==Structure DEFINITION
double x, y;  // <==Instance Variables
};
//Now "Point" has become a new variable type!
struct Rectangle {
    Point corner;
    double width, height;
};
double distance(Point p1, Point p2)
{
    double dx = p1.x - p2.x;
    double dy = p1.y - p2.y;
    return sqrt(dx*dx + dy*dy);
}

int main(){
Point center;
center.x = 1.0;
center.y = 2.0;
Point corner;
corner.x = 20;
corner.y = 40.0;
cout << distance(center, corner) << endl;

return 0;
}