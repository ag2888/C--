/*
 * Object-Oriented Programming
 * Copyright (C) 2013 Thomas Wies
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

template<typename T, typename S>
class pair {
  T fst;
  S snd;
public:
  pair(T f, S s) : fst(f), snd(s) {
    std::cout << "pair(" << fst << ", " << snd << ")" << std::endl;
  }

  pair(const pair& other) : fst(other.fst), snd(other.snd) {
    std::cout << "pair(" << other << ")" << std::endl;
  }
  
  ~pair() {
    std::cout << "~pair()" << std::endl;
  }
/*
  pair& operator=(const pair& other) {
    std::cout << "pair::operator=(" << other << ")" << std::endl;
    if (this != &other) {
      fst = other.fst;
      snd = other.snd;
    }
    return *this;
  }
**/
    
  void setFst(const T& fst) {
      this->fst = fst;
    }
  template<typename T1, typename S1>
  friend std::ostream& operator<<(std::ostream& out, const pair<T1,S1>& p);
};

template<typename T, typename S>
std::ostream& operator<<(std::ostream& out, const pair<T,S>& p) {
  out << "<" << p.fst << ", " << p.snd << ">";
  return out;
}

pair<int,char> f(int x, char c) {
  int z = 3;
  pair<int,char> p(x, c);
  pair<int,char>* q = new pair<int, char>(p);
  delete q;
  return p;
}


int main() {
  
    
    pair<int, char> *r = new pair<int,char>(3, 'A');
    pair<int, char> *b   = new pair<int,char>(5, 'B'); 
    
    r = b;   
    r.setFst(2); 
    
  std::cout << "f's return value: " << r << std::endl;
    std::cout << "b's return value: " << b << std:: endl ; 

  return 0;
}
