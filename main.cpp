#include<iostream>
#include<cmath>
#include<stdexcept>

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

};