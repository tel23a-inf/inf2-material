#include "selectionsort.h"

#include <algorithm>

namespace inf2 {

    size_t min_index(std::vector<int> const & vec, size_t pos) {
        size_t result = pos;
        for (size_t p = pos; p < vec.size(); p++) {
            if (vec[p] < vec[result]) {
                result = p;
            }
        }
        return result;
    }

    void selection_sort(std::vector<int> & vec) {
        for (size_t i = 0; i < vec.size(); i++) {
            size_t m = min_index(vec, i);
            std::swap(vec[i], vec[m]);
        }
    }

}
