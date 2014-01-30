# include <iostream>
# include <string>
# include <sstream>
# include <ostream>
using namespace std; 
int main () { 

	int Number = 123; 
	
	string Result; 
	
	ostringstream convert; 

	convert << Number; 
	
	Result = convert.str();

	cout << Result; 
}

