#include<iostream>
using namespace std ;

// hierarchical 
/*In hierarchical inheritance, one class is a base class for more than one derived class.*/

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
class c : public A {
    public :
    void fun3(){
        cout<<" class c called "<<endl;
    }
};
int main(){
    A obj1 ;
    obj1.fun1();
    cout<<endl;
    B obj2 ;
    obj2.fun1();
    obj2.fun2();
    cout<<endl ;
    c obj3 ;
    obj3.fun1();
    obj3.fun3();

}
