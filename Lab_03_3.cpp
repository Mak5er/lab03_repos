// Lab_03_3.cpp
// Рева Максим
// Лабораторна робота № 3.3
// Розгалуження, задане графіком функції.
// Варіант 23
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x;  // вхідний аргумент
    double R;  // вхідний параметр (радіус)
    double y;  // результат обчислення функції

    cout << "R = "; cin >> R;
    cout << "x = "; cin >> x;

    const double PI = 4.0 * atan(1.0);

    // Розгалуження в повній формі
    if (x <= -7.0 - R)
        y = R;
    else if (x <= -7.0 + R)
        y = R - sqrt(R * R - (x + 7.0) * (x + 7.0));
    else if (x <= -4.0)
        y = R;
    else if (x <= 0.0)
        y = -R / 4.0 * x;
    else if (x <= PI)
        y = sin(x);
    else
        y = x - PI;

    cout << endl;
    cout << "y = " << y << endl;

    cin.get();
    return 0;
}
