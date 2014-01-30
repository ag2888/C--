#include <iostream>
using namespace std; 

int main () { 

int x = 5; 

int y = 7; 

int *ptr1; 
int *ptr2; 

*ptr1 = x; 

ptr2 = &y; 

ptr1 = ptr2;  

 cout<< ptr1; 
 cout << ptr2; 

 cout<< " The value of ptr1 now after reassigning it is"; cout<< *ptr1; 
	 
}
