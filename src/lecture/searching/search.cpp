#include <vector>
#include <iostream>

/// Erwartet eine Liste list und einen Wert x.
/// Liefert die Position von x in list.
/// Liefert die Länge von list, falls x nicht in list vorkommt.
int find(std::vector<int> list, int x) {
    int counter = 0;
    for (int i = 0; i < list.size(); i++) {
        counter++;
        if (list[i] == x) {
            std::cout << "find: Anzahl Schritte: " << counter << std::endl;
            return i;
        }
    }
    std::cout << "find: Anzahl Schritte: " << counter << std::endl;
    return list.size();
}

/// Erwartet eine Liste list und einen Wert x.
/// Liefert die Position von x in list.
/// Liefert die Länge von list, falls x nicht in list vorkommt.
/// Führt eine binäre Suche aus, die Liste muss also sortiert sein.
int binfind(std::vector<int> list, int x) {
    int counter = 0;
    
    // Marker für Anfang und Ende des noch zu durchsuchenden Teils der Liste.
    int begin = 0;
    int end = list.size();

    while (begin != end) {
        int mitte = begin + (end - begin) / 2;

        // Prüfen, ob x in der Mitte steht.
        counter++;
        if (list[mitte] == x) {
            std::cout << "binfind: Anzahl Schritte: " << counter << std::endl;
            return mitte;
        }


        if (x < list[mitte]) {
            // Im linken Teil weitersuchen.
            end = mitte;
        } else {
            // Im rechten Teil weitersuchen.
            begin = mitte + 1;
        }

    }

    std::cout << "binfind: Anzahl Schritte: " << counter << std::endl;
    return list.size();
}

int main() {
    std::vector<int> list = {10, 25, 35, 42, 105, 270, 320, 500, 1024, 16384, 27553, 1200001};

    std::cout << binfind(list, 16385) << std::endl;

    return 0;
}