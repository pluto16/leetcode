#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Solution {
	public:
	void quickSort(int A[], int left, int right) {
		if (right <= left)
			return;

		int i = left;
		int j = right;
		int key = A[left];
		while (i < j) {
			while (i < j && key <= A[j]) {
				--j;
			}
			A[i] = A[j];
			while (i < j && key >= A[i]) {
				++i;
			}
			A[j] = A[i];
		}
		A[i] = key;
		quickSort(A, left, i-1);
		quickSort(A, i+1, right);

	};
};