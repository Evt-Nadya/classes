#include "pch.h"
#include <iostream>
using namespace std;
class DynamicArray {
private:
	int** matrix, **transposed_matrix;

public:
	DynamicArray(int rows, int cols)
	{
		matrix = new int*[rows];
		int i, j;
		for (i = 0; i < rows; i++)
			matrix[i] = new int[cols];
		cout << "Enter elements " << endl;
		for (i = 0; i < rows; i++)
			for (j = 0; j < cols; j++)
				cin >> matrix[i][j];
		cout << endl;
	}

void transporation(int rows, int cols)
{
	int i, j;
	transposed_matrix = new int*[cols];
	for (i = 0; i < cols; i++)
		transposed_matrix[i] = new int[rows];

	for (i = 0; i < cols; i++)
		for (j = 0; j < rows; j++) {
			transposed_matrix[i][j] = matrix[j][i];
		}
}
void getMatrix(int rows, int cols)
{
	cout << "transposed matrix " << endl;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cout << transposed_matrix[i][j]<<"\t";
		}
		cout << endl;
	}
}
void deleteMatrix(int rows, int cols)
{
	int i;
	for (i = 0; i < rows; i++)
		delete[]matrix[i];
	delete[]matrix;
	for (i = 0; i < cols; i++)
		delete[]transposed_matrix[i];
	delete[] transposed_matrix;
}
};

int main()
{
	int rows, cols;
	cout << "Enter the number of rows" << endl;
	cin >> rows;
	cout << "Enter the number of columns" << endl;
	cin >> cols;
	DynamicArray Matrix(rows, cols);
		Matrix.transporation(rows, cols);
		Matrix.getMatrix(cols, rows);
		Matrix.deleteMatrix(rows, cols);
	return 0;
}