//Name: Ashley A. Avecilla
//Activity Name: Performance Task #1
//Description: write a real, interactive, odd/even number scheme. Logically the program will tell 
//if the number is odd or even number for a series of int inputs. 
//Date: October 13, 2021

#include <iostream>

using namespace std;

int main(){

    int range, c_num;

    cout << "Enter range of numbers : ";
    cin >> range;
    cout << "Enter " << range << " consecutive numbers : "; // it must be smallest to largest number
    cin >> c_num;
    
    if (c_num % 2 == 0){  //  modulo arithmetic operation to get the odd/even scheme
        cout << c_num << " - Even number " << endl; //true statement
    }
    else{
        cout << c_num << " - Odd number " << endl; //false statement
    }
      
    while (c_num <= range){ // true if c_num is less than or equal to range
        cin >> c_num;

        if (c_num % 2 == 0){
        cout << c_num << " - Even number " << endl; 
        }
        else{
        cout << c_num << " - Odd number "  << endl;
        }
    }
    
    return 0;
}