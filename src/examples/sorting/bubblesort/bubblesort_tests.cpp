#include <catch2/catch_test_macros.hpp>

#include "bubblesort.h"
#include <vector>

namespace inf2 {

    TEST_CASE( "bubble_up: nonempty list" ) {
        std::vector<int> vec1 = {17, 2, 42, 25, 99, 38};

        bubble_up(vec1);

        REQUIRE(vec1 == std::vector<int>{2, 17, 25, 42, 38, 99});
    }

    TEST_CASE( "bubble_sort: nonempty list" ) {
        std::vector<int> vec1 = {17, 2, 42, 25, 99, 38};

        bubble_sort(vec1);

        REQUIRE(vec1 ==  std::vector<int>{2, 17, 25, 38, 42, 99});
    }

}
