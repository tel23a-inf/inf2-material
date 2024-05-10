#include<iostream>
#include<vector>

void insert(std::vector<int> & list, size_t p);
void insertionsort(std::vector<int> & list);

int main() {
    std::vector<int> list{42,23,15,103,37,38};

    // insert(list, 1); // 23 42 15 103 37 38
    // insert(list, 2); // 15 23 42 103 37 38
    // insert(list, 3);
    // insert(list, 4);
    // insert(list, 5);
    insertionsort(list);
    for (int element : list) {
        std::cout << element << " ";
    }
    std::cout << std::endl;
}

/// insert erwartet eine Liste list und eine Position p.
/// Vertauscht das Element an Stelle p nach links, bis es
/// entweder größer ist als sein linker Nachbar,
/// oder bis es ganz links steht.
void insert(std::vector<int> & list, size_t p) {
    while (p > 0 && list[p] < list[p-1]) {
        // Vertausche list[p] mit list[p-1]. Alternativ: std::swap(list[p], list[p-1])
        int h = list[p-1];
        list[p-1] = list[p];
        list[p] = h;
        p--;
    }
}

/// insertionsort sortiert die Liste, indem es mit jeder Position einmal insert aufruft.
void insertionsort(std::vector<int> & list) {
    for (size_t i=1; i<list.size(); i++) {
        insert(list,i);
    }
}
