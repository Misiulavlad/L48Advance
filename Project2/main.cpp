#include "util.h"
int main() {
    const int rows = 3;
    const int cols = 4;
    const int minValue = 0;
    const int maxValue = 10;

    int** matrix = new int* [rows];
    for (int i = 0; i < rows; ++i) {
        matrix[i] = new int[cols];
    }

    matrix[0][0] = 1; matrix[0][1] = 2; matrix[0][2] = 3; matrix[0][3] = 4;
    matrix[1][0] = 5; matrix[1][1] = 3; matrix[1][2] = 6; matrix[1][3] = 2;
    matrix[2][0] = 7; matrix[2][1] = 8; matrix[2][2] = 2; matrix[2][3] = 9;

    int result = findMaxRepeatedNumber(matrix, rows, cols, minValue, maxValue);

    if (result != -1) {
        cout << "Maximum repeated number: " << result << endl;
    }
    else {
        cout << "No numbers are repeated." << endl;
    }

    for (int i = 0; i < rows; ++i) {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}