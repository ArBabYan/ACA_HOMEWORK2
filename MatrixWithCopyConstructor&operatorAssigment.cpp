#include <iostream>

class Matrix {
private:
    int** matrix;
    int rows;
    int cols;

public:
    Matrix(int numRows, int numCols) {
        rows = numRows;
        cols = numCols;

        matrix = new int* [rows];
        for (int i = 0; i < rows; i++) {
            matrix[i] = new int[cols];
        }
    }

    Matrix(const Matrix& New) {
        rows = New.rows;
        cols = New.cols;

        matrix = new int* [rows];
        for (int i = 0; i < rows; i++) {
            matrix[i] = new int[cols];
            for (int j = 0; j < cols; j++) {
                matrix[i][j] = New.matrix[i][j];
            }
        }
    }

    ~Matrix() {
        for (int i = 0; i < rows; i++) {
            delete[] matrix[i];
        }
        delete[] matrix;
    }

    Matrix& operator=(const Matrix& other) {
        if (this == &other) {
            return *this;
        }

        
        for (int i = 0; i < rows; i++) {
            delete[] matrix[i];
        }
        delete[] matrix;

        rows = other.rows;
        cols = other.cols;

        matrix = new int* [rows];
        for (int i = 0; i < rows; i++) {
            matrix[i] = new int[cols];
            for (int j = 0; j < cols; j++) {
                matrix[i][j] = other.matrix[i][j];
            }
        }

        return *this;
    }

    void fillMatrix() {
        int a = 1;
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                matrix[i][j] = a;
                a++;
            }
        }
    }

    void print()  {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                std::cout << matrix[i][j] << " ";
            }
            std::cout << std::endl;
        }
    }
};

int main() {
    int rows, cols;
    std::cout << "Enter the number of rows: ";
    std::cin >> rows;
    std::cout << "Enter the number of columns: ";
    std::cin >> cols;

    Matrix matrix1(rows, cols);
    matrix1.fillMatrix();

    std::cout << "Original Matrix:" << std::endl;
    matrix1.print();

    Matrix matrix2(matrix1);  
    std::cout << "Copied Matrix:" << std::endl;
    matrix2.print();

    Matrix matrix3(rows, cols);
    matrix3 = matrix1;  
    std::cout << "Assigned Matrix:" << std::endl;
    matrix3.print();

    return 0;
}