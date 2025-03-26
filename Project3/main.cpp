#include "util.h"

int main() {
    const int rows = 3;
    const int cols = 6;

    int** matrix = new int* [rows];
    for (int i = 0; i < rows; ++i) {
        matrix[i] = new int[cols];
    }

    matrix[0][0] = 1; matrix[0][1] = 2; matrix[0][2] = 2; matrix[0][3] = 2; matrix[0][4] = 3; matrix[0][5] = 4;
    matrix[1][0] = 1; matrix[1][1] = 1; matrix[1][2] = 1; matrix[1][3] = 1; matrix[1][4] = 5; matrix[1][5] = 6;
    matrix[2][0] = 7; matrix[2][1] = 7; matrix[2][2] = 8; matrix[2][3] = 8; matrix[2][4] = 8; matrix[2][5] = 8;

    findRowsWithLongestSeries(matrix, rows, cols);

    for (int i = 0; i < rows; ++i) {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}
