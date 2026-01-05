#include <iostream>
using namespace std;

//C++ Class
//Create a class 
// class myClass {
//     public:
//      int age;
//      string name;
// };

//Create a class named Car;
// class Car {
//     public:
//     string model;
//     int year;
// };

//C++ methods
// class myClass {
//     public:
//     //inside class method
//     void myMethod(){
//         cout << "Hey dude , from method" << endl;
//     }
// };

class myClass {
    public:
    void myMethod();
};

void myClass::myMethod(){
    cout << "iam from outside method " << '\n';
};

class sound {
public:
void bark(string sound);
void meow(string sound);
};

void sound::bark(string sound){
    cout << "Dog barks as : " << sound << endl;
}

void sound::meow(string sound){
    cout << "Cat sounds as : " << sound << endl;
}



int main(){
sound cmd;
cmd.bark("Woof! Woof!");
cmd.meow("Meow Meow");

    return 0;
}