#ifndef code_examples_searching_linearsearch_h
#define code_examples_searching_linearsearch_h

/**
 * @brief Lineare Suche
 */

#include <vector>

namespace inf2 {

    /**
     * @brief Searches for a value in a vector.
     * 
     * @param `vec`: The vector to search in.
     * @param `value`: The value to search for.
     * @return The index of the value in the vector, or the size of the vector,
     *         if the value is not in the vector.
     */
    size_t find(const std::vector<int>& vec, int value);

}

#endif
