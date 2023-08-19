// Реализовать класс "Комплексное число". Наполните класс перегруженными операторами + и * для сложения и умножения комплексных чисел.
//Перегрузите оператор << для вывода на экран комплексного числа.

#include "ComplexNumber.h"

ComplexNumber::ComplexNumber()
{
	a = 0;
	b = 0;
}

ComplexNumber::ComplexNumber(double A, double B)
{
	a = A;
	b = B;
}

void ComplexNumber::setComplex_a()
{
	cout << "Введите первое действительное число комплексного числа: ";
	cin >> a;
}

void ComplexNumber::setComplex_i()
{
	cout << "Введите второе мнимое число комплексного числа: ";
	cin >> b;
}

ComplexNumber& ComplexNumber::operator+(ComplexNumber& N)
{
	//пример:
	//z1 = 1 + 3i, z2 = 4 - 5i -> z1 + z2 = 1 + 3i + 4 - 5i = 5 - 2i

	ComplexNumber sum;
	sum.a = (this->a + N.a);
	sum.b = (this->b + N.b);

	return sum;
}

ComplexNumber& ComplexNumber::operator*(ComplexNumber& N)
{
    //пример:
	// z1 = 1 - i, z2 = 3 + 6i -> z1 * z2 = (1 - i)*(3 + 6i) = 1 * 3 - i * 3 + 1 * 6i - i * 6i = 3 - 3i + 6i + 6 = 9 + 3i
	//(i^2 = -1) 
    //(-i * 6i = - 6i^2 = -6 * -1 = +6)

	ComplexNumber pro;
	pro.a = (this->a * N.a) + ((this->b * N.b) * -1);
	pro.b = (this->b * N.a) + (this->a * N.b);
	return pro;
}

ostream& operator<<(ostream& os, const ComplexNumber& N)
{
	os << N.a << " + " << N.b << N.i;
	return os;
}
