#include <iostream>
#include <string>
#include <Windows.h>


int main()
{

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::cout << "Введите первое число: ";
	int a{};
	std::cin >> a;

	std::cout << " Введите второе число: ";
	int b{};
	std::cin >> b;

	std::cout << " Введите третье число: ";
	int c{};
	std::cin >> c;

	int max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);

	int min = (a < b) ? ((a < c) ? a : c) : ((b < c) ? b : c);

	int mid = a + b + c - max - min;

	std::cout << "Резльтат: " << max << " " << mid << " " << min;

	return EXIT_SUCCESS;
}
