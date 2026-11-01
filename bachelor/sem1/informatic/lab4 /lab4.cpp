#include <iostream>
#include <cstdlib>
#include <ctime>
#include <clocale>

// Функция для печати массива
void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::setlocale(LC_ALL, "Russian");
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    const int MAX_SIZE = 100;
    int arr[MAX_SIZE];
    int n = 15; // Начальный размер массива

    // 1. Формирование массива с помощью датчика случайных чисел
    for (int i = 0; i < n; i++) {
        arr[i] = (std::rand() % 11) - 5; // Диапазон от -5 до 5 (включая нули)
    }

    // 2. Печать исходного массива
    std::cout << "Исходный массив:" << std::endl;
    printArray(arr, n);

    // 3. Удаление всех элементов, равных 0
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {
            for (int j = i; j < n - 1; j++) {
                arr[j] = arr[j + 1]; // Сдвиг элементов влево
            }
            n--;
            i--; // Проверяем смещенный элемент заново
        }
    }

    std::cout << "Массив после удаления нулей:" << std::endl;
    printArray(arr, n);

    // 4. Добавить после первого четного элемента элемент со значением M[i-1] + 2
    bool inserted = false;
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0 && arr[i] % 2 == 0) { // Находим первый четный элемент
            int newVal = arr[i] + 2; // Вычисление значения нового элемента

            // Сдвиг элементов вправо для освобождения места под вставку
            for (int j = n; j > i + 1; j--) {
                arr[j] = arr[j - 1];
            }
            arr[i + 1] = newVal;
            n++;
            inserted = true;
            break;
        }
    }

    if (!inserted) {
        std::cout << "Четных элементов не найдено, вставка не выполнена." << std::endl;
    }

    // 5. Распечатать полученный результирующий массив
    std::cout << "Результирующий массив после вставки:" << std::endl;
    printArray(arr, n);

    return 0;
}
