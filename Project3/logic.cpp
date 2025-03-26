#include "util.h"

void findRowsWithLongestSeries(int** matrix, int rows, int cols) {
    int maxSeriesLength = 0;
    int* rowsWithMaxSeries = new int[rows];
    int rowCount = 0;

    for (int i = 0; i < rows; ++i) {
        int currentSeriesLength = 1;
        int longestSeriesLength = 1;

        for (int j = 1; j < cols; ++j) {
            if (matrix[i][j] == matrix[i][j - 1]) {
                currentSeriesLength++;
                longestSeriesLength = max(longestSeriesLength, currentSeriesLength);
            }
            else {
                currentSeriesLength = 1;
            }
        }

        if (longestSeriesLength > maxSeriesLength) {
            maxSeriesLength = longestSeriesLength;
            rowCount = 0;
            rowsWithMaxSeries[rowCount++] = i;
        }
        else if (longestSeriesLength == maxSeriesLength) {
            rowsWithMaxSeries[rowCount++] = i;
        }
    }

    cout << "Rows with the longest series of identical elements:" << endl;
    for (int i = 0; i < rowCount; ++i) {
        cout << rowsWithMaxSeries[i] + 1 << endl;
    }

    delete[] rowsWithMaxSeries;
}
