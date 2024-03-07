#include<iostream>
using namespace std ;
/* 
what is class ?
--> A class is a logical entity used to define a new data type. A class is a user-defined type that describes what a particular kind of object will look like. Thus, a class is a template or blueprint for an object. A class contains variables, methods, and constructors.
*/
class Hero{ // class named Hero .
    
    string Name ; // Data members or Attributes
    int age ;
};
int main(){

    Hero h1 ; //object h1 of class hero is created
    /*
    what is object ?
    -->An object is an instance of a Class. It is an identifiable entity with some characteristics and behavior. Objects are the basic units of object-oriented programming.  It may be any real-world object like a person, chair, table, pen, animal, car, etc.
    */

   // dynamically
   Hero *h2 = new Hero();

    return 0 ;
}