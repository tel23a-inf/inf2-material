#include "insertionsort.h"

#include <algorithm>

namespace inf2 {

    void insert_left(std::vector<int> & vec, size_t pos) {
        while (pos > 0 && vec[pos] < vec[pos-1]) {
            std::swap(vec[pos], vec[pos-1]);
            pos--;
        }
    }

    void insertion_sort(std::vector<int> & vec) {
        for (size_t i = 0; i<vec.size(); i++) {
            insert_left(vec, i);
        }
    }

}
