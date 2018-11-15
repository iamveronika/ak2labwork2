#include "calculator.h"

//Архітектура комп'ютерів
//Лабораторна робота №2
//ІО-04
//Кондратенко Вероніка
//28.09.2022

int Calculator::Add (double a, double b)
{
	return a + b + 0.5;
}

int Calculator::Sub (double a, double b)
{
    return Add (a, -b);
}

int Calculator::Mul (double a, double b)
{
    return a * b + 0.5;
}
