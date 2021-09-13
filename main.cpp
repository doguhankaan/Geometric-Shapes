#include <iostream>
#include "base-types.hpp"
#include "circle.hpp"
#include "rectangle.hpp"
#include "shape.hpp"

int main()
{
  const point_t point = { 9, 3 };
  const double dx = 2, dy = 2;
  Rectangle rectangle(7, 7, point);
  Shape* shape = &rectangle;
  std::cout << "Rectangle: ";
  shape->print(std::cout);
  std::cout << "Moving the rectangle to: " << "("
            << point.x + dx << ", " << point.y + dy << ")";
  shape->move(dx, dy);
  shape->print(std::cout);
  const point_t pt = { 5, 5 };
  std::cout << "Moving the rectangle (method two) to: " << "("
            << pt.x << ", " << pt.y << ")";
  shape->move(pt);
  shape->print(std::cout);

  const point_t point1 = { 8, 4 };
  const double dx1 = 17, dy1 = 17;
  Circle circle(2, point1);
  shape = &circle;
  std::cout << "Circle: ";
  shape->print(std::cout);
  std::cout << "Moving the circle to: " << "("
            << point1.x + dx1 << ", " << point1.y + dy1 << ")";
  shape->move(dx1, dy1);
  shape->print(std::cout);
  const point_t pt1 = { 5, 5 };
  std::cout << "Moving the circle (method two) to: " << "("
            << pt1.x << ", " << pt1.y << ")";
  shape->move(pt1);
  shape->print(std::cout);

  return 0;
}
