#include<iostream>
using namespace std;

class Matrix {
private:
    int rows, cols;
    int mat[100][100];

public:
    Matrix(int r, int c) {
        rows = r;
        cols = c;
    }

    void inputMatrix() {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cout << "Enter the element at position " << i << ", " << j << ": ";
                cin >> mat[i][j];
            }
        }
    }

    void displayMatrix() const {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cout << mat[i][j] << " ";
            }
            cout << endl;
        }
    }

    Matrix multiply(const Matrix &other) {
        if (cols != other.cols) {
            cout << "Matrix multiplication not possible!" << endl;
            exit(0);
        }

        Matrix result(rows, other.cols);

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < other.cols; j++) {
                result.mat[i][j] = 0;
            }
        }

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < other.cols; j++) {
                for (int k = 0; k < cols; k++) {
                    result.mat[i][j] += mat[i][k] * other.mat[k][j];
                }
            }
        }

        return result;
    }
};

int main() {
    int n1, m1, n2, m2;

    cout << "Enter the number of rows and columns for the first matrix: ";
    cin >> n1 >> m1;

    cout << "Enter the number of rows and columns for the second matrix: ";
    cin >> n2 >> m2;

    if (m1 != n2) {
        cout << "Matrix multiplication not possible! Number of columns in the first matrix must equal the number of rows in the second matrix.\n";
        return 1;
    }

    Matrix mat1(n1, m1);
    Matrix mat2(n2, m2);

    cout << "Enter elements of the first matrix:\n";
    mat1.inputMatrix();

    cout << "Enter elements of the second matrix:\n";
    mat2.inputMatrix();

    Matrix result = mat1.multiply(mat2);

    cout << "The product of the matrices is:\n";
    result.displayMatrix();

    return 0;
}