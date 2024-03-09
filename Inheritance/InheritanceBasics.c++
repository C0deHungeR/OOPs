#include<iostream>
using namespace std ;
/*
Inheritance is one of the key features of Object-oriented programming in C++. It allows us to create a new class (derived class) from an existing class (base class).
The derived class inherits the features from the base class and can have additional features of its own. 
Inheritance allows us to define a class in terms of another class, which makes it easier to create and maintain an application. This also provides an opportunity to reuse the code functionality and fast implementation time.
*/

class Human{
    public :
    string name ;
    int age ;
    int height ;

    int getage(){
        return this ->age ;
    }
};

class Male : public Human{ // this is the syntax to inherit a class
    public :
    string color ;
};

int main(){
    Male obj1 ;
    obj1.height = 10 ; 
    // we can access height and age though it is not in male class this is due to inheritance
    obj1.age = 20 ;
    obj1.color = "RED" ;
    cout<<obj1.color<<endl;
    cout<<obj1.getage()<<endl;

    return 0 ;
}