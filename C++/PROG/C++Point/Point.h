/*
#ifndef POINT_H
#define POINT_H
*/

#pragma once

#include <string>

#define DIMENSIONS 4

using std::string;

namespace oop {

  class Point {
    double coordinates[DIMENSIONS];

  public:
    static const Point ORIGIN;

    Point(double c1 = 0, double c2 = 0, double c3 = 0, double c4 = 0);

    double getCoordinate(int i) const;
    void setCoordinate(int i, double c);
    double getDistanceFrom(const Point& p) const;
    string toString() const;
  }; // Do NOT forget the semicolon!!!

}

/*
#endif
*/
