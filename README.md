# Geometric-Shapes

All numeric data in this work should be represented by floating-point values.

1. Create a base-types.hpp file containing the definitions of the following structures:
* point_t, which is a point on the plane, the coordinates should be stored in the x and y fields.
* rectangle_t, describing a rectangle with a width of width and a height of height with the center at the pos point.

2. Create a shape file.hpp containing the definition of the abstract Shape class. This class should provide the following methods:
getArea area calculation
getFrameRect getting the bounding rectangle for the shape (see types from the previous-
the sides of the bounding rectangle are always parallel to the axes
move moving the center of the figure, 2 options: to a specific point and in the form of offsets along the axes of the abscissa and ordinate

3. Implement the Rectangle and Circle classes in the rectangle.hpp files, rectangle.cpp, circle.hpp and circle.cpp accordingly.

4. Demonstrate the correct operation of classes with a simple program. The demonstration should include polymorphic application of classes.
