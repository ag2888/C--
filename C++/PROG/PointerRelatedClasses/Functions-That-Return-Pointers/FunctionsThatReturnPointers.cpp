#include <iostream>
using namespace std; 
string * dup( const string & str) 
{ 
	string *ret = new string(str + str); 
	return ret; 
}

int main() 
{ 
	string *result = dup("call");
	cout << *result << endl; 
	cout << "Now the string is " << *result << endl; 
}


