// Lab1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <float.h>
using namespace std;

int mantysa_d(void){
	double a = 1.0, b, c;
	int i = 0;

	for (;;){
		a = a / 2.0;
		b = 1 + a;
		c = b - 1.0;
		if (c == 0)break;
		i++;
	}

	return i;
}

int mantysa_f(void){
	float a = 1.0f, b, c;
	int i = 0;

	for (;;){
		a = a / 2.0f;
		b = 1.0f + a;
		c = b - 1.0f;
		if (c == 0)break;
		i++;
	}

	return i;
}

float epsilon_f(void){
	float eps = 1.0f;
	while (1.0f + eps / 2.0f>1.0f)
		eps /= 2.0f;
	return eps;
}

double epsilon_d(void){
	double eps = 1.0f;
	while (1.0f + eps / 2.0f>1.0f)
		eps /= 2.0f;
	return eps;
}

int _tmain(int argc, _TCHAR* argv[])
{
	cout << "Mantysa double = " << mantysa_d() << endl;
	cout << "Mantysa float = " << mantysa_f() << endl;
	cout << "Epsylon double = " << epsilon_d() << endl;
	cout << "Epsylon float = " << epsilon_f() << endl;
	cout << "DBL_EPSILON = " << DBL_EPSILON << endl;
	cout << "FLT_EPSILON = " << FLT_EPSILON << endl;
	system("pause");
	return 0;
}

