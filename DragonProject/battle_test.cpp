#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest.h>
#include "dragon.h"
#include <strings>
using namespace std;

TEST_CASE("Test can create and render dragon") {
    dragon 1dragon(             
    );
    CHECK(.to_string() == "This is MyObject");
}
