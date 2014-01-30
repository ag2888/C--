#include <iostream>
using namespace std; 

int printInt( int base, int n = 10); 

int main () { 
	printInt(4); 
	printInt(6,11); 
}

int printInt(int base, int n) { 
	cout << n << endl;  
}

