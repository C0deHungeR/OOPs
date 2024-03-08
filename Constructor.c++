#include<iostream>
using namespace std ;
//constructor
/*
A constructor is a special member function automatically called when an object is created. In C++, the constructor is automatically called when an object is created. It is a special class method because it does not have any return type. It has the same name as the class itself.

A constructor initializes the class data members with garbage value if we don’t put any value to it explicitly.

 The constructor must be placed in the public section of the class because we want the class to be instantiated anywhere. For every object in its lifetime constructor is called only once at the time of creation.
 */

class Hero{

    // this members are private by default
    int Networth ;
    int ID ;

    public :

    Hero(){ //  default constructor is created 
            // after creating a default constructor inbuild constructor made by compiler get vanished
        cout<<" Default Constructor is called"<<endl;
        cout<<endl;
        cout<<"----------------------------------------------------------------------"<<endl;
    }

    // this members are public
    string Name ;
    int age ;
     //parameterised constructor
    Hero(string Name,int age){
        cout<<" Parameterised constructor is called :"<<endl;
        cout<<"this --> "<<this<<endl; // Address of Ramesh will be printed 
        cout<<endl;
        cout<<"----------------------------------------------------------------------"<<endl;
       this -> Name = Name ; // this refers to the data member of class here .
       this -> age = age ;
    }

    // copy constructor
    Hero(Hero &temp){
        cout<<"Copy constructor is called "<<endl ;
        cout<<endl;
        cout<<"----------------------------------------------------------------------"<<endl;
        this -> Name = temp.Name ;
        this -> age = temp.age ;
    }


    //mehtod to access private members outside the class
    void setNetworth(int n){
        Networth = n ;
    }

    void setID(int id){
        ID = id ;
    }
    int getNetworth(){

        return Networth ;
    }

    int getId(){

        return ID ;
    }
};
int main(){
    Hero Srk ; // default constructor will be called

    //parameterised constructor will be called
    Hero Ramesh("Nachiket",20) ; // object named Ramesh of Hero is created
                           //when theobject is created constructor is called automatically 
    cout<<"Address of Ramesh is : "<<&Ramesh<<endl;

    //copy constructor is generated and called automatically .
    Hero Suresh(Ramesh) ; // data of ramesh will be copied to data of suresh 

    cout<<"Name is : "<<Suresh.Name<<endl;
    cout<<"Age is : "<<Suresh.age<<endl;


    return 0 ;

}