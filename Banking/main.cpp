#include <iostream>
#include <fstream>
#include <string>


void registerUser(){
  std::string username,email,password;

  std::cout << "------User Register form------" << std::endl;
  std::cout<< "Enter your userName : ";
  std::cin >> username;
  std::cout<<"Enter your email Adress : ";
  std::cin >> email;
  std::cout<<"Enter your password : ";
  std::cin>>password;
  std::ofstream outFile("users.txt",std::ios::app);
  if(outFile.is_open()){
    outFile << username << " " << password << " "<< email << std::endl;
    outFile.close();
    std::cout << "Registration successfull" << '\n';
  }
  else{
std::cout<<"Error : unable to open outfile for registration " << std::endl;
  }
};

bool login(){
  std::string username,password;
  std::string fileUsername,filePassword;
   bool loggedIn = false;
  std::cout << "-----User login form-----" << std::endl;
  std::cout << "Enter your userName : ";
  std::cin >>username;
  std::cout<<"Enter your passWord : ";
  std::cin >> password;


  std::ifstream inFile("users.txt");
  if(inFile.is_open()){
    while(inFile >> fileUsername >> filePassword){
      if(username==fileUsername && password == filePassword){
     loggedIn = true;
     break;
      }
    }
    inFile.close();
  }
  else{
    std::cout << "Unable to open file for login " << '\n';
  }

  if(loggedIn){
    std::cout << "Login successfull, Welcome " << username << '!' << std::endl;
  }
  else{
        std::cout << "Incorrect login crediabtials, try again " << std::endl;

  }
  return loggedIn;
};

int main(){
  int choice;
  do{
    std::cout<<"------Main Menu------" << std::endl;
    std::cout<<"1 : Register " << std::endl;
    std::cout<<"2 : Login " << std::endl;
    std::cout <<"3 : Exit " << std::endl;
    std::cout<<"Enter your choice : ";
    std::cin>>choice;

    switch(choice){
      case 1:
      registerUser();
      break;
      case 2:
      login();
      break;
      case 3:
      std::cout << "Exiting program , Goodbye! "<< std::endl;
      break;
      default:
      std::cout << "Invalid choice, please try again " << std::endl;
    }
  }
  while(choice != 3);
  return 0;
}
