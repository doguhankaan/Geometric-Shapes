#include "rectangle.hpp"
#include <cassert>
#include <iostream>
#include "base-types.hpp"

Rectangle::Rectangle(const double width, const double height, const point_t& point):
  width_(width),
  height_(height),
  position_(point)
{
  assert(width > 0);
  assert(height > 0);
}

double Rectangle::getArea() const
{
  return width_ * height_;
}

void Rectangle::move(const point_t& point)
{
  position_ = point;
}

void Rectangle::move(const double dx, const double dy)
{
  position_.x += dx;
  position_.y += dy;
}

rectangle_t Rectangle::getFrameRect() const
{
  return rectangle_t{width_, height_, position_};
}

void Rectangle::print(std::ostream& ostream) const
{
  ostream << "Area: " << getArea()
          << "Height: " << height_
          << "Width: " << width_
          << "Center is: " << "(" << position_.x
          <<   ", " << position_.y << ")" << std::endl;
}
