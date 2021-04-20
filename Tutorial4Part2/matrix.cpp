/** \file matrix.cpp
 *  \brief     Implementation file mall matrix  library
 *  \details   Library whith various matrix manipulation functions
 *  \author    Harald Gjermundrod, Dmytro Venchak
 *  \version   0.1
 *  \date      04.04.2021
 */

#include "matrix.h"

#include <iostream>
#include <iomanip>

using namespace std;

void fillWithRandom(double mat[][MAX_COL], const int maxRow) {
	
	for (int i = 0; i < maxRow; i++) {
		for (int j = 0; j < MAX_COL; j++) {

			mat[i][j] = rand() % (int)(MAX_VAL);

		}
	}

	cout << "\nMatrix is filled in with random values\n";

}
void printMatrix(const double mat[][MAX_COL], const int maxRow) {
	cout << endl;
	for (int i = 0; i < maxRow; i++) {
		for (int j = 0; j < MAX_COL; j++) {
			cout << setw(4) << right << mat[i][j];
		}
		cout << endl;
	}
}
void sumOfRows(const double mat[][MAX_COL], const int maxRow) {
	int j;
	for (int i = 0; i < maxRow; i++) {
		int sum = 0;
		for (j = 0; j < MAX_COL; j++) {
			sum += mat[i][j];
		}
		cout << "\nThe sum of row " << j << " is " << sum << endl;
	}
}
void sumOfCol(const double mat[][MAX_COL], const int maxRow) {
	int i;
	for (i = 0; i < maxRow; i++) {
		int sum = 0;
		for (int j = 0; j < MAX_COL; j++) {
			sum += mat[j][i];
		}
		cout << "\nThe sum of column " << i << " is " << sum << endl;
	}
}
int cntEven(const double mat[][MAX_COL], const int maxRow) {
	int count = 0;
	for (int i = 0; i < maxRow; i++) {
		for (int j = 0; j < MAX_COL; j++) {
			if ((int)mat[i][j] % 2 == 0) count++;
		}
	}
	return count;
}
int cntOdd(const double mat[][MAX_COL], const int maxRow) {
	int count = 0;
	for (int i = 0; i < maxRow; i++) {
		for (int j = 0; j < MAX_COL; j++) {
			if ((int)mat[j][i] % 2 == 1) count++;
		}
	}
	return count;
}
int totalSum(const double mat[][MAX_COL], const int maxRow) {
	int total = 0;
	for (int i = 0; i < maxRow; i++) {
		for (int j = 0; j < MAX_COL; j++) {
			total += (int)mat[i][j];
		}
	}
	return total;
}


