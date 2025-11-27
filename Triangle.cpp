#include "Triangle.h"

Triangle::Triangle(double cx, double cy,
                   double angle, double scale,
                   double x1, double y1,
                   double x2, double y2,
                   double x3, double y3)
    : Shape(cx, cy, angle, scale),
      x1(x1), y1(y1),
      x2(x2), y2(y2),
      x3(x3), y3(y3)
{
}

void Triangle::Show()
{
    cout << "Показ трикутника на екрані:" << endl;
    Draw();
}

void Triangle::Draw()
{
    cout << "Трикутник з вершинами (відносно центра):" << endl;
    cout << "A(" << x1 << ", " << y1 << ")" << endl;
    cout << "B(" << x2 << ", " << y2 << ")" << endl;
    cout << "C(" << x3 << ", " << y3 << ")" << endl;
    PrintState();
}
