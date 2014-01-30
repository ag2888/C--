#include <list>
#include <vector>
#include <string>
#include <map>
#include <iostream>
#include <fstream>
#include <iostream>
#include <sstream>


using namespace std; 

map < unsigned, list<unsigned> > externalOccurences; 




int main(void) 
{
		

		// call to the copy constructor; 
		externalOccurences[1] = *(new list<unsigned>); 
		
		// Pushing to the list<unsigned>	
		externalOccurences[1].push_front(1); 
		externalOccurences[1].push_front(2);
		externalOccurences[1].push_front(3);
		

		list<unsigned> & moduleOccs = externalOccurences[1];

		list<unsigned>::iterator ii; 

		for( ii = moduleOccs.begin(); ii != moduleOccs.end(); ++ii) { 

			cout << *(ii) << endl;

			*(ii) = 5;  
		}
	
		
		for( ii = moduleOccs.begin(); ii != moduleOccs.end(); ++ii) { 

			cout << *(ii) << endl;

			*(ii) = 5;  
		}
				
}
