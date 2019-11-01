// ННГУ, ВМК, Курс "Методы программирования-2", С++, ООП
//
// sample_prime_numbers.cpp - Copyright (c) Гергель В.П. 20.08.2000
//   Переработано для Microsoft Visual Studio 2008 Сысоевым А.В. (19.04.2015)
//
// Тестирование битового поля и множества

#include <iomanip>


#include "stack.h"

int main()
{
	ochered och;
	och.push(3);
	och.push(4);
	std::cout << och.front() << "\n";
	std::cout << och.back() << "\n";
	ochered och2(och);
	och2.pop();
	std::cout << och2.back();
}