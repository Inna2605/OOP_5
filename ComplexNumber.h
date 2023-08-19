// ����������� ����� "����������� �����". ��������� ����� �������������� ����������� + � * ��� �������� � ��������� ����������� �����.
//����������� �������� << ��� ������ �� ����� ������������ �����.

#include<iostream>
#pragma once
using namespace std;
class ComplexNumber
{
	double a;
	double b;
	char i = 'i';
public:
	ComplexNumber();
	ComplexNumber(double n, double i);
	void setComplex_a();
	void setComplex_i();
	ComplexNumber& operator+(ComplexNumber& N);
	ComplexNumber& operator*(ComplexNumber& N);
	friend ostream& operator<<(ostream& os, const ComplexNumber& N);
};

