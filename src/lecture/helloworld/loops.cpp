#include <iostream>
#include <vector>

using namespace std;

int main() {

    //int i = 38; // In Go: var i int = 38 oder i := 38

    for (int i = 1; i <= 10; i++) {
//        std::cout << i << "\n";
        std::cout << i << std::endl;
    }

    std::cout << std::endl;
    std::cout << std::endl;

    // In Go:
    //list := []int{42,23,55,38}

    // In C++:
    std::vector<int> list = {42,23,55,38}; // dynamisches Array
    //int list2[] = {42,23,55,38}; // "normales" Array

    for (int j = 0; j < list.size(); j++) {
        cout << list[j] << std::endl;
    }

    std::cout << std::endl;
    std::cout << std::endl;


    list.push_back(104);

    // Ausgabe mit Range-Loop.
    for (size_t el : list) {
        cout << el << std::endl;
    }

    std::cout << std::endl;
    std::cout << std::endl;

    return 0;
}