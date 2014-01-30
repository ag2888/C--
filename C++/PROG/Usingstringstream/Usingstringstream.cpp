# include <iostream>
# include <string>
# include <sstream>
using namespace std; 
/*
The standard header file <sstream> defines a class called stringstream that allows 
a string-based object to be treated as a stream. This way we can perform 
extracation or insertion operations from/to strings, which is especially useful to 
convert strings to numerical values and vice versa **/ 

int main () 
{ 
	int xx; 
	string mystr; 
	cout << " Enter  a String: "; 
	getline(cin,mystr); 
	int price; 
	stringstream(mystr) >> price; 
	cout << "\n"; 
	cout << price; 
	 


}

