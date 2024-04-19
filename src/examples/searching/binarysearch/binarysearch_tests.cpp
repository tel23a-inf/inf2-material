#include <catch2/catch_test_macros.hpp>

#include "binarysearch.h"
#include <vector>

namespace inf2 {

    TEST_CASE( "binary search: list contains element" ) {
        std::vector<int> vec1 = {2, 17, 25, 42, 38, 99};

        REQUIRE(find(vec1, 42) == 3);
        REQUIRE(find(vec1, 2) == 0);
    }

    TEST_CASE( "binary search: list doesn't contain element" ) {
        std::vector<int> vec1 = {2, 17, 25, 42, 38, 99};

        REQUIRE(find(vec1, 500) == 6);
    }

}
