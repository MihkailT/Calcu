#include<iostream>
#include<cmath>
#include<stdexcept>

// ������� ��� �������������� ��������
double ��������(double a, double b) {
    return a + b; // ���������� ��� �����

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

char ����������������() {
    char ��������;
    std::cout << "������� �������� (+, -, *, /): "; // ������ ������������ ������� ��������
    std::cin >> ��������;
    return ��������;

int main() {

};