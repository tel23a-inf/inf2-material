#include "linearsearch.h"

namespace inf2 {

    size_t find(const std::vector<int>& vec, int value) {
        for (size_t i = 0; i < vec.size(); i++) {
            if (vec[i] == value) {
                return i;
            }
        }
        return vec.size();
    }

}
