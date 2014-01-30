
#include <stdexcept>
#include <math.h>
#include <sstream>

#include "Point.h"

namespace oop {

  const Point Point::ORIGIN /*= Point()*/;

  Point::Point(double c1, double c2, double c3, double c4) 
  {
    coordinates[0] = c1;
    coordinates[1] = c2;
    coordinates[2] = c3;
    coordinates[3] = c4;
  }

  double Point::getCoordinate(int i) const {
    if (i < 0 || DIMENSIONS <= i) throw std::out_of_range("invalid index");
    return coordinates[i];
  }

  void Point::setCoordinate(int i, double c) {
    if (i < 0 || DIMENSIONS <= i) throw std::out_of_range("invalid index");
    coordinates[i] = c;
  }

  double Point::getDistanceFrom(const Point& p) const {
    double distanceSquared = 0;

    for (int i=0; i<DIMENSIONS; i++) {
      double diff = this->getCoordinate(i) - p.getCoordinate(i);
      distanceSquared += diff * diff;
    }

    return sqrt(distanceSquared);
  }

  string Point::toString() const {
    std::ostringstream sout;
    sout << "Point("
         << getCoordinate(0) << ", "
         << getCoordinate(1) << ", "
         << getCoordinate(2) << ", "
         << getCoordinate(3) << ")";
    return sout.str();
  }

}
