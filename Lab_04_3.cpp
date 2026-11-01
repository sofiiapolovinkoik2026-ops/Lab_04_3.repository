// Lab_04_3.cpp
// < Половінко Софія >
// Лабораторна робота № 4.3
// Табуляція функції, заданої формулою: функція з параметрами
// Варіант 13

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double a, b, c;
    double xp, xk, dx;
    double F;

    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;
    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;

    cout << fixed;
    cout << "---------------------------" << endl;
    cout << "|" << setw(7) << "x" << " |"
         << setw(12) << "F" << " |" << endl;
    cout << "---------------------------" << endl;

    double x = xp;
    while (x <= xk)
    {
        if (x - 1 < 0 && b - x != 0)
        {
            F = a * x * x + b;
        }
        else if (x - 1 > 0 && b + x == 0)
        {
            F = (x - a) / x;
        }
        else
        {
            F = x / c;
        }

        cout << "|" << setw(7) << setprecision(2) << x
             << " |" << setw(12) << setprecision(4) << F
             << " |" << endl;

        x += dx;
    }
    cout << "---------------------------" << endl;

    return 0;
}