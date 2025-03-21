#include <iostream>
#include <vector>
#include <string>

#ifdef _WIN32
#include "Windows.h"
#endif // _WIN32
//����� ����� ��� ���������

// ������ ��� �������� �� ��������� �������.
#define ITERATE(count, code) { \
    for (int i = 0; i < count; i++) { \
        code; \
    } \
}

// ������� ��� ������ ���������
void print(const std::string& str) {
    std::cout << str << std::endl;
}

// ���� ���������� ���������� > 20, ������� ���������.
void checkOverloaded(int wagonIndex, int passengers) {
    const int optimal = 20;
    if (passengers > optimal) {
        print("����� " + std::to_string(wagonIndex + 1)
            + " ������� �������� (" + std::to_string(passengers) + " ����������)!");
    }
}

// ���� ���������� ���������� < 20, ������� ���������.
void checkEmptySpots(int wagonIndex, int passengers) {
    const int optimal = 20;
    if (passengers < optimal) {
        print("����� " + std::to_string(wagonIndex + 1)
            + " ����� ������ ����� (" + std::to_string(passengers) + " ����������)!");
    }
}

int main() {
    //���� ��� ���������
    setlocale(LC_ALL, "");
#ifdef _WIN32
    SetConsoleCP(866);
    SetConsoleOutputCP(866);
#endif
    //����� ����� ��� ���������

    const int NUM_WAGONS = 10;
    std::vector<int> passengers(NUM_WAGONS);

    std::cout << "������� ���������� ���������� � ������ �� 10 �������:" << std::endl;
    // ������ ������ ��� ������� ������
    ITERATE(NUM_WAGONS, {
        std::cin >> passengers[i];
        });

    // ����� ���������� �� ������� ����������� �������
    print("\n������� ����������� ������:");
    ITERATE(NUM_WAGONS, {
        checkOverloaded(i, passengers[i]);
        });

    // ����� ���������� � ������� � ������� �������
    print("\n������ � ������� ������������� �������:");
    ITERATE(NUM_WAGONS, {
        checkEmptySpots(i, passengers[i]);
        });

    // ������� ������ ���������� ����������
    int totalPassengers = 0;
    ITERATE(NUM_WAGONS, {
        totalPassengers += passengers[i];
        });
    print("\n����� ���������� ����������: " + std::to_string(totalPassengers));

    return 0;
}