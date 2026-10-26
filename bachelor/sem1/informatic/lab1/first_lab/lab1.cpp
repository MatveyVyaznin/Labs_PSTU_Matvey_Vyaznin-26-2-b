// ЗАДАНИЕ 1
    // Вычисления для типа float
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    float a_f = 1000.0f;
    float b_f = 0.0001f;

    float part1_f = (a_f + b_f) * (a_f + b_f) * (a_f + b_f);
    float part2_f = (a_f * a_f * a_f) + (3.0f * a_f * a_f * b_f);
    float numerator_f = part1_f - part2_f;

    float denom1_f = 3.0f * a_f * b_f * b_f;
    float denom2_f = b_f * b_f * b_f;
    float denominator_f = denom1_f + denom2_f;

    float result_float = numerator_f / denominator_f;

    cout << fixed << setprecision(10);
    cout << "Rezultat float: " << result_float << endl;

    return 0;
}


    // Вычисления для типа double
#include <iostream>
#include <iomanip> 

using namespace std;

int main() {
    double a_d = 1000.0;
    double b_d = 0.0001;

    double part1_d = (a_d + b_d) * (a_d + b_d) * (a_d + b_d);
    double part2_d = (a_d * a_d * a_d) + (3.0 * a_d * a_d * b_d);
    double numerator_d = part1_d - part2_d;

    double denom1_d = 3.0 * a_d * b_d * b_d;
    double denom2_d = b_d * b_d * b_d;
    double denominator_d = denom1_d + denom2_d;

    double result_double = numerator_d / denominator_d;

    cout << fixed << setprecision(10);
    cout << "Rezultat double: " << result_double << endl;

    return 0;
}

    // --- ЗАДАНИЕ 2
#include <iostream>
using namespace std;

int main() {
    int n = 10, m = 5;
    cout << "1) n---m  -> " << (n - (--m)) << endl;
    cout << "2) m--<n  -> " << boolalpha << ((5 < 10)) << endl;
    cout << "3) n++>m  -> " << ((10 > 5)) << endl;

    return 0;
}
