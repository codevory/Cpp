#include <iostream>
#include <string>
using namespace std;

// int main(){
// char ch;
// cout << "Enter a character :: ";
// cin >> ch;
// if(ch >= 'a' && ch <= 'z'){
//     cout << "Its lower case\n ";
// }
// else{
//     cout << "Its upper case\n ";
// }
// int n = 18.1;
// cout << (n >= 18 ?  "You are eligible to vote " : "You are a kid yet ");
//     int sum=0,i=0;
//     while(i <= 15){
//         sum += i;
//         if(i == 2){
//             break;
//         }
//         i++;
//     }
//     cout << sum << endl;
// return 0;
// }
//     int sum=0,i=1;
// int sumOdd(int n){
//     while(i<=n){
//         if(i % 2 != 0){
//        cout <<"i = " << i << '\n';
//        sum += i;
//         }
//         i++;
//     }
//     return sum;
// };
// bool isPrime = true;
// int primeNum(int N){
// for(int i=2;i*i <=N;i++){
// if(N % i == 0){
//     isPrime = false;
//     break;
// }
// i++;
// }
// if(isPrime){
//     cout << N << " is a prime Number\n ";
// }
// else{
//     cout << N << " is not a prime Number\n";
// }
// return isPrime;
// }

// void printStar(){
//    for(int i=1;i<6;i++){
//   char ch = 'A';
//   for(int j=0;j<i;j++){
//     cout << ch;
//     ch = ch + 1;
//   }
//   cout << endl;
//    };
// };

// void pSum(){
//     int a = 1;
// for(int i=0;i<3;i++){
//     for(int j=0;j<3;j++){
//         cout << a << " ";
//         a++;
//     }
//     cout << '\n';
// }}

// void chara(){
//     char a = 'A';
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cout << a << " ";
//             a++;
//         }
//         cout << endl;
//     }
// }

void star(){
    int n = 10;
    for(int i=0;i<n;i++){
        for(int j=0;j<i+2;j++){
            cout << "*";
        }
        cout << endl;
    }
}

void printNum(){
    for(int i=0;i<4;i++){
        for(int j=0;j<i+1;j++){
            cout << i + 1;
        }
        cout << endl;
    }
}

void print(){
    for(int i=0;i<4;i++){
        for (int j=1;j<i+2;j++){
            cout << j ;
        }
        cout << endl;
    }
}
void printRev(){
    for(int i=0;i<=4;i++){
        for(int j=i+1;j>0;j--){
            cout << j << " ";
        }
        cout << endl;
    }
}

void floyd(){
    int num = 1;
for(int i=0;i<4;i++){
    for(int j=i+1;j>0;j--){
        cout << num <<" ";
        num++;
    }
    cout << endl;
}
};

void triangleA(){
    char ch = 'A';
    for(int i=0;i<4;i++){
     for(int j=i+1;j>0;j--){
        cout << ch << " ";
        ch++;
     }
     cout << endl;
    }
}
 
// void invert(){
//     int a = 1;
//     char b = ' ';
// for(int i=1;i<=4;i++){
//     for(int j=4;j>i-1;j--){
//         cout << a << " "; 
//     }

//     a++;
//     cout << b << endl;
//     b++;
// }
// }

void invert(){
    int n=4,num=1;
    for(int i=0;i<n;i++){
        //spaces
        for(int j=0;j<i;j++){
            cout << "T" << " ";
        }
        //for numbers
        for(int j=0;j<(n-1);j++){
            cout << (i+1) << " ";
        }
        cout << endl;
    }
}

void pyramid(){
    int n=5;
for(int  i=0;i<n;i++){
    for(int j=0;j<n-i-1;j++){
   cout << ' ';
    }
    for(int k=1;k<=i+1;k++){
        cout << k;
    }
    for(int j=1;j>=1;j--){
        cout << j ;
    }
    cout << endl;
}
}

int sumdigit(int num){
    int sum=0;
   while(num>0){
    int lastD = num%10;
    num = num / 10;
    sum += lastD;
   }
   cout << sum << endl;
   return sum;

}

int fact(int n){
int factor = 1;
for(int i=1;i<=n;i++){
    factor *= i;
}
return factor;
}

int main(){
    int n = 8;
    int r = 6;
    // cout << (n | r);
    cout << sizeof(int) << endl;
    cout << sizeof(short int);
    return 0;
}