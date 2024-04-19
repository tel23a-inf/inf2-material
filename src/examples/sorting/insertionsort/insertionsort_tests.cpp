#include <catch2/catch_test_macros.hpp>

#include "insertionsort.h"
#include <vector>

namespace inf2{

    TEST_CASE( "insert_left: nonempty list" ) {
        std::vector<int> vec1 = {17, 2, 42, 25, 99, 38};

        insert_left(vec1, 1);

        REQUIRE(vec1 == std::vector<int>{2, 17, 42, 25, 99, 38});
    }

    TEST_CASE( "insertion_sort: nonempty list" ) {
        std::vector<int> vec1 = {17, 2, 42, 25, 99, 38};

        insertion_sort(vec1);

        REQUIRE(vec1 ==  std::vector<int>{2, 17, 25, 38, 42, 99});
    }

}
