#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <clocale>

const int MAX = 10;

void fillMatrix(int a[MAX][MAX], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            a[i][j] = (std::rand() % 11) - 5;
        }
    }
}

void printMatrix(int a[MAX][MAX], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            std::cout << std::setw(4) << a[i][j];
        }
        std::cout << std::endl;
    }
}

void transposeMatrix(int a[MAX][MAX], int t[MAX][MAX], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            t[j][i] = a[i][j];
        }
    }
}

void sumMatrices(int a[MAX][MAX], int b[MAX][MAX], int c[MAX][MAX], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
}

int main() {
    std::setlocale(LC_ALL, "Russian");
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    int n = 4;
    int A[MAX][MAX];
    int T[MAX][MAX];
    int C[MAX][MAX];

    fillMatrix(A, n);
    std::cout << "Исходная матрица A:" << std::endl;
    printMatrix(A, n);

    transposeMatrix(A, T, n);
    std::cout << "\nТранспонированная матрица T:" << std::endl;
    printMatrix(T, n);

    sumMatrices(A, T, C, n);
    std::cout << "\nРезультирующая матрица C = A + T:" << std::endl;
    printMatrix(C, n);

    return 0;
}
