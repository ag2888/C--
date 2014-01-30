#include "Point.h"
#include <math.h>
#include <string>
#include <sstream>
using namespace std; 
namespace oop { 

   const  Point Point::ORIGIN = Point(0,0,0,0);	

    Point::Point(double c1, double c2, double c3, double c4) { 
	coordinates[0] = c1; 
	coordinates[1] = c2; 
	coordinates[2] = c3; 
	coordinates[3] = c4; 
	
    }

    double Point::getCoordinate(int i) const  { 
	return coordinates[i]; 
		
    }
	
    void Point::setCoordinate(int i, double c) { 
	coordinates[i] = c; 
 	
    }

    double Point::getDistanceFrom( const Point& other) { 

	double squaredDist = 0; 
	
	for ( int i = 0; i < DIMENSION; i++ ) { 

	  double dist  = this->getCoordinate(i) - other.getCoordinate(i); 
	  squaredDist += dist * dist; 
	} 
	return sqrt(squaredDist); 
     } 

     string Point::toString() { 
	ostringstream sout; 
	sout << "Point(" 
	     << getCoordinate(0) << " , "
	     << getCoordinate(1) << " , " 	
	     << getCoordinate(2) << " , " 	
	     << getCoordinate(3) << ")"; 
	    return sout.str(); 	
     }		 

	
}		
