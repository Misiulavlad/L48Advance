#include "util.h"

int findMaxRepeatedNumber(int** matrix, int rows, int cols, int minValue, int maxValue) {
    int range = maxValue - minValue + 1;
    int* frequency = new int[range]();

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            frequency[matrix[i][j] - minValue]++;
        }
    }

    int maxRepeated = -1;
    for (int i = 0; i < range; ++i) {
        if (frequency[i] > 1) {
            maxRepeated = (maxRepeated == -1) ? (i + minValue) : max(maxRepeated, i + minValue);
        }
    }

    delete[] frequency;
    return maxRepeated;
}