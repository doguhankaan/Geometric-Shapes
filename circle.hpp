#ifndef CIRCLE_HPP
#define CIRCLE_HPP

#include "base-types.hpp"
#include "shape.hpp"

class Circle:public Shape
{
public:
  Circle(double radius, const point_t& point);
  double getArea() const override;
  void move(const point_t& point) override;
  void move(const double dx, const double dy) override;
  rectangle_t getFrameRect() const override;
  void print(std::ostream& ostream) const override;

private:
  double radius_;
  point_t position_;
};
#endif
