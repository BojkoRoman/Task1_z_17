/**
*@file Task1_z_17
*@brief Solution (C++ code) of Task1.17 GL 
* (Використовуючи тільки бітові та арифметичні операції, написати функцію, 
* яка повертає абсолютне значення різниці двох заданих знакових довгих цілих чисел.)
*Copyright 2014 by Roman Bojko
*/
#include <iostream>
using namespace std;
unsigned long subAbs(long num1, long num2);
int main()
{
	long number1, number2;

	cout << "Enter two numbers:" << endl;
	cin >> number1 >> number2;
	cout << "Result:" << endl << subAbs( number1, number2 ) << endl;
	system("pause");
	return 0;
}

unsigned long subAbs(long num1, long num2)
{
	unsigned long result = num1 - num2;

	// Отримуємо знаковий біт з результату
	unsigned long signBit = result >> 31;
		
	result = ( result ^ (~signBit + 1) ) + signBit;

	return result;
}