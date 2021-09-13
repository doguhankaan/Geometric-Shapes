#include "circle.hpp"
#define _USE_MATH_DEFINES
#include <cmath>
#include <cassert>
#include <iostream>

Circle::Circle(double radius, const point_t& point):
  radius_(radius),
  position_(point)
{
  assert(radius > 0);
}

double Circle::getArea() const
{
  return M_PI * radius_ * radius_;
}

void Circle::move(const point_t& point)
{
  position_ = point;
}

void Circle::move(const double dx, const double dy)
{
  position_.x += dx;
  position_.y += dy;
}

rectangle_t Circle::getFrameRect() const
{
  return rectangle_t{radius_, radius_, position_};
}

void Circle::print(std::ostream& ostream) const
{
  ostream << "Area: " << getArea()
          << "Radius: " << radius_
          << "Position: " << "(" << position_.x
          <<   ", " << position_.y << ")" << std::endl;
}
