#pragma once

#include <stdint.h>
#include <string>

namespace java {
namespace lang {
// Foward Declarations 

struct __NewYorkUniversity;

struct __NewYorkUniversity_VT;

typedef __rt::Ptr<__NewYorkUniversity> NewYorkUniversity;

struct __NewYorkUniversity { 

    // The data layout for java.lang.plainClassName
      __NewYorkUniversity_VT* __vptr;


     // The Constructor

          __NewYorkUniversity(); 
    // The instance methods of java.lang.plainClassName
    static void classes( NewYorkUniversity);

    // The Function returning the class Object representing java.lang.plainClassName 
    static Class __class(); 
    static void init(  __NewYorkUniversity*  );

    static __NewYorkUniversity_VT __vtable;

 };

struct __NewYorkUniversity_VT{
    Class __isa;
    void (*__delete)(__NewYorkUniversity*);
    int32_t (*hashCode)(NewYorkUniversity);
    bool (*equals)(NewYorkUniversity , Object);
    Class (*getClass)(NewYorkUniversity);
    String (*toString) (NewYorkUniversity);

    void (*classes) (NewYorkUniversity);


    __NewYorkUniversity_VT()
    : __isa(__Object::__class()),
    __delete(&__rt::__delete<__NewYorkUniversity>),
      hashCode((int32_t(*)(NewYorkUniversity))&__Object::hashCode),
      equals((bool(*)(NewYorkUniversity , Object)) &__Object::equals), 
      getClass((Class(*)(NewYorkUniversity)) &__Object::getClass), 
      toString((String(*)(NewYorkUniversity)) &__Object::toString), 

      classes(&__NewYorkUniversity::classes) {
    }
};



struct __Courant;

struct __Courant_VT;

typedef __rt::Ptr<__Courant> Courant;

struct __Courant { 

    // The data layout for java.lang.plainClassName
      __Courant_VT* __vptr;


     // The Constructor

          __Courant(); 
    // The instance methods of java.lang.plainClassName
    static void classes( Courant);

    // The Function returning the class Object representing java.lang.plainClassName 
    static Class __class(); 
    static Courant init(  Courant  );

    static __Courant_VT __vtable;

 };

struct __Courant_VT{
    Class __isa;
    void (*__delete)(__Courant*);
    int32_t (*hashCode)(Courant);
    bool (*equals)(Courant , Object);
    Class (*getClass)(Courant);
    String (*toString) (Courant);

    void (*classes) (Courant);


    __Courant_VT()
    : __isa(__Object::__class()),
    __delete(&__rt::__delete<__Courant>),
      hashCode((int32_t(*)(Courant))&__Object::hashCode),
      equals((bool(*)(Courant , Object)) &__Object::equals), 
      getClass((Class(*)(Courant)) &__Object::getClass), 
      toString((String(*)(Courant)) &__Object::toString), 

      classes(&__Courant::classes) {
    }
};



struct __Test100;

struct __Test100_VT;

typedef __rt::Ptr<__Test100> Test100;

struct __Test100 { 

    // The data layout for java.lang.plainClassName
      __Test100_VT* __vptr;


     // The Constructor

          __Test100(); 
    // The instance methods of java.lang.plainClassName

    // The Function returning the class Object representing java.lang.plainClassName 
    static Class __class(); 
    static void init(  __Test100*  );

    static __Test100_VT __vtable;

 };

struct __Test100_VT{
    Class __isa;
    void (*__delete)(__Test100*);
    int32_t (*hashCode)(Test100);
    bool (*equals)(Test100 , Object);
    Class (*getClass)(Test100);
    String (*toString) (Test100);


    __Test100_VT()
    : __isa(__Object::__class()),
    __delete(&__rt::__delete<__Test100>),
      hashCode((int32_t(*)(Test100))&__Object::hashCode),
      equals((bool(*)(Test100 , Object)) &__Object::equals), 
      getClass((Class(*)(Test100)) &__Object::getClass), 
      toString((String(*)(Test100)) &__Object::toString) { 
    }
};



}
}
