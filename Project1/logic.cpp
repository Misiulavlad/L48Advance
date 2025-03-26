#include "util.h"

int countNonZeroColumns(int** matrix, int rows, int cols) {
    int nonZeroColumnsCount = 0;

    for (int col = 0; col < cols; ++col) {
        bool hasZero = false;
        for (int row = 0; row < rows; ++row) {
            if (matrix[row][col] == 0) {
                hasZero = true;
                break;
            }
        }
        if (!hasZero) {
            ++nonZeroColumnsCount;
        }
    }

    return nonZeroColumnsCount;
}