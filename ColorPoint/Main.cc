/*
 * Object-Oriented Programming
 * Copyright (C) 2012 Robert Grimm
 * Modifications Copyright (C) 2013 Thomas Wies
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301,
 * USA.
 */

#include <iostream>

#include "Point.h"

using namespace std;
using namespace oop;


int main() {
  ColorPoint cp = ColorPoint(Color::WHITE, 1, 2, 3, 4);

  cout << cp.toString() << endl;

  // Polymorphism enables us to use a ColorPoint wherever a Point is expected:
  cout << Point::ORIGIN.getDistanceFrom(cp) << endl;

  // Virtual method dispatch enables us to replace the behavior of the 
  // static type by the behavior of the dynamic type:
  Point& p = cp;

  cout << p.toString() << endl; // calls ColorPoint::getString and not Point::getString


  return 0;
}
