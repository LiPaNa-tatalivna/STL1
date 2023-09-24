#include <iostream>
#include <set>
#include <vector>
#include <algorithm>

int main() {
    int n;
    std::cout << "Введите количество элементов: ";
    std::cin >> n;

    std::set<int> uniqueNumbers; // Множество для хранения уникальных чисел

    // Чтение и добавление чисел в множество
    std::cout << "Введите числа: ";
    for (int i = 0; i < n; i++) {
        int number;
        std::cin >> number;
        uniqueNumbers.insert(number);
    }

    // Создание вектора и копирование уникальных чисел из множества
    std::vector<int> uniqueVector(uniqueNumbers.begin(), uniqueNumbers.end());

    // Сортировка вектора по убыванию
    std::sort(uniqueVector.rbegin(), uniqueVector.rend());

    // Вывод уникальных чисел в порядке убывания
    std::cout << "Уникальные числа в порядке убывания:\n";
    for (int number : uniqueVector) {
        std::cout << number << " ";
    }
    std::cout << std::endl;

    return 0;
}
