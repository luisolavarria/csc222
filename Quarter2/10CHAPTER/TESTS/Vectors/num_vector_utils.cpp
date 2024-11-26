#include <string>
#include <vector>
using namespace std;

string render_num_vector(const vector<int>& nums) {
    char a = nums[0] + '0';
    char b = nums[1] + '0';
    char c = nums[2] + '0';
    string s;
    s.push_back(a);
    s.push_back(' ');
    s.push_back(b);
    s.push_back(' ');
    s.push_back(c);
    return s;
}
