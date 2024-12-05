#include <string>
#include <vector>
using namespace std;

string render_num_vector(const vector<int>& nums) {
    string s;
    int i;
    for (i = 0; i < nums.size() - 1; i++) {
        s += to_string(nums[i]) + ' ';
    }
    s += to_string(nums[i]);
    return s;
}
