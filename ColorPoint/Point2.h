#pragma once

#include <string>
#include <iostream>
#include "Color.h"

#define DIMENSIONS 4

using std::string;

namespace oop {
  class Printable {
  public:
    virtual string toString() const = 0; 
      // The syntax '= 0' indicates a pure virtual method.
    virtual void print() {
      std::cout << toString() << std::endl;
    }
  };
  // The class Printable is abstract because the method toString is pure virtual.
  // A pure virtual method is a virtual method that is only declared but not defined.
  // One can only create objects of classes whose methods are all defined.
  // Hence, it is not possible to create a Printable object directly 
  // (e.g. by declaring "Printable p;")

  class Point : public Printable {
  protected:
    double coordinates[DIMENSIONS];

  public:
    static const Point ORIGIN;

    Point(double c1 = 0, double c2 = 0, double c3 = 0, double c4 = 0);

    double getCoordinate(int i) const;
    void setCoordinate(int i, double c);
    double getDistanceFrom(const Point& p) const;
    virtual string toString() const;
  };

  class Colored {
    Color color;
  public:
    Colored(Color color) : color(color) {};
    Color getColor() const { return color; }
  };

  // ColorPoint now inherits the methods and fields from both of its super classes
  class ColorPoint : public Point, public Colored {
  public:
    ColorPoint(Color color, double c1, double c2, double c3, double c4) 
      : Point(c1, c2, c3, c4), Colored(color) {}
    string toString() const;
  };
}

