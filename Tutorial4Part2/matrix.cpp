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
