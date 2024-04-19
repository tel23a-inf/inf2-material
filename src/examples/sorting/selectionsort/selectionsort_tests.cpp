#include <catch2/catch_test_macros.hpp>

#include "selectionsort.h"
#include <vector>

namespace inf2 {

    TEST_CASE( "min_index: nonempty list" ) {
        std::vector<int> vec1 = {17, 2, 42, 25, 99, 38};

        REQUIRE(min_index(vec1,0) == 1);
        REQUIRE(min_index(vec1,2) == 3);
    }

    TEST_CASE( "selection_sort: nonempty list" ) {
        std::vector<int> vec1 = {17, 2, 42, 25, 99, 38};

        selection_sort(vec1);

        REQUIRE(vec1 ==  std::vector<int>{2, 17, 25, 38, 42, 99});
    }

}
