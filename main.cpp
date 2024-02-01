#include<iostream>
#include<cmath>
#include<stdexcept>

int main() {
    // Калькулятор
    std::pair<double, double> числа = получитьЧисла();
    char операция = получитьОперацию();

    try {
        switch (операция) {
        case '+':
            вывестиРезультат(сложение(числа.first, числа.second)); // Выполняем сложение
            break;
        case '-':
            вывестиРезультат(вычитание(числа.first, числа.second)); // Выполняем вычитание
            break;
        case '*':
            вывестиРезультат(умножение(числа.first, числа.second)); // Выполняем умножение
            break;
        case '/':
            вывестиРезультат(деление(числа.first, числа.second)); // Выполняем деление
            break;
        default:
            std::cout << "Неверная операция.\n"; // Обрабатываем неверную операцию
        }
    }
    catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

};