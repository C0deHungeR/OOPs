#include<iostream>
using namespace std ;
/*When a class inherits from a derived class, and the derived class becomes the base class of the new class, it is called multilevel inheritance. In multilevel inheritance, there is more than one level.
*/
class Animal{
    public :

    string name ;
    int age ;

    string getname(){
        return this->name;
    }

};
class dog : public Animal{

    public :
    string color ;

    void setcolor(string color){
        this->color = color ;
    }
    string getcolor(){
        return this->color ;
    }

};
class Germanshefered : public dog{ // this is multilevel inheritance

    public :
    void speak(){
        cout<<"Speaking"<<endl;
    }

};
int main(){
    Germanshefered d1 ;
    d1.name = "German Shefered"; // datamember of animal class
    cout<<d1.name<<endl;
    d1.setcolor("Black") ; // function of dog class 
    d1.getcolor();
    d1.speak(); // function of germensheferd class 
}