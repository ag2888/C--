#include <iostream>
using namespace std; 

int main () { 

	int x = 5; 
	
	 	

	int *ptr1 = &x; 
	int y = 7; 
	int *ptr2 = &y; 

	ptr1 = ptr2; 
	 
	
	cout << " Value of ptr1 is  " << *ptr1 << "\n"; 

	cout << " Value of ptr2  is " << *ptr2 << "\n";
		
	*ptr1 = *ptr2; 

	cout << x << "\n"; 

	
	   
}

