#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

#include "base-types.hpp"
#include "shape.hpp"

class Rectangle:public Shape
{
public:
  Rectangle(const double width, const double height, const point_t& position);
  double getArea() const override;
  void move(const point_t& point) override;
  void move(const double dx, const double dy) override;
  rectangle_t getFrameRect() const override;
  void print(std::ostream& ostream) const override;

private:
  double width_;
  double height_;
  point_t position_;
};
#endif
