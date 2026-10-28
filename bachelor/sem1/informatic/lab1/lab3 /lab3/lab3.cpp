#include <iostream>
#include <iomanip>
#include <cmath>
#include <clocale>

int main() {
    std::setlocale(LC_ALL, "Russian");

    double a = 0.1, b = 1.0;
    int k = 10;
    double h = (b - a) / k;
    double eps = 0.0001;
    int fixed_n = 10;

    std::cout << "=================================================================================" << std::endl;
    std::cout << " x\t\t Точное sin(x)\t Ряд (по n=" << fixed_n << ")\t Ряд (по eps=" << eps << ")" << std::endl;
    std::cout << "=================================================================================" << std::endl;

    for (int i = 0; i <= k; ++i) {
        double x = a + i * h;
        double exact = std::sin(x);

        // а) Вычисление по заданному n
        double sum_n = x;
        double term = x;
        for (int n = 1; n <= fixed_n; ++n) {
            term = -term * x * x / ((2 * n) * (2 * n + 1));
            sum_n += term;
        }

        // б) Вычисление по заданной точности eps
        double sum_eps = x;
        term = x;
        int n = 1;
        while (std::abs(term) > eps) {
            term = -term * x * x / ((2 * n) * (2 * n + 1));
            sum_eps += term;
            n++;
        }

        std::cout << std::fixed << std::setprecision(6)
                  << x << "\t\t " << exact << "\t\t " << sum_n << "\t\t " << sum_eps << std::endl;
    }

    std::cout << "=================================================================================" << std::endl;
    return 0;
}
