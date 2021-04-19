/** \file matrix.h
 *  \brief     header file mall matrix  library
 *  \details   Library whith various matrix manipulation functions
 *  \author    Harald Gjermundrod, Dmytro Venchak
 *  \version   0.1
 *  \date      04.04.2021
 */
#ifndef MATRIX_H
#define MATRIX_H

  // Global constants
const int MAX_COL = 5;
const double MAX_VAL = 50.0;
const double MIN_VAL = 0.0;

  // Prototypes
void fillWithRandom(double mat[][MAX_COL], const int maxRow);
void printMatrix(const double mat[][MAX_COL], const int naxROW);



#endif /* MATRIX_H */