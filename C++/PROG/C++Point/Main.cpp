#include <iostream>

#include "Point.h"

using oop::Point;

int main() {
  const Point p = Point(3,0,4,0);

  std::cout << p.toString() << std::endl;
  std::cout << Point::ORIGIN.getDistanceFrom(p) << std::endl;

  Point p2 = Point(1,2,3,4);
  std::cout << p2.toString() << std::endl;
  p2.setCoordinate(0,100.5);
  std::cout << p2.toString() << std::endl;

  return 0;
}
