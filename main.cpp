#include<iostream>
#include<cmath>
#include<stdexcept>

// Функции для ввода и вывода
std::pair<double, double> получитьЧисла() {
    double число1, число2;
    std::cout << "Введите два числа: "; // Просим пользователя ввести два числа
    std::cin >> число1 >> число2;
    return { число1, число2 };
}

char получитьОперацию() {
    char операция;
    std::cout << "Введите операцию (+, -, *, /): "; // Просим пользователя выбрать операцию
    std::cin >> операция;
    return операция;
}

void вывестиРезультат(double результат) {
    std::cout << "Результат: " << результат << std::endl; // Выводим результат
}

// Функции для арифметических операций
double сложение(double a, double b) {
    return a + b; // Складываем два числа
}

double вычитание(double a, double b) {
    return a - b; // Вычитаем второе число из первого
}

double умножение(double a, double b) {
    return a * b; // Умножаем два числа
}

double деление(double a, double b) {
    if (b == 0) {
        throw std::invalid_argument("Ошибка: Деление на ноль не допускается."); // Проверяем деление на ноль
    }
    return a / b; // Делим первое число на второе
}


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
            std::cout << "Неверная операция.\n"; // Обрабатываем неверную операцию.
        }
    }
    catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}

