#include <iostream>
#include <locale>
#include <clocale>

#if defined(_WIN32)||defined(_WIN64)
	#include <windows.h>
#endif // defined(_WIN32)||defined(_WIN64)

//Для определения макроса под сезон года:
//#define SPRING
//#define SUMMER
//#define AUTUMN
#define WINTER

#if defined(SPRING)
#define SEASON_NAME "Весна"
int main() {
	//Локализация консоли
	std::setlocale(LC_ALL, "");
	#if defined(_WIN32)||defined(_WIN64)
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	#endif
	std::cout.imbue(std::locale(""));

	std::cout << SEASON_NAME << std::endl;
	return 0;

}

#elif defined(SUMMER)
#define SEASON_NAME "Лето"
int main() {
	//Локализация консоли
	std::setlocale(LC_ALL, "");
#if defined(_WIN32)||defined(_WIN64)
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
#endif
	std::cout.imbue(std::locale(""));

	std::cout << SEASON_NAME << std::endl;
	return 0;
}

#elif defined(AUTUMN)
#define SEASON_NAME "Осень"
int main() {
	//Локализация консоли
	std::setlocale(LC_ALL, "");
#if defined(_WIN32)||defined(_WIN64)
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
#endif
	std::cout.imbue(std::locale(""));

	std::cout << SEASON_NAME << std::endl;
	return 0;
}

#elif defined(WINTER)
#define SEASON_NAME "Зима"
int main() {
	//Локализация консоли
	std::setlocale(LC_ALL, "");
#if defined(_WIN32)||defined(_WIN64)
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
#endif
	std::cout.imbue(std::locale(""));

	std::cout << SEASON_NAME << std::endl;
	return 0;
}
#endif
