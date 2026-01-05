#include <iostream>
#include <fstream>
#include <string>
#include <random>
#include <filesystem>


std::ofstream accountFile("account.txt",std::ios::app);
std::string createAcc(){
    std::string accountNum = {"025104010000"};
    std::random_device rd;
    std::mt19937 gen(rd());

    std::uniform_int_distribution<> distrib(0,4);
    for(int i=0;i<4;i++){
        accountNum += std::to_string(distrib(gen));
    }
    if(accountFile.is_open()){
    accountFile << accountNum << " " << std::endl;
    accountFile.close();
    }
    return accountNum;
}



bool deleteFile()
{
    std::string filename = "account.txt";
    try
    {
        if (std::filesystem::remove(filename))
        {
            std::cout << "File " << filename << " deleted successfully ";
        }
        else
        {
            std::cerr << "Unable to delete " << filename << " or not found";
        }
    }
    catch (const std::filesystem::filesystem_error &err)
    {
        std::cerr << "Filesystem error " << err.what() << std::endl;
    }
    return 0;
};





class userAcc{
public:
// Account creation
void CreateAccount(){
    
    std::string fullName,country;
    std::string age;

    int balance = 0;
     std::string accountNum = {"025104010000"};
    std::random_device rd;
    std::mt19937 gen(rd());

    std::uniform_int_distribution<> distrib(0,4);
    for(int i=0;i<4;i++){
        accountNum += std::to_string(distrib(gen));
    }
//    std::ifstream myFile("account.txt");
//    if(myFile.is_open()){
//     myFile >> accNum;
//     myFile.close();
//    }
//    else{
//     std::cout<<"Failed to process";
//    }
    
   std::cout << "Enter your Name : " ;
   std::getline(std::cin,fullName);
   std::cout<<"Enter your country Name : ";
   std::getline(std::cin,country);
   std::cout<<"Enter your age : ";
   std::getline(std::cin,age);


 std::ofstream userDetails("details.txt",std::ios::app);
 if(userDetails.is_open()){
    userDetails << accountNum << " " << balance << " " << fullName << " " << age << " " << country << std::endl;
    userDetails.close();
 }
 else{
    std::cout<<"Failed to store data in " << std::endl;
 }
   
}


    
int deposit(){
    int amount,balance;
    std::cout << "Enter amount to add : ";
    std::cin >> amount;
    if(amount){
        balance += amount;
    }
    return balance;
}

};



int main(){
    userAcc user;
    user.CreateAccount();
    user.deposit();
    return 0 ;
}