#pragma once

#include <stdint.h>
#include <string>

namespace java {
namespace lang {
// Foward Declarations 

struct __A;

struct __A_VT;

typedef __rt::Ptr<__A> A;

struct __A { 

    // The data layout for java.lang.plainClassName
      __A_VT* __vptr;

     A self;

      __A();

    // The instance methods of java.lang.plainClassName

    // The Function returning the class Object representing java.lang.plainClassName 
    static Class __class(); 
    static A init(A);

    static __A_VT __vtable;

 };

struct __A_VT{
    Class __isa;
    void (*__delete)(__A*);
    int32_t (*hashCode)(A);
    bool (*equals)(A , Object);
    Class (*getClass)(A);
    String (*toString) (A);


    __A_VT()
    : __isa(__Object::__class()),
    __delete(&__rt::__delete<__A>),
      hashCode((int32_t(*)(A))&__Object::hashCode),
      equals((bool(*)(A , Object)) &__Object::equals), 
      getClass((Class(*)(A)) &__Object::getClass), 
      toString((String(*)(A)) &__Object::toString) { 
    }
};



struct __Test9;

struct __Test9_VT;

typedef __rt::Ptr<__Test9> Test9;

struct __Test9 { 

    // The data layout for java.lang.plainClassName
      __Test9_VT* __vptr;


     // The Constructor

          __Test9(); 
    // The instance methods of java.lang.plainClassName

    // The Function returning the class Object representing java.lang.plainClassName 
    static Class __class(); 
    static void init(  __Test9*  );

    static __Test9_VT __vtable;

 };

struct __Test9_VT{
    Class __isa;
    void (*__delete)(__Test9*);
    int32_t (*hashCode)(Test9);
    bool (*equals)(Test9 , Object);
    Class (*getClass)(Test9);
    String (*toString) (Test9);


    __Test9_VT()
    : __isa(__Object::__class()),
    __delete(&__rt::__delete<__Test9>),
      hashCode((int32_t(*)(Test9))&__Object::hashCode),
      equals((bool(*)(Test9 , Object)) &__Object::equals), 
      getClass((Class(*)(Test9)) &__Object::getClass), 
      toString((String(*)(Test9)) &__Object::toString) { 
    }
};



}
}
