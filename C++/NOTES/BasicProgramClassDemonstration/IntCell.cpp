
#include<iostream>
using namespace std; 

int main () { 


	class IntCell
	{
	public: 
		IntCell(int initialValue = 0) 
		{ storedValue = initialValue; }
		
		int getValue() 
		{ return storedValue; } 

		void setValue(int val) 
		{ storedValue = val ; } 
	private: 
		int storedValue; 
	}; 

	
	IntCell m1; 
	
	IntCell m2 = 37; 

	IntCell m3(55); 


	cout << m1.getValue() << " " << m2.getValue() << " " << m3.getValue() << endl;
	
	m1 = m2; 
		
	m2.setValue(40); 

	cout << m1.getValue() << " " << m2.getValue() << endl; 

	return 0; 

}

