#include<iostream>
using namespace std ;
// ambiguity 
class A {
    public:
    void fun(){
        cout<<"HI"<<endl;
    }
};
class B {
     public:
    void fun(){
        cout<<"Hello"<<endl;
    }
};
class C : public A , public B{
    public:
    void fun(){
        cout<<"Namaste"<<endl;
    }
};
int main(){
    C obj1 ;
    obj1.fun(); // function present in c will be called
    obj1.A ::fun(); // function present in A will be called
    obj1.B ::fun(); //function present in B will be called

    return 0 ;
}