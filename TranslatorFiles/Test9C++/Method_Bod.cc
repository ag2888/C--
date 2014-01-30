#include "java_lang.h" 
#include "Header.h" 
#include <sstream> 
namespace java {
namespace lang {

__A::__A() : __vptr(&__vtable) { 
} 

__A_VT __A:: __vtable;


A  __A::init(A  __this){
    __this->self  = __this;
    return __this;
}



__Test9::__Test9() : __vptr(&__vtable) {
}

__Test9_VT __Test9:: __vtable;

}
}
