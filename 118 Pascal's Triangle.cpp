#include <iostream>
#include <algorithm>
#include <math>


class Solution {
public:
	void printPascalTriangle(int nRows) {
		for (int i = 0; i < nRows; ++i) {
			for (int j = 0; j<=i; ++j) {
				printf("%d,", getTriangle(i, j));
			}
			printf("\n");
		}

	};
	int getTriangle(int row, int col) {
		if (col == 0) return 1;
		if (row == 0) return 1;
		if (col == row) return 1;
		return getTriangle(row - 1, col - 1) + getTriangle(row - 1, col);
	};
};