#include<iostream>
using namespace std ;
// multiple Inheritance 
class Human{
    public :
    string Gender ;
    int age ;

    void speak(){
        cout<<"Speaking"<<endl ;
    }
};

class Animal{
    public :
    string type ;
    string color ;
    void bark(){
        cout<<"Barking"<<endl;
    }
};

class hybrid : public Human , public Animal{
    public :
    int dob ;

};

int main(){

    hybrid h1 ;
    h1.age = 10 ;
    h1.color = "black";
    h1.speak(); // function of class human
    h1.bark(); // function of class animal 

    return 0 ;
}
