#include "bubblesort.h"

#include <algorithm>

namespace inf2 {

    void bubble_up(std::vector<int> & vec) {
        for (size_t pos = 0; pos < vec.size()-1; pos++) {
            if (vec[pos] > vec[pos+1]) {
                std::swap(vec[pos], vec[pos+1]);
            }
        }
    }

    void bubble_sort(std::vector<int> & vec) {
        for (size_t i = 0; i < vec.size(); i++) {
            bubble_up(vec);
        }
    }

}
