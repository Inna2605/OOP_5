// Реализовать класс "Комплексное число". Наполните класс перегруженными операторами + и * для сложения и умножения комплексных чисел.
//Перегрузите оператор << для вывода на экран комплексного числа.

//z = a + bi
//z1 = 1 + 3i, z2 = 4 - 5i -> z1 + z2 = 1 + 3i + 4 - 5i = 5 - 2i

//z1 = 1 - i, z2 = 3 + 6i -> z1 * z2 = (1 - i)*(3 + 6i) = 1 * 3 - i * 3 + 1 * 6i - i * 6i = 3 - 3i + 6i + 6 = 9 + 3i
//(i^2 = -1) 
//(-i * 6i = - 6i^2 = -6 * -1 = +6)

#include <iostream>
#include "ComplexNumber.h"
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    ComplexNumber N1;
    ComplexNumber N2;
    N1.setComplex_a();
    N1.setComplex_i();
    N2.setComplex_a();
    N2.setComplex_i();

    ComplexNumber sum;
    sum = N1 + N2;
    cout << "\nСумма двух введенных комплексных чисел равна: ";
    cout << sum;
    cout << endl;

    ComplexNumber pro;
    pro = N1 * N2;
    cout << "\nПроизведение двух введенных комплексных чисел равно: ";
    cout << pro;
    cout << endl;

}
