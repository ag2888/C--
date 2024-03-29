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

#pragma once

#include <iostream>

class stringval {
  size_t len;
  char* data;
public:
  stringval(const size_t len);
  stringval(const char* s);
  stringval(const stringval& other);
  ~stringval();
  size_t length() const;
  char& operator[](const size_t idx);
  const char& operator[](const size_t idx) const;
  stringval& operator=(const stringval& other);
  stringval operator+(const stringval& other) const;
};

std::ostream& operator<<(std::ostream& out, const stringval& s);
