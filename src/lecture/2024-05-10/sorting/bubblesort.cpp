#include "bubblesort.h"

#include<iostream>
#include<algorithm>

int main () {
    std::vector<int> list{42,23,15,103,37,38};

    // bubble_up(list); // 23 15 42 37 38 103
    // bubble_up(list); // 23 15 42 37 38 103
    // bubble_up(list); // 23 15 42 37 38 103
    // bubble_up(list); // 23 15 42 37 38 103
    // bubble_up(list); // 23 15 42 37 38 103

    bubblesort(list);
    for (int el : list) {
        std::cout << el << " ";
    }
    std::cout << std::endl;
}
void bubble_up(std::vector<int> & list, size_t endpos) {
    for (size_t i = 0; i < endpos-1; i++) {
        if (list[i] > list[i+1]) {
            std::swap(list[i], list[i+1]);
        }
    } 
}

void bubblesort(std::vector<int> & list) {
    for (int i=0; i<list.size()-1; i++) {
        bubble_up(list, list.size()-i);
    }
}