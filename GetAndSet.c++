#include<iostream>
using namespace std ;

class Hero{

    // this members are private by default
    int Networth ;
    int ID ;

    public :
    // this members are public
    string Name ;
    int age ;

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
    Hero h1 ;
    h1.Name = "Nachiket Tonge" ; // name and age can be dirctly accesed outside the class because it is public
    h1.age = 20 ;

    h1.setNetworth(1000000);
    h1.setID(123);

    cout<<"Name is : "<<h1.Name<<endl;
    cout<<"Age is : "<<h1.age<<endl;

    // this is how a private member is accessed outside the class
    cout<<"Networth is : "<<h1.getNetworth()<<endl ;
    cout<<"ID is : "<<h1.getId()<<endl ;

}