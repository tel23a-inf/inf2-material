#ifndef INFORMATIK_2_TEL23A_INSERTIONSORT_H
#define INFORMATIK_2_TEL23A_INSERTIONSORT_H

#include <vector>

/**
 * @brief Insertion Sort
 */

namespace inf2 {

    /**
     * @brief Swaps an element to the left until it is either at the beginning or larger than its left neighbour.
     *
     * @param `vec`: The vector to operate on.
     * @param `pos`: The position of the element to swap left.
     */
    void insert_left(std::vector<int> & vec, size_t pos);

    /**
     * @brief Sorts a list using the `insertion insertionsort` algorithm.
     *
     * @param `vec`: The vector to sort.
     */
    void insertion_sort(std::vector<int> & vec);

}

#endif //INFORMATIK_2_TEL23A_INSERTIONSORT_H
