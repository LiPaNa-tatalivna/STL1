#include <iostream>
#include <string>
#include <map>
#include <algorithm>

int main() {
    std::string text;
    std::cout << "Введите текст: ";
    std::getline(std::cin, text);

    // Создаем словарь для подсчета частоты символов
    std::map<char, int> frequencyMap;

    // Подсчитываем частоту каждого символа в тексте
    for (char ch : text) {
        frequencyMap[ch]++;
    }

    // Создаем вектор пар символ-частота для сортировки
    std::vector<std::pair<char, int>> frequencyVector(frequencyMap.begin(), frequencyMap.end());

    // Сортируем вектор по убыванию частоты
    std::sort(frequencyVector.begin(), frequencyVector.end(), [](const auto& a, const auto& b) {
        return a.second > b.second;
    });

    // Выводим результаты
    std::cout << "Частота символов в тексте (по убыванию):\n";
    for (const auto& pair : frequencyVector) {
        std::cout << pair.first << ": " << pair.second << "\n";
    }

    return 0;
}
