#include<iostream>
#include<cmath>
#include<stdexcept>

std::pair<double, double> получить„исла() {
    double число1, число2;
    std::cout << "¬ведите два числа: "; // ѕросим пользовател€ ввести два числа
    std::cin >> число1 >> число2;
    return { число1, число2 };
}

char получитьќперацию() {
    char операци€;
    std::cout << "¬ведите операцию (+, -, *, /): "; // ѕросим пользовател€ выбрать операцию
    std::cin >> операци€;
    return операци€;

int main() {

};