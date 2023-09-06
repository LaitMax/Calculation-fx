#include <iostream> //Подключение потокового ввода/вывода в консоль
#include <cmath> //Подключение библиотеки cmath
using namespace std; //Пространство имён std
void main()
{
    setlocale(LC_ALL, "Russian");
    double x, y, f, s;
    int i;
    cout << "Enter the x value >> ";
    cin >> x;
    cout << "\nEnter the y value >> ";
    cin >> y;
    cout << "\nSelect function f(x) >> \n1\tsin(x)\n2\tx ^ 2\nelse\te ^ x\n";
    cin >> i;
    switch (i)
    {
    case 1: cout << "\n Selected function f(x) = sin(x):\t" << sin(x); f = sin(x); break;
    case 2: cout << "\n Selected function f(x) = x^2:\t" << pow(x, 2); f = pow(x, 2); break;
    default: cout << "\n Selected function f(x) = e^x:\t" << exp(x); f = exp(x);
    }
    if (x > abs(y))
    {
        cout << "\n" << x << ">|" << y << "|";
        s = (2 * pow(f, 3)) + (3 * pow(y, 2));
    }
    else if ((3 < x) and (x < abs(y)))
    {
        cout << "\n3<" << x << "<|" << y << "|";
        s = abs(f - y);
    }
    else
    {
        s = cbrt(abs(f - y));
    }
    cout << "\nMagic...";
    cout << "\n s = " << s;
}