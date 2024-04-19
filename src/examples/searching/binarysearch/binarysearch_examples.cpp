/**
 * @brief Main-Funktion für die lineare Suche
 */

#include "binarysearch.h"

#include <vector>
#include <format>
#include <iostream>
#include <string>

namespace inf2 {

    void print_title(std::string const & title) {
        std::cout << "\n" << title << std::endl;
        std::cout << std::string(title.size(), '=') << "\n" << std::endl;
    }

    void print_vec(std::vector<int> const & vec) {
        std::cout << "vector: ";
        for (auto el : vec) {
            std::cout << el << " ";
        }
        std::cout << "\n" << std::endl;
    }

    void print_result(std::vector<int> const & vec, int input) {
        std::cout << std::format("Result for find(vec1, {}): {}", input, find(vec, input)) << std::endl;
    }

    void example_find() {
        print_title("Examples for binary search");

        std::vector<int> vec1 = {2, 17, 25, 42, 38, 99};

        print_vec(vec1);

        print_result(vec1, 42);
        print_result(vec1, 2);
        print_result(vec1, 500);

        std::cout << std::endl;
    }

}

int main() {
    inf2::example_find();

    return 0;
}
