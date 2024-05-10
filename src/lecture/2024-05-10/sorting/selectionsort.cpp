#include<iostream>
#include<vector>

// "Vorausdeklaration" der verwendeten Funktionen.
size_t smallestpos(std::vector<int> list, size_t start);
void selectionsort(std::vector<int> & list);

int main() {
    std::vector<int> list{42,23,15,103,37,38};

    std::cout << smallestpos(list, 0) << std::endl; // 2 (weil list[2] == 15)
    std::cout << smallestpos(list, 1) << std::endl; // 2 (weil list[2] == 15)
    std::cout << smallestpos(list, 2) << std::endl; // 2 (weil list[2] == 15)
    std::cout << smallestpos(list, 3) << std::endl; // 4 (weil list[4] == 37)

    selectionsort(list);
    for (int el : list) {
        std::cout << el << " ";
    }
    std::cout << std::endl;
}

/// smallestpos erwartet eine Liste und eine Startposition start.
/// Liefert die Position des kleinsten Elements hinter start in der Liste.
size_t smallestpos(std::vector<int> list, size_t start) {
    size_t result = start;

    for (size_t pos = start; pos < list.size(); pos++) {
        if (list[pos] < list[result]) {
            result = pos;
        }
    }
    return result;
}

/// @brief Sortiert eine Liste mittels Selection Sort. Komplexität: O(n^2) Vergleiche von Elementen in der Liste.
/// @param list: Die zu sortierende Liste.
void selectionsort(std::vector<int> & list) {
    // selectionsort sortiert eine Liste, indem sie für jede Position p in der Liste
    // einmal smallestpos mit p aufruft und das Element an Stelle p mit diesem
    // Ergebnis vertauscht.
    for (size_t p = 0; p < list.size(); p++) {
        size_t sp = smallestpos(list, p);
        std::swap(list[p], list[sp]);
    }
}