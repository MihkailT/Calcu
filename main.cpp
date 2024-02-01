#include<iostream>
#include<cmath>
#include<stdexcept>

// Функции для арифметических операций
double сложение(double a, double b) {
    return a + b; // Складываем два числа

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
=======
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

    void вывестиРезультат(double результат) {
        std::cout << "Результат: " << результат << std::endl; // Выводим результат
    }
int main() {

};