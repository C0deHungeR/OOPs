#include<iostream>
using namespace std ;

/*
Access Specifier:-

Access Specifiers in a class are used to assign access to the class members. It sets some restrictions on the class members from accessing the outside functions directly. Access specifiers have a vital role in securing data from unauthorized access.

It allows us to determine which class members are accessible to other classes and functions and which are not.

There are three types of access modifiers available in C++: 

Public

Private

Protected
*/

class Hero{ // class named Hero .

    // by default access modifire is private

    public :
    //All the class members with a public modifier can be accessed from anywhere(inside and outside the class).
    string Name ; // Data members or Attributes
    int age ;

    private : 
    int Id ;
    //All the class members with a private modifier can only be accessed by the member function inside the class.
    void print(){
        cout<<Id; // can only be accessed inside the class
    }
    
};
int main(){

    Hero h1 ; //object h1 of class hero is created
    cin>>h1.Name; // " . " operator is used to access data members .
    cin>>h1.age;

    cout<<"Name is : "<<h1.Name<<endl;
    cout<<"Age is : "<<h1.age<<endl;

    
    return 0 ;
}