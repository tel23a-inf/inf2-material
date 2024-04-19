#ifndef INFORMATIK_2_TEL23A_SELECTIONSORT_H
#define INFORMATIK_2_TEL23A_SELECTIONSORT_H

#include <vector>

/**
 * @brief Selection Sort
 */

namespace inf2 {

    /**
     * @brief Finds the index of the largest element in a vector, starting at a given position.
     *
     * @param `vec`: The vector to operate on.
     * @param `pos`: The position to start at.
     * @return: The position of the smallest element in the list part starting at pos.
     */
    size_t min_index(std::vector<int> const & vec, size_t pos);

    /**
     * @brief Sorts a list using the `selection sort` algorithm.
     *
     * @param `vec`: The vector to sort.
     */
    void selection_sort(std::vector<int> & vec);

}

#endif
