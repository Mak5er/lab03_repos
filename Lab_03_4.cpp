// Lab_03_4.cpp
// Рева Максим
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 23
#include <iostream>

using namespace std;

int main()
{
    double x;  // абсциса точки
    double y;  // ордината точки
    double R;  // радіус (параметр фігури)

    cout << "R = "; cin >> R;
    cout << "x = "; cin >> x;
    cout << "y = "; cin >> y;

    // Перевірка попадання в область
    if ((x >= 0 && x <= R && y >= 0 && y <= R) ||
        (x >= -R && x <= 0 && y >= -R && y <= 0) ||
        (x >= -R && x <= 0 && y >= 0 && y <= R && ((x + R) * (x + R) + (y - R) * (y - R) >= R * R)))
    {
        cout << "так" << endl;
    }
    else
    {
        cout << "ні" << endl;
    }

    cin.get();
    return 0;
}
