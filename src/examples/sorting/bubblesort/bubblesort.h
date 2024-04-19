#ifndef INFORMATIK_2_TEL23A_BUBBLESORT_H
#define INFORMATIK_2_TEL23A_BUBBLESORT_H

#include <vector>

/**
 * @brief Bubble Sort
 */

namespace inf2 {

    /**
     * @brief Walks through a vector and swaps every element with its right neighbour, if they are unordered.
     *
     * @param `vec`: The vector to operate on.
     */
    void bubble_up(std::vector<int> & vec);

    /**
     * @brief Sorts a list using the `selection sort` algorithm.
     *
     * @param `vec`: The vector to sort.
     */
    void bubble_sort(std::vector<int> & vec);

}

#endif
