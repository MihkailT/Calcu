#include<iostream>
#include<cmath>
#include<stdexcept>

// ������� ��� ����� � ������
std::pair<double, double> �������������() {
    double �����1, �����2;
    std::cout << "������� ��� �����: "; // ������ ������������ ������ ��� �����
    std::cin >> �����1 >> �����2;
    return { �����1, �����2 };
}

char ����������������() {
    char ��������;
    std::cout << "������� �������� (+, -, *, /): "; // ������ ������������ ������� ��������
    std::cin >> ��������;
    return ��������;
}

void ����������������(double ���������) {
    std::cout << "���������: " << ��������� << std::endl; // ������� ���������
}

// ������� ��� �������������� ��������
double ��������(double a, double b) {
    return a + b; // ���������� ��� �����
}

double ���������(double a, double b) {
    return a - b; // �������� ������ ����� �� �������
}

double ���������(double a, double b) {
    return a * b; // �������� ��� �����
}

double �������(double a, double b) {
    if (b == 0) {
        throw std::invalid_argument("������: ������� �� ���� �� �����������."); // ��������� ������� �� ����
    }
    return a / b; // ����� ������ ����� �� ������
}


int main() {
    // �����������
    std::pair<double, double> ����� = �������������();
    char �������� = ����������������();

    try {
        switch (��������) {
        case '+':
            ����������������(��������(�����.first, �����.second)); // ��������� ��������
            break;
        case '-':
            ����������������(���������(�����.first, �����.second)); // ��������� ���������
            break;
        case '*':
            ����������������(���������(�����.first, �����.second)); // ��������� ���������
            break;
        case '/':
            ����������������(�������(�����.first, �����.second)); // ��������� �������
            break;
        default:
            std::cout << "�������� ��������.\n"; // ������������ �������� ��������
        }
    }
    catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}
