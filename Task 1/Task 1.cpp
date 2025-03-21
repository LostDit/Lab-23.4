#include <iostream>

//Блок для кириллицы
#ifdef _WIN32
#include "Windows.h"
#endif // _WIN32
//Конец блока для кириллицы

//Блок макросов
#define DAY1 "Понедельник"
#define DAY2 "Вторник"
#define DAY3 "Среда"
#define DAY4 "Четверг"
#define DAY5 "Пятница"
#define DAY6 "Суббота"
#define DAY7 "Воскресенье"

#define PRINT_DAY(num,dayStr)	\
	case num:					\
		std::cout<<dayStr;		\
		break;
//Конец блока


int main(void) {
	//Блок для кириллицы
	setlocale(LC_ALL, "");
#ifdef _WIN32
	SetConsoleCP(866);
	SetConsoleOutputCP(866);
#endif
	//Конец блока для кириллицы
	
	int day;

	std::cin >> day;

	switch (day) {
		PRINT_DAY(1, DAY1)
			PRINT_DAY(2, DAY2)
			PRINT_DAY(3, DAY3)
			PRINT_DAY(4, DAY4)
			PRINT_DAY(5, DAY5)
			PRINT_DAY(6, DAY6)
			PRINT_DAY(7, DAY7)
	default:
		std::cout << "Неверный номер дня!\n";
	}

	return 0;
}