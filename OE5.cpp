//Name: Ashley A. Avecilla
//Activity Name: Outcomes Evaluation 5
//Description: void functions and functions with parameters implementations
//Date: November 02, 2021

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

// First function prototypes
 void promptAndWait();

void reverseString(string& reversedword);
void reverseInteger(int reversednum);

int main()
{
    // Declare the variables for the user input.
    string reversedword;
    unsigned reversednum;
    int ch, ans = 0;

    do{
        system("cls");
        cout << endl;
        cout << "[1] Reverse a String"         << endl;
        cout << "[2] Reverse Unsigned Integer" << endl;
        cout << "[3] Exit"                     << endl;
        cout << "Select Function: ";
        cin >> ch;

        switch(ch){
            case 1:{
                cout << "\n<< Reverse a String >>" << endl;
                // Prompt the user and take word input. 
                cout << "Enter a word: ";
                cin.ignore();
                getline(cin, reversedword);
                reverseString(reversedword); 
                promptAndWait();  // Call the promptAndWait() function.
                break;
            }
            case 2:{
                cout << "\n<< Reverse an unsigned integer >>" << endl; 
                // Prompt the user and take number input.
                cout << "Enter a number [0-9]: ";
                cin >> reversednum;
                cin.ignore();
                reverseInteger(reversednum); 
                promptAndWait(); // Call the promptAndWait() function.
                break;
            }
            case 3:{ 
                cout << "You exit the program \nThank you for using it!";
                return 0;
            }
            default:{
                cout << "Invalid Input!";
                promptAndWait();
            }
        }
    }while(ans == 0);
}
//End of main function

//Define the promptAndWAit() function.
void promptAndWait(){  
    cout << " \nPress Enter to continue...";
    cin.get();
}
// Define the reverseString function.
void reverseString(string& reversedword){ 

    int n = reversedword.length();
 
    // Swap character starting from two
    // corners
    for (int i = 0; i < n / 2; i++){
        swap(reversedword[i], reversedword[n - i - 1]);
    }

    // Print the results.
    cout << "\nReversed word: " << reversedword;
    
   
}

// Define the reverseInteger function.
void reverseInteger(int reversednum){
    int reverse=0, rem;      
    while(reversednum!=0)    
    {    
        rem=reversednum%10;      
        reverse=reverse*10+rem;    
        reversednum/=10;    
    }    

    // Print the results.
     cout << "\nReversed number: " << reverse;

}