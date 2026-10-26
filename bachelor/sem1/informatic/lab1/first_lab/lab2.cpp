#include <iostream>
#include <clocale>
using namespace std;
int main() {

    setlocale(LC_ALL, "Russian");

    int sum = 0;

    for (int i = 1; i < 200; i += 2) {

        sum += i;

    }

    cout << "==========================================" << endl;

    cout << "  РЕЗУЛЬТАТ РАСЧЕТА ЛАБОРАТОРНОЙ РАБОТЫ  " << endl;

    cout << "==========================================" << endl;

    cout << "Сумма нечетных чисел от 1 до 199: " << sum << endl;

    return 0;

}
