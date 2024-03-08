#include<iostream>
using namespace std ;
// destructors
// used to deallocate memory

/*
A destructor is a special member function that works just opposite to a constructor; unlike constructors that are used for initializing an object, destructors destroy (or delete) the object. The purpose of the destructor is to free the resources that the object may have acquired during its lifetime.
*/
class Hero{
    string name ;
    int age ;

    public :
    Hero(){
        cout<<"constructor is called  "<<endl;
    }
    ~Hero(){ // "~" sign is used befor class name to create a destructor 
        cout<<"Destructor is called "<<endl;
    }

};
int main(){
    // object created statically 
    Hero a ; // when object is created statically destructor is called automattically

    // object created dynamically
    Hero *b = new Hero() ; // in case of dynamic we need to delete memory manually
    delete b ;

}