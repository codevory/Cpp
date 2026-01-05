#include <iostream>
#include <string>
using namespace std;


// void reverseNum(int num){
//     int rev = 0;
//     int i1,i22,i3;
// for(int i=1;i>0;i--){
//     //got last digit 5
//      i1 = num % 10;
//     //separted 12
//     int i2 = num / 10;
//     //left 12
//      i22 = i2 % 10;
//     // got ^ 2
//     //separated 1;
//      i3 = num % i22;
// }
//  cout << i1 << i22 << i3;

// }


//reverse the number line 
void reverse(int num){
int rev = 0;
while(num > 0){
    //Get last one digit 
int digit = num % 10;
//separates digits except last one that has been drived 
num = num / 10;
//now adding numbers one by one 0 * 10 + last extracted digit
rev = rev * 10 + digit;
}
cout << rev;
}

//counts number of digits in a number line
int count(int num){
    int count = 0;
    while(num > 0){
        int digit = num % 10;
        num = num / 10;
        count++;
    }
    return count;
}

//sum of all digits
int sum(int num){
    int sum = 0;
while(num >0){
    int digit = num % 10;
    num = num / 10;
    sum += digit;
}
    return sum;
}

//Checks if numbers are palindrome
string palindrome(int num){
    bool status;
      string result; 
    int orig = num;
    int duplicate = 0;
    while(num > 0){
int digit = num % 10;
num = num / 10;
duplicate = duplicate * 10 + digit;
    }
    if(duplicate == orig){
status = true;
    }
    else{
        status = false;
    }
  if(status == 1){
    result = "True";
  }
  else{
    result = "False";
  }
    return result;
}


//Gives largest number of numbers
int largest(int num){
int last,large = 0;
while(num > 0){
    int digit = num % 10;
    num = num / 10;
last = 0 * 10 + digit;
if(last > large){
    large = last;
}
else{
    large = large;
}
}
return large;
}

//Reverse even digits only
void evenReverse(int num){
    int newRev=0,reversed=0,odds=0,evens = 0 ;
    //sort even numbers 
    while(num > 0){
int digits = num % 10;
num = num / 10;
if(digits % 2 == 0){
    evens = evens * 10 + digits;
}
else if(digits % 2 != 0){
odds = odds * 10 + digits;
} }

    cout << "Evens : " <<  evens << '\n';
    cout << "Odds : " << odds << '\n';
    //reverse even numbers now 
    while(evens > 0){
int digit = evens % 10;
evens = evens / 10;
reversed = reversed * 10 + digit;
    }

cout << "Old Reversed evens : " << reversed << endl;

    while(reversed > 0){
        int digits = reversed % 10;
        reversed = reversed / 10;
     newRev = newRev * 10 + digits;
    }
    cout << "New Reversed evens : " << newRev;

}



//print number in words
string digitToWord(int num){
int rev=0;
string newRev;
while(num > 0){
    int digits = num % 10;
    num = num / 10;
rev = rev * 10 + digits;
}

//now speak
int demo = 0;
while(rev > 0){
    int digit = rev % 10;
    rev = rev / 10;
    demo = demo * 10 + digit;
    if(digit==0){
newRev = newRev +  "Zero " ;
    }
    if(digit == 1)
    newRev = newRev + "One ";
    else if(digit == 2)
    newRev = newRev + "Two ";
    else if(digit == 3)
    newRev = newRev + "Three ";
   else if(digit == 4)
    newRev = newRev + "Four ";
   else if(digit == 5)
    newRev = newRev + "Five ";
   else if(digit == 6)
    newRev = newRev + "Six ";
   else if(digit == 7)
    newRev = newRev + "Seven ";
   else if(digit == 8)
    newRev = newRev + "Eight ";
   else if(digit == 9)
    newRev = newRev + "Nine ";
}
cout << demo << endl;

return newRev;
}
//Arrays

int marks[] = {29,33,38,31,89,27,100,93,53};
int smallest(){
    int smallest = INT_MAX;
    for(int i=0;i<sizeof(marks)/sizeof(marks[0]);i++){
// if(marks[i] < smallest){
//     smallest = marks[i];
// }
// else{
//     smallest = smallest;
// }
smallest = min(marks[i],smallest);
    }
    return smallest;
}

//change array
void changeArr(int arr[],int size){
    cout << " in function\n";
    for(int i=0;i<size;i++){
        arr[i] = 2*arr[i];
    }
}
// int main(){
// int arr[] = {1,2,3,4,5};
// changeArr(arr,3);
// cout << "in main \n";
// for(int i=0;i<3;i++){
//     cout << arr[i] << " ";
// }
//     return 0;
// }

//Linear search
int arr1[] = {1,2,3,5,7,9,15,17,19,21};
int target = 105;
string status;
int search(int arr[],int size){
for(int i=0;i<size;i++){
    if(arr1[i] == target){
      return  status =  "Target found at index : " , i;
    }
}
return -1;
}

//change original array
int arr2[] = {1,2,3,4,5,6,7,8,9,10,11};
void changeArr2(int arr[],int size){
    int start = 0;
    int end = size -1;
    while(start < end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}


int main(){
changeArr2(arr2,11);
cout << "After change \n";
for(int i=0;i<11;i++){
    cout << arr2[i] << " ";
}
    return 0;
}