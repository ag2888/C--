#include <iostream>
#include "java_lang.h" 
#include "Header.h" 
#include <sstream> 
using namespace java::lang;

int main(void) { 

    NewYorkUniversity  nyu = new __NewYorkUniversity();
    NewYorkUniversity  nyuCs = __Courant::init(new __Courant());
     nyu->__vptr->classes( nyu);
     nyuCs->__vptr->classes( nyuCs);
}
