#include <iostream>
#include "java_lang.h" 
#include "Header.h" 
#include <sstream> 
using namespace java::lang;

int main(void) { 

    A  a = __A::init_Construct(  new __A());
    std::cout << a->__vptr->Something$String(a ,  new __String("ankit") )->data  << std::endl; 
    std::cout << a->__vptr->toString(a)->data << std::endl; 
    std::cout << a->__vptr->toString(a)->data << std::endl; 

       // __rt::Ptr<__rt::Array<String> > ss = new __rt::Array<String>(5);


    __rt::Ptr<__rt::Array<String> > as = new __rt::Array<String>(5);

    __rt::Ptr<__rt::Array<A> > Bs = new __rt::Array<A>(5); 

    //as->__data[0] = __rt::literal("ankit"); 

    //std::cout << as->__data[0] << std::endl; 

    //std::cout << as->__data[0]->toString(as->__data[0]) << std::endl; 

   // std::cout << as->__vptr->getClass(as)->toString(as->__vptr->getClass(as)); 

    //(*as)[1] = new __A::init_Construct( new __A()); 
}
