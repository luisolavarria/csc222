#include <iostream>
#include <string>
#include <vector>

using namespace std;

string render_num_vector(const vector<int>& nums) {
    char a = nums[0];
    char b = nums[1];
    char c = nums[2];
    // for (auto i = nums.begin(); i != v.end(); ++i)
      //  cout << *i << " ";
    string s;
    s.push_back(c);
    s.push_back(b);
    s.push_back(a);
    return s;


}

int main(){
vector<int> x = {1,2,3};
cout<<render_num_vector(x)<<endl;
return 0;

}