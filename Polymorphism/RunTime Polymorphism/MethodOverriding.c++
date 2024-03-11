#include<iostream>
using namespace std ;
// method overriding 
class A{
    public :
    void speak(){
        cout<<"speaking"<<endl;
    }
} ;
class B : public A{
    public:
    void speak(){
        cout<<"Barking"<<endl;
    }
};

int main(){
    B obj1 ;
    obj1.speak(); // function of class B will be invoked  -- this is method overriding

    return 0 ;
}