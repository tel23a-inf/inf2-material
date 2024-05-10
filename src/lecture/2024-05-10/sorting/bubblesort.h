#ifndef LECTURE_2024_05_10_SORTING_BUBBLESORT
#define LECTURE_2024_05_10_SORTING_BUBBLESORT

#include<vector>

/// bubble_up erwartet eine Liste.
/// Läuft einmal durch die Luste und vertauscht an jeder Position
/// das Element mit seinem rechten Nachbarn, falls diese falsch sortiert sind.
void bubble_up(std::vector<int> & list);

/// bubblesort sortiert die Liste mit dem Verfahren Bubble Sort.
void bubblesort(std::vector<int> & list);

#endif
