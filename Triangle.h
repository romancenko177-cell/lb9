#pragma once
#include "Shape.h"

class Triangle : public Shape
{
private:
    double x1, y1;
    double x2, y2;
    double x3, y3;

public:
    Triangle(double cx = 0.0, double cy = 0.0,
             double angle = 0.0, double scale = 1.0,
             double x1 = -1.0, double y1 = -1.0,
             double x2 = 1.0,  double y2 = -1.0,
             double x3 = 0.0,  double y3 = 1.0);

    virtual void Show() override;
    virtual void Draw() override;
};
