#include "Shape.h"

Shape::Shape(double x, double y, double angle, double scale)
    : centerX(x), centerY(y), angle(angle), scale(scale)
{
}

void Shape::Hide()
{
    cout << "Фігура прихована (умовне стирання з екрана)." << endl;
}

void Shape::Rotate(double da)
{
    angle += da;
    cout << "Фігура повернута на " << da
         << " градусів. Новий кут = " << angle << "°" << endl;
}

void Shape::Move(double dx, double dy)
{
    centerX += dx;
    centerY += dy;
    cout << "Фігура пересунута на вектор (" << dx << ", " << dy
         << "). Новий центр = (" << centerX << ", " << centerY << ")." << endl;
}

void Shape::PrintState() const
{
    cout << "Центр: (" << centerX << ", " << centerY << "), "
         << "кут: " << angle << "°, масштаб: " << scale << endl;
}
