#include <iostream>

//���� ��� ���������
#ifdef _WIN32
#include "Windows.h"
#endif // _WIN32
//����� ����� ��� ���������

//���� ��������
#define DAY1 "�����������"
#define DAY2 "�������"
#define DAY3 "�����"
#define DAY4 "�������"
#define DAY5 "�������"
#define DAY6 "�������"
#define DAY7 "�����������"

#define PRINT_DAY(num,dayStr)	\
	case num:					\
		std::cout<<dayStr;		\
		break;
//����� �����


int main(void) {
	//���� ��� ���������
	setlocale(LC_ALL, "");
#ifdef _WIN32
	SetConsoleCP(866);
	SetConsoleOutputCP(866);
#endif
	//����� ����� ��� ���������
	
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
		std::cout << "�������� ����� ���!\n";
	}

	return 0;
}