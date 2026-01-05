#include <iostream>
#include <fstream>
using namespace std;


class temp{
    string id,name,author,search;
    fstream file;
    public:
    void addBook();
    void showAll();
    void extractBook();

}obj;


int main(){
    char choice;
    cout << "-------Library Management system-------" << endl;
    cout << "1 : Show all Books " << endl;
    cout << "2 : Extract a book " << endl;
    cout << "3 : Add a book(Admin) " << endl;
    cout << "4 : Exit operation " << endl;
    cout << "------------------------------ " << endl;
    cout << "Select your choice :: ";
    cin >> choice;

    switch (choice)
    {
   case '1':
   cin.ignore();
   obj.showAll();
   break;

   case '2':
   cin.ignore();
   obj.extractBook();
   break;

   case '3':
   cin.ignore();
   obj.addBook();
   break;

   case '4':
   return 0 ;
   break;
    
    default:
    cout << "Invalid input , try again " ;
        break;
    }
    return 0;

}


void temp::addBook(){
    cout << "\nEnter Book ID :: ";
    getline(cin,id);
    cout << "\nEnter Book Name :: ";
    getline(cin,name);
    cout << "\nEnter Author's Name :: ";
    getline(cin,author);
    file.open("bookData.txt",ios::out | ios::app);
    file << id << "*" << name << "*" << author << endl;
    file.close();
}



void temp::showAll(){
    file.open("bookData.txt",ios::in);
    getline(file,id,'*');
    getline(file,name,'*');
    getline(file,author,'\n');
    cout << "\n\n";
    cout << "\t\t Book ID \t\t\t Book Name \t\t\t Book's Author" << endl; 


    while(!file.eof()){
    cout << "\t\t" << id << "\t\t\t" << name << "\t\t\t" << author << endl;
    getline(file,id,'*');
    getline(file,name,'*');
    getline(file,author,'\n');
    }
    file.close();
}



void temp::extractBook(){
    showAll();
    cout << "Enter Book ID :: ";
    getline(cin,search);
    file.open("bookData.txt",ios::in);
    getline(file,id,'*');
    getline(file,name,'*');
    getline(file,author,'\n');
    cout << "\n\n";
    cout << "\t\t Book ID  \t\t\t Book Name \t\t\t Book Author" << endl;
    while(!file.eof()){
        if(search == id){
 cout <<"\t\t " << id << "\t\t\t " << name << "\t\t\t" << author << endl;
  cout << "Book displayed Successfully " << endl;
        }
         getline(file,id,'*');
    getline(file,name,'*');
    getline(file,author,'\n');
    }
               file.close();
}
