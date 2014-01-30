#ifndef POINT_H
#define POINT_H

#include<string>

// Preprocessor Macro 
#define DIMENSION 4
using namespace std; // Similiar to an import directive in java
namespace oop {  
// classes end in a semicolon 
// There is no visibility modifier for top level classes only for individual members
class Point  { 
 private:  
    double coordinates[DIMENSION]; 
 public: 

    const static Point ORIGIN; 
    Point(double c1, double c2, double c3, double c4); 
    double getCoordinate(int i) const;
    void setCoordinate(int i, double c); 
    double getDistanceFrom(Point& other) const; 
    string toString() const; 	 
	
}; 

}

#endif 
