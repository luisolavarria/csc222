#include <iostream>
using namespace std;

int main() {
  int nums[4] = {16, 8, 4, 2};
  int *p1 = nums + 2, *p2 = p1 - 1;
  
  cout << *p1 << ' ' << *p2 << ' ' << p1 - p2 << ' ';
  cout << *p1 + nums[p1 - p2] << endl;

  return 0;
}