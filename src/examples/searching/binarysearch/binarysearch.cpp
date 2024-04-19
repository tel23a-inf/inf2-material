#include "binarysearch.h"

#include <iostream>

namespace inf2 {

    size_t find(const std::vector<int> &vec, int value) {
        int begin = 0; // first element of list
        int end = vec.size(); // first element after list

        while (begin <= end) {
            int m = begin + (end - begin) / 2;
            if (value == vec[m]) {
                return m;
            }
            if (value < vec[m]) {
                end = m;
            } else {
                begin = m + 1;
            }
        }

        return vec.size();
    }

}
