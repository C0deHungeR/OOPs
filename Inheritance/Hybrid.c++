#include<iostream>
using namespace std ;
// Hybrid Inheritance 
/*
Hybrid inheritance is a combination of more than one type of inheritance. For example, A child and parent class relationship that follows multiple and hierarchical inheritances can be called hybrid inheritance.
*/
class A{
    public:
    void fun1(){
        cout<<" class A called "<<endl;
    }

};
class B : public A {
    public:
    void fun2(){
        cout<<" class B called "<<endl;
    }
};
class D {
    public :
    void fun4(){
        cout<<"function 4 called"<<endl;
    }
};
class c : public A ,public D{
    public :
    void fun3(){
        cout<<" class c called "<<endl;
    }
};
