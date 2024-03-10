#include<iostream>
using namespace std ;
// operator overloading
/*
C++ also provides options to overload operators. For example, we can make the operator (‘+’) for the string class to concatenate two strings. We know that this is the addition operator whose task is to add two operands. When placed between integer operands, a single operator, ‘+,’ adds them and concatenates them when placed between string operands.*/

class A{
    public:
    int a ;
    int b ;

    int add(){
        return a+b ;
    }

    void operator+(A &obj){
        int value1 = this->a ;
        int value2 =  obj.a;
        cout<<"addition  is :"<< value1 + value2 <<endl;
    }
};
int main(){
    A obj1 ,obj2;
    obj1.a = 4 ;
    obj2.a = 10 ;
    obj1 + obj2 ;
    return 0 ;
}