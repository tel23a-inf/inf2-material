#ifndef code_examples_searching_binarysearch_h
#define code_examples_searching_binarysearch_h

/**
 * @brief Binary Search
 */

#include <vector>

namespace inf2 {

    /**
     * @brief Searches for a value in a sorted vector.
     *
     * @param `vec`: The vector to search in.
     * @param `value`: The value to search for.
     * @return The index of the value in the vector, or the size of the vector,
     *         if the value is not in the vector.
     */
    size_t find(const std::vector<int>& vec, int value);

}

#endif
