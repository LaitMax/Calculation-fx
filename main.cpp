#include <iostream> //����������� ���������� �����/������ � �������
#include <cmath> //����������� ���������� cmath
using namespace std; //������������ ��� std
void main()
{
    setlocale(LC_ALL, "Russian");
    double x, y, f, s;
    int i;
    cout << "������� �������� x >> ";
    cin >> x;
    cout << "\n������� �������� y >> ";
    cin >> y;
    cout << "\n�������� ������� f(x) >> \n1\tsin(x)\n2\tx ^ 2\nelse\te ^ x\n";
    cin >> i;
    switch (i)
    {
    case 1: cout << "\n ������� ������� f(x) = sin(x):\t" << sin(x); f = sin(x); break;
    case 2: cout << "\n ������� ������� f(x) = x^2:\t" << pow(x, 2); f = pow(x, 2); break;
    default: cout << "\n ������� ������� f(x) = e^x:\t" << exp(x); f = exp(x);
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