#include<iostream>
using namespace std ;
// function overloading 
class A {
    public:
    void sayhello(){
        cout<<"Hello 1 "<<endl;
    }
    void sayhello(string name){ // function name is same but 1 has argument and other donot .
        cout<<"hello 2 "<<endl;
    };
};

int main(){
    A obj1 ;
    obj1.sayhello(); // function without parameters is called 
    obj1.sayhello("nachiket"); // function having parameter will be called 
    return 0 ;
}