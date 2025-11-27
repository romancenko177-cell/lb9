#include <iostream>
#include "Triangle.h"

using namespace std;

int main()
{
    Triangle t(0.0, 0.0, 0.0, 1.0,
               -2.0, -1.0,
                2.0, -1.0,
                0.0,  2.0);

    cout << "=== Початковий стан фігури ===" << endl;
    t.Show();

    cout << "\n=== Поворот на 30 градусів ===" << endl;
    t.Rotate(30);
    t.Show();

    cout << "\n=== Пересування на вектор (3, 4) ===" << endl;
    t.Move(3, 4);
    t.Show();

    cout << "\n=== Приховування фігури ===" << endl;
    t.Hide();

    return 0;
}
