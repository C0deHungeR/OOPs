#include<iostream>
using namespace std ;
//Encapsulation
/*
Encapsulation refers to bundling data and the methods that operate on that data into a single unit. Many programming languages use encapsulation frequently in the form of classes. A class is an example of encapsulation in computer science in that it consists of data and methods that have been bundled into a single unit.
Encapsulation may also refer to a mechanism of restricting the direct access to some components of an object, such that users cannot access state values for all of the variables of a particular object. Encapsulation can be used to hide both data members and data functions or methods associated with an instantiated class or object.
*/
class student{
    string Name ;
    int ROll ;
    int age ;

    public:
    void setname(string Name){
        this->Name =Name ;
    }
    string getname(){
        return this -> Name ; 
    }
};
int main(){

    student s1 ;
    s1.setname("Nachiket");
    cout<<s1.getname()<<endl;
    return 0 ;

}
