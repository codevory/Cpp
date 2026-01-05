#include <iostream>
#include <fstream>
using namespace std;

// class myMethod {
//     public:
//   string carDetails(string a , string b){
//   return  a;
//   };
// };


// int main(){
//     myMethod myObj1;
//    string res =  myObj1.carDetails("BMW","Ferrari");
//     cout << res;
//     return 0;
// }

//Outside class method

// class myClass{
//     public:
//     string vowels(string a);

// };

// string myClass::vowels(string a){
//   return a;
// }

// int main(){
// myClass myObj;
// string res =  myObj.vowels("AEIOU");
// cout << "Vowels are " << res;
// }

//Create a class Dog with a method bark() that prints "Woof!".

// class myClass{
//     public:
//     string sound(string animalSound);
// };

//  string myClass::sound(string animalSound){
//     return animalSound;
//  }

//  int main(){
//    myClass dog,cat,cow;
//    string dogSound = dog.sound("Woof");
//    string catSound = cat.sound("Meow");
//    string cowSound = cow.sound("Boaah");
//    cout << "Dog sound : " << dogSound << " \n";
//    cout << "Cat sound : " << catSound << " \n";
//    cout << "Cow sound : " << cowSound << " \n";
//     return 0;
//  }

//Constructors

// class Car{
//     public:
//     string brand;
//     string modal;
//     int year;
//     Car(string x,string y,int z){
//         brand = x;
//         modal = y;
//         year = z;
//     }

// };

// int main(){
//     Car car1("BMW","x-series ",2024);
//     Car car2("Mercedes","D-7 series",2025);
//     cout << car1.brand << " " << car1.modal << " " << car1.year << " \n";
//     cout << car2.brand << " " << car2.modal << " " << car2.year ;
// return 0;
// }

//Constructor overloading

// class Car{
//     public:
//     string brand;
//     string modal;
//     int year;
//     Car(){
//         brand = "Maruti suzuki";
//         modal = "Alto k10";
//         year = 2019;
//     }

//     Car(string x,string y,int z){
//         brand = x;
//         modal = y;
//         year = z;
//     }

// };

// int main(){
//     Car car1;
//     Car car2("Hyundai","Breeza",2022);
//     Car car3("Mahindra","Thar",2021);
//      cout << "Car 1 is => " << "Brand : " << car1.brand << ", Name : " << car1.modal << ", Modal " << car1.year << " \n";
//     cout << "Car 2 is => " << "Brand : " << car2.brand << ", Name : " << car2.modal << ", Modal " << car2.year << " \n";
//     cout << "Car 3 is => " << "Brand : " << car3.brand << ", Name : " << car3.modal << ", Modal " << car3.year ;
//     return 0;
// }


//Encapsulation

// class Employee{
//     private:
//     int salary;

//     //setter
//     public:
//     void setSalary(int s){
//         salary = s;
//     }

//     //getter
//     int getSalary(){
//         return salary;
//     }
// };
// int main(){
//     Employee myObj;
//     myObj.setSalary(225000);
//     cout << "My salary is " << myObj.getSalary();
//     return 0;
// }

//Inheritence

// class Vehicle {
//  public:
//  string brand = "BMW";
//  int engine = 2114;
//  void honk(){
//     cout << "Car horn - " << "tuut tuut! \n";
//  }
// };

// class Car: public Vehicle{
// public:
// string model = "xz-series";
// };

// int main(){
//     Car myCar;
//     myCar.honk();
//     cout << "Car brand - " << myCar.brand << " \n" << "Car model - " << myCar.model << " \n" << "Car engine - " << myCar.engine << " Cc  " ;
//     return 0;
// }

// Multilevel inheritence

// class myClass {
// public:
// string name = "Shahijahan";
// };

// class Child:public myClass{
//     public:
//     int age = 19;
// };

// class grandChild:public Child{
//     public:
//     Child boy1;
//     void myFunc(){
//         cout << "Hey iam " << boy1.name << " , iam " << boy1.age << " years old";
//     }
// };

// int main(){
//     grandChild myBoy;
//     myBoy.myFunc();
//     return 0;
// }


// class Pr{
//     private:
//     string name = "Shahijahan";

//     public:
//     string getN(){
//         return name;
//     }
// };

// class Pub:public Pr{
//     public:
//     int age = 19;
// };

// int main(){
//     Pub obj1;
//     cout << obj1.getN() << " \n" << obj1.age;
// }

//Protected access specifier

// class Employee{
//     protected:
//     int salary;
// };

// class Know:public Employee{
//     public:
//     int bonus;
//     void setSalary(int s){
//         salary = s;
//     }

//    int getSalary(){
//         return salary;
//     }
// };

// int main(){
//     Know info;
//     info.setSalary(50000);
//     info.bonus = 20000;
//     cout << " salary is " << info.getSalary() << " \n";
//     cout << " Bonus is " << info.bonus;
//     return 0;
// }

// Polymorphism

// class Animal{
//     public:
//     void animalSound(){
//      cout << "Animals make sound \n";
//     }
// };

// class Cat:public Animal{
//     public:
//     void animalSound(){
//         cout << "Cat says : Meow Meow! \n";
//     }
// };
// class Dog:public Animal{
//     public:
//     void animalSound(){
//         cout << "Dog says : Boow Boow! \n";
//     }
// };

// int main(){
//     Animal myAnimal;
//     Cat myCat;
//     Dog myDog;

//      myAnimal.animalSound();
//      myCat.animalSound();
//      myDog.animalSound();
// }


//Virtual form

// class animal{
//     public:
//     virtual void sound(){
//     cout << "Animal makes sound \n";
//     }
// };

// class Dog:public animal{
// public:
// void sound() override {
//     cout << "Dog says : boow boow! \n";
// }
// };

// int main(){
//     animal* a;
//     Dog d;
//     a = &d;
//     a->sound();
// }

//Templates

// template <typename T>
// T add(T a, T b){
//     return a+b;
// };

// int main(){
//     cout << add<int>(3,5) << " \n";
//     cout << add<double>(2.99,3.15) << "\n";
//     cout << add<float>(2.99991,1.99991);
// }

// template <typename T>
// class Box{
//     public:
//     T value;
//    Box(T v){
//      value = v;
//     }

//     void show(){
//         cout << "Value : " << value << "\n";
//     }
// };

// int main(){
//     Box<int> intBox(50);
//     Box<string> strBox("Hey man iam from template");

//     intBox.show();
//     strBox.show();
// }

// int main(){
//     ofstream myFile("filename.txt");
//     myFile << "Files can be tricky but its fun enough";

//     myFile.close();

//     string myText;
//     ifstream readFile("filename.txt");
//     while(getline(readFile,myText)){
//         cout << myText;
//     }
//     readFile.close();
// }

//try catch errors

// int main(){

// try{
//     int age;
//     cout << "enter your age : ";
//     cin >> age;
//     if(age >= 18){
//         cout << "Access granted by system";
//     }
//     else{
//         throw(age);
//     }
// }
// catch(int myNum){
//     cout << "Access denied by system , you are too young to access our system  \n";
//     cout << "Your Age is " << myNum ;
// }
// return 0;
// }

//input validation