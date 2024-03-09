#include<iostream>
using namespace std ;
/*
In single inheritance, one class can extend the functionality of another class. There is only one parent class and one child class in single inheritances.
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
    return 0 ;
}