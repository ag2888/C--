#include <iostream>
#include "java_lang.h" 
#include "Header.h" 
#include <sstream> 
using namespace java::lang;

int main(void) { 

    A  a = __A::init(new __A());
   std::cout << a->self->__vptr->toString(a->self)->data << std::endl;
}
