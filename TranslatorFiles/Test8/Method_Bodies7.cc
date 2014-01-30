#include "java_lang.h" 
#include "Header.h" 
#include <sstream> 
namespace java { 
    namespace lang { 
     
        __A::__A() : __vptr(&__vtable), a(new __String("A")) { 
               
            
        
            
            
            
        }   

        
        
        
        
        __A_VT __A::__vtable; 

        __B::__B() : __vptr(&__vtable), b(new __String("B")) { 
            
            A ac = new __A(); 
            
            a = ac->a; 
                
        }
        
        
        
        
        
        __B_VT __B::__vtable; 


        __Test7::__Test7() : __vptr(&__vtable) { 
                            
        }
        
        __Test7_VT __Test7::__vtable; 
        
        
        
    }
}