#pragma once
#include <iostream>
#include <cmath>

using namespace std;

class Shape
{
protected:
    double centerX;
    double centerY;
    double angle;   
    double scale;   

public:
    Shape(double x = 0.0, double y = 0.0,
          double angle = 0.0, double scale = 1.0);

    virtual ~Shape() {}
    virtual void Show() = 0;   
    virtual void Hide();
    virtual void Rotate(double da);         
    virtual void Move(double dx, double dy); 
    virtual void Draw() = 0;
    void PrintState() const;
};
