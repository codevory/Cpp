#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <stack>
#include <map>
using namespace std;

// int main(){
//     stack<string> cars;
//    cars.push("Tesla");
//     cars.push("BMW");
//     if(cars.empty() == 1){
//         cout << "Cars string is empty " << '\n';
//     }
//     else{
//     cout << "Cars string is filled " << '\n';
//     };
//     cout << cars.top() ;
// }

//map 
// int main(){
//     map<string , int> people = {{"John",24},{"Rabia",17},{"Shahijahan",19}};

//     people["Danish"] = 15;
//     people.insert({"Saddam",27});

//     cout << "Rabia is " << people["Rabia"] << " yrs old " << endl;
//     cout << "Shahijahan is " << people["Shahijahan"] <<" yrs old " << endl;
//     cout << "Danish is " << people["Danish"] << " yrs old " << endl;
//     cout << "John is " << people["John"] << " yrs old " << endl;
//     cout << "Saddam is " << people["Saddam"] << " yrs old " << endl;

//     for(auto person : people){
//         cout << person.first << " is : " << person.second << " years old " << endl;
//     }

// }

//iterator modifer amazing concept
// int main(){
//     vector<string> cars = {"BMW","TESLA","Toyota"};
//     vector<string>::iterator i;
//     for(i=cars.begin(); i !=cars.end(); ++i){
//         if(*i == "BMW"){
//             *i = "Maruti Suzuki";
//         }
//       cout << *i << '\n';
//     }
// }

//iterate reverse 
// int main (){
//     vector<string> cars = {"Tesla","BMW","Maruti"};
//     for(auto i = cars.rbegin(); i !=cars.rend(); ++i){
//         cout << *i << endl;
//     }
// }
//
//Algorithim


// int main(){
// vector<string> cars = {"BMW","Maruti ","Tata Nano", "Tesla","Toyota"};
// sort(cars.rbegin(),cars.rend());

// for(string car : cars){
//     cout << car << endl;
// }
// }

//searching 

int main(){
    vector<int> numb = {1,3,2,4,6,8,11,4,0,5};
    auto i = find(numb.begin(),numb.end(),0);
  
    if(i !=numb.end()){
        cout << "Number " <<*i <<" was found \n";
    }
    else{
        cout << "Number " << *i << " was not found";
    }

}