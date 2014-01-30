#include <iostream>

using namespace std;
class Vector { 

	public : 
		Vector(std::initializer_list<double>); // initialize with a list 
		Vector(unsigned int i); // Dont Initialize with a list get Random Numbers; 
		double& operator[](int i);
		double* retElem(); 
		int Size(); 
	private : 
		double* elem; 
		unsigned int sz;
};

int Vector::Size() { 
	return sz; 	
}

double& Vector::operator[](int i) {
	return elem[i];
}

Vector::Vector(unsigned int s) 
	:elem{new double[s]},sz{s}
{
	
}

double* Vector::retElem() { 
	return elem; 	
	
}

Vector::Vector(std::initializer_list<double> lst) 
	:elem{new double[lst.size()]}, sz{lst.size()}
{ 
		
	copy(lst.begin(), lst.end(), elem); 
}




void printVectorElements(Vector& v) { 
	for (  int i = 0; i < v.Size(); ++i)
		cout << v[i] << endl; 
	
}






int main() {

	Vector v1 { 5.2, 6.2, 7.2, 9.2 }; 

	printVectorElements(v1);

	return 0;
}
