#include <iostream>
#include <vector>
#include <string>

#ifdef _WIN32
#include "Windows.h"
#endif // _WIN32
//Конец блока для кириллицы

// Макрос для итерации по элементам массива.
#define ITERATE(count, code) { \
    for (int i = 0; i < count; i++) { \
        code; \
    } \
}

// Функция для печати сообщения
void print(const std::string& str) {
    std::cout << str << std::endl;
}

// Если количество пассажиров > 20, выводит сообщение.
void checkOverloaded(int wagonIndex, int passengers) {
    const int optimal = 20;
    if (passengers > optimal) {
        print("Вагон " + std::to_string(wagonIndex + 1)
            + " излишне заполнен (" + std::to_string(passengers) + " пассажиров)!");
    }
}

// Если количество пассажиров < 20, выводит сообщение.
void checkEmptySpots(int wagonIndex, int passengers) {
    const int optimal = 20;
    if (passengers < optimal) {
        print("Вагон " + std::to_string(wagonIndex + 1)
            + " имеет пустые места (" + std::to_string(passengers) + " пассажиров)!");
    }
}

int main() {
    //Блок для кириллицы
    setlocale(LC_ALL, "");
#ifdef _WIN32
    SetConsoleCP(866);
    SetConsoleOutputCP(866);
#endif
    //Конец блока для кириллицы

    const int NUM_WAGONS = 10;
    std::vector<int> passengers(NUM_WAGONS);

    std::cout << "Введите количество пассажиров в каждом из 10 вагонов:" << std::endl;
    // Чтение данных для каждого вагона
    ITERATE(NUM_WAGONS, {
        std::cin >> passengers[i];
        });

    // Вывод информации об излишне заполненных вагонах
    print("\nИзлишне заполненные вагоны:");
    ITERATE(NUM_WAGONS, {
        checkOverloaded(i, passengers[i]);
        });

    // Вывод информации о вагонах с пустыми местами
    print("\nВагоны с пустыми пассажирскими местами:");
    ITERATE(NUM_WAGONS, {
        checkEmptySpots(i, passengers[i]);
        });

    // Подсчёт общего количества пассажиров
    int totalPassengers = 0;
    ITERATE(NUM_WAGONS, {
        totalPassengers += passengers[i];
        });
    print("\nОбщее количество пассажиров: " + std::to_string(totalPassengers));

    return 0;
}