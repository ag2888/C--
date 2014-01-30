#include "java_lang.h" 
#include "Header.h" 
#include <sstream> 
namespace java {
namespace lang {

void  __NewYorkUniversity::classes ( NewYorkUniversity __this ) { 
    std::cout <<"OOPS class" << std::endl;
}


__NewYorkUniversity::__NewYorkUniversity() : __vptr(&__vtable) {
}

__NewYorkUniversity_VT __NewYorkUniversity:: __vtable;

void  __Courant::classes ( Courant __this ) { 
    std::cout <<"Java Class" << std::endl;
}
Courant __Courant::init ( Courant __this ) {


	return __this; 
}

__Courant::__Courant() : __vptr(&__vtable) {
}

__Courant_VT __Courant:: __vtable;



__Test100::__Test100() : __vptr(&__vtable) {
}

__Test100_VT __Test100:: __vtable;

}
}
