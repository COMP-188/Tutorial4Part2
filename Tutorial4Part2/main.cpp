/** \file main.cpp
 *  \brief     Small matrix manipulation program, Part of Lab 4 part 2 COMP-118
 *  \details   Program which performs various matrix manipulation functions
 *  \author    Harald Gjermundrod, Dmytro Venchak
 *  \version   0.1
 *  \date      04.04.2021
 */
#include "matrix.h"

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


//prototypes
int menu();

/**
 * <code>main</code> is the main function of this program.
 * <BR>
 * @return Returns 0 if success, any other value otherwise.
 */
int main()
{
    const int MAX_ROW = 5;

    int choice;
    double matrix[MAX_ROW][MAX_COL] = {0};

    srand(time(NULL));

    cout << " Welcome to the drawer \n";

    do {

        choice = menu();

        switch (choice) {
        case 1:// Sum of row
            fillWithRandom(matrix, MAX_ROW);
            break;
        case 2:// Sum of col
            printMatrix(matrix, MAX_ROW);
            break;
        case 3://fill random
            sumOfRows(matrix, MAX_ROW);
            break;
        case 4://print matrix
            sumOfCol(matrix, MAX_ROW);
            break;
        case 5://even cnt
            cout << "\nThere are " << cntEven(matrix, MAX_ROW) << " even numbers" << endl;

            break;
        case 6://odd cnt
            cout << "\nThere are " << cntOdd(matrix, MAX_ROW) << " odd numbers" << endl;

            break;
        case 7://total sum
            cout << "\nThe total sum is: " << totalSum(matrix, MAX_ROW) << endl;
            break;
        case 8: //exit
            break;
        default:
            cerr << "\n!!!Invalid choice!!!\n";
            break;

        }

    } while (choice != 8);

    cout << "\nBye Bye!\n";
}

/**
 * Function <code>menu</code> shows the menu options to the user
 * <BR>
 * @return Returns the menu choice the user is selecting
 */
int menu() {
    int choice;

    cout << "\n      1) Fill random\n";
    cout << "      2) Print matrix\n";
    cout << "      3) Sum of rows\n";
    cout << "      4) Sum of columns\n";
    cout << "      5) Count even\n";
    cout << "      6) Count odd\n";
    cout << "      7) Total sum\n";
    cout << "      8) Exit\n";

    cout << "Enter a choice: ";

    cin >> choice;
    return choice;
}

