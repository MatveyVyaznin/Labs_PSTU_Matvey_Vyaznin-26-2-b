#include <iostream>
#include <cstdarg>
#include <clocale>
using namespace std;

// ЧАСТЬ 7.1: ПЕРЕГРУЗКА ФУНКЦИЙ

// а) Умножение двух целых чисел
int mult(int a, int b) {
    return a * b;
}

// б) Умножение двух комплексных чисел: (r1 + i1*i) * (r2 + i2*i)
void mult(double r1, double i1, double r2, double i2, double &rRes, double &iRes) {
    rRes = r1 * r2 - i1 * i2;
    iRes = r1 * i2 + i1 * r2;
}

// ЧАСТЬ 7.2: ПЕРЕМЕННОЕ ЧИСЛО ПАРАМЕТРОВ

// Формула: S = a1*a2 + a2*a3 + a3*a4 + ...
int sum(int k, ...) {
    va_list args;
    va_start(args, k);

    int s = 0;
    int prev = va_arg(args, int); // Берем первое число a1

    for (int i = 1; i < k; i++) {
        int curr = va_arg(args, int); // Берем следующее число
        s = s + prev * curr;
        prev = curr;
    }

    va_end(args);
    return s;
}

int main() {
    setlocale(LC_ALL, "Russian");

    // Проверка части 7.1
    cout << "=== ЧАСТЬ 7.1: Перегрузка функций ===" << endl;
    int x = 6, y = 7;
    cout << "Умножение целых чисел (" << x << " * " << y << ") = " << mult(x, y) << endl;

    double r1 = 2, i1 = 3; // Первое комплексное число: 2 + 3i
    double r2 = 4, i2 = 5; // Второе комплексное число: 4 + 5i
    double rRes, iRes;
    mult(r1, i1, r2, i2, rRes, iRes);
    cout << "Умножение комплексных чисел (2 + 3i) * (4 + 5i) = "
         << rRes << " + " << iRes << "i" << endl;

    // Проверка части 7.2
    cout << "\n=== ЧАСТЬ 7.2: Переменное число параметров ===" << endl;
    // 5 параметров (k = 4 и 4 числа)
    cout << "Вызов 1 (5 параметров): S = " << sum(4, 1, 2, 3, 4) << endl;

    // 10 параметров (k = 9 и 9 чисел)
    cout << "Вызов 2 (10 параметров): S = " << sum(9, 1, 2, 3, 4, 5, 6, 7, 8, 9) << endl;

    // 12 параметров (k = 11 и 11 чисел)
    cout << "Вызов 3 (12 параметров): S = " << sum(11, 2, 1, 3, 2, 4, 1, 5, 2, 1, 3, 2) << endl;

    return 0;
}
