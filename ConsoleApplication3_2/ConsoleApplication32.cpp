// ConsoleApplication32.cpp: 定义控制台应用程序的入口点。
//3.2.cpp调用x的n次方函数进行二进制和十进制的转换

#include "stdafx.h"
#include<iostream>
using namespace std;

double power(double x, int n);

int main()
{
	int value = 0;
	cout << "enter an 8 bit binary number: ";
	for (int i = 7; i >= 0; i--) {
		char ch;
		cin >> ch;
		if (ch == '1')
			value += static_cast<int>(power(2, i));//类型转换为整型
	}
	cout << "decimal value is" << value << endl;
	return 0;
}

double power(double x, int n) {
	double val = 1.0;
	while (n--)
		val *= x;
	return val;
}