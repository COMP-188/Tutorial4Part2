#include "pch.h"
#include "CppUnitTest.h"
#include "../Tutorial4Part2/matrix.h"
#include "../Tutorial4Part2/matrix.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestForTurorial4Part2
{
	TEST_CLASS(UnitTestForTurorial4Part2)
	{
	public:
		
		TEST_METHOD(SumOfRowsCheck)
		{
			//void sumOfRows(const double mat[][MAX_COL], const int maxRow)

			//Arrange
			const int ROW = 5;
			double matrix[ROW][MAX_COL] = { 1.0, 1.0, 1.0, 1.0, 1.0,
											1.0, 1.0, 1.0, 1.0, 1.0,
											1.0, 1.0, 1.0, 1.0, 1.0, 
											1.0, 1.0, 1.0, 1.0, 1.0,
											1.0, 1.0, 1.0, 1.0, 1.0,
											};
			double sum = 0.0;
			//Act
			sumOfRows(matrix, ROW);

			//Assert
			int i;
			for (i = 0; i < ROW; i++) {
				sum = 0;
				for (int j = 0; j < MAX_COL; j++) {
					sum += matrix[j][i];
				}
				Assert::AreEqual(5.0, sum);
			}
		}

		TEST_METHOD(SumOfColsCheck)
		{
			//void sumOfRows(const double mat[][MAX_COL], const int maxRow)

			//Arrange
			const int ROW = 5;
			double matrix[ROW][MAX_COL] = { 2.0, 1.0, 1.0, 1.0, 1.0,
											1.0, 2.0, 1.0, 1.0, 1.0,
											1.0, 1.0, 2.0, 1.0, 1.0,
											1.0, 1.0, 1.0, 2.0, 1.0,
											1.0, 1.0, 1.0, 1.0, 2.0,
			};
			double sum = 0.0;
			//Act
			sumOfRows(matrix, ROW);

			//Assert
			int i;
			for (i = 0; i < ROW; i++) {
				sum = 0;
				for (int j = 0; j < MAX_COL; j++) {
					sum += matrix[j][i];
				}
				Assert::AreEqual(6.0, sum);
			}
		}
	};
}
