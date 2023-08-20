// this comes under compile time polymorphism

#include<iostream>
using namespace std;

class A{
    
    public:
        int a;
        int b;

    public:
        int add(){
            return a + b;
        }

    void operator + (A &obj){
        int value1 = this -> a;
        int value2 = obj.a;
        cout << "Output is : " << value2 - value1 << endl;
    }

    // another example
    void operator() (){
        cout << "Hello" << this -> a <<  endl;
    }
};

int main()
{
    A obj1, obj2;
    
    obj1.a = 6;
    obj2.a = 7;

    obj1 + obj2;

    obj1();
    return 0;
}