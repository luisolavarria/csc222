#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest.h>
#include <string>
#include <vector>
#include "num_vector_utils.h"
using namespace std;

TEST_CASE("Testing render_num_vector") {
    vector<int> nums = {1, 3, 7};
    string numstr = render_num_vector(nums);
    string expected = "1 3 7";
    CHECK(numstr == expected);
    vector<int> nums2 = {7, 7, 8};
    numstr = render_num_vector(nums2);
    expected = "7 7 8";
    CHECK(numstr == expected);
    vector<int> nums3 = {17, 7, 8, 19};
    numstr = render_num_vector(nums3);
    expected = "17 7 8 19";
    CHECK(numstr == expected);
}
