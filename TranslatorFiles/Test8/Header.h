#pragma once

#include <stdint.h>
#include <string>

namespace java {
namespace lang {
// Foward Declarations 

struct __A;

struct __A_VT;

typedef __A* A;

struct __A { 

    // The data layout for java.lang.plainClassName
      __A_VT* __vptr;

     String a;
__A();

    // The instance methods of java.lang.plainClassName

    // The Function returning the class Object representing java.lang.plainClassName 
    static Class __class(); 

    static __A_VT __vtable;

 };

struct __A_VT{
    Class __isa;
    int32_t (*hashCode)(A);
    bool (*equals)(A,Object);
    Class (*getClass)(A);
    String (*toString) (A);


    __A_VT()
    : __isa(__Object::__class()),
      hashCode((int32_t(*)(A))&__Object::hashCode),
      equals((bool(*)(A,Object)) &__Object::equals), 
      getClass((Class(*)(A)) &__Object::getClass), 
      toString((String(*)(A)) &__Object::toString){ 
    }
};



struct __B;

struct __B_VT;

typedef __B* B;

struct __B { 

    // The data layout for java.lang.plainClassName
      __B_VT* __vptr;

     String a;

     String b;
__B();

    // The instance methods of java.lang.plainClassName

    // The Function returning the class Object representing java.lang.plainClassName 
    static Class __class(); 

    static __B_VT __vtable;

 };

struct __B_VT{
    Class __isa;
    int32_t (*hashCode)(B);
    bool (*equals)(B,Object);
    Class (*getClass)(B);
    String (*toString) (B);


    __B_VT()
    : __isa(__Object::__class()),
      hashCode((int32_t(*)(B))&__Object::hashCode),
      equals((bool(*)(B,Object)) &__Object::equals), 
      getClass((Class(*)(B)) &__Object::getClass), 
      toString((String(*)(B)) &__Object::toString){ 
    }
};



struct __Test7;

struct __Test7_VT;

typedef __Test7* Test7;

struct __Test7 { 

    // The data layout for java.lang.plainClassName
      __Test7_VT* __vptr;


     // The Constructor

      __Test7(); 
    // The instance methods of java.lang.plainClassName

    // The Function returning the class Object representing java.lang.plainClassName 
    static Class __class(); 

    static __Test7_VT __vtable;

 };

struct __Test7_VT{
    Class __isa;
    int32_t (*hashCode)(Test7);
    bool (*equals)(Test7,Object);
    Class (*getClass)(Test7);
    String (*toString) (Test7);


    __Test7_VT()
    : __isa(__Object::__class()),
      hashCode((int32_t(*)(Test7))&__Object::hashCode),
      equals((bool(*)(Test7,Object)) &__Object::equals), 
      getClass((Class(*)(Test7)) &__Object::getClass), 
      toString((String(*)(Test7)) &__Object::toString){ 
    }
};



}
}
