#include <catch2/catch_test_macros.hpp>

#include "linearsearch.h"
#include <vector>

namespace inf2 {

    TEST_CASE( "linear search: list contains element" ) {
        std::vector<int> vec1 = {17, 2, 42, 25, 99, 38};

        REQUIRE( find(vec1, 42) ==  2);
        REQUIRE( find(vec1, 2) == 1 );
    }

    TEST_CASE( "linear search: list doesn't contain element" ) {
        std::vector<int> vec1 = {17, 2, 42, 25, 99, 38};

        REQUIRE( find(vec1, 500) == 6 );
    }

}
