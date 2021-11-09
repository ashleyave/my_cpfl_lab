//Name: Ashley A. Avecilla
//Activity Name: Midterm Hands-On Exam
//Description: Create a C++ program console conversion app
//Date: November 09, 2021

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

// First function prototypes
 void promptAndWait();

void mtokm(double m, double km);
void kmtom(double km, double m);
void cmtomm(double cm, double mm);
void FtoI(double F, double I);

int main()
{
    // Declare the variables for the user input.
    double m, km, cm, mm, F, I;
    int ch, ans = 0;

    do{
        system("cls");
        cout << endl;
        cout << "Length Conversion App       "   << endl;
        cout << "____________________________"   << endl;
        cout << "[1] meter to kilometer      "   << endl;
        cout << "[2] kilometer to meter      "   << endl;
        cout << "[3] centimeter to millimeter"   << endl;
        cout << "[4] foot to inch            "   << endl;
        cout << "[0] Exit"                       << endl;
        cout << "____________________________"   << endl;
        cout << "Select Conversion: ";
        cin >> ch;

        switch(ch){
            case 1:{
                cout << "\n<< Convert Meter to Kilometer >>" << endl;
                cout << "Meter: ";
                cin >> m;
                mtokm(m, km); 
                promptAndWait();  // Call the promptAndWait() function.
                break;
            }
            case 2:{
                cout << "\n<< Convert Kilometer to Meter >>" << endl;
                cout << "Kilometer: ";
                cin >> km;
                kmtom(km, m);
                promptAndWait();  // Call the promptAndWait() function.
                break;
            }
            case 3:{
                cout << "\n<< Convert Centimeter to Millimeter >>" << endl;
                cout << "Centimeter: ";
                cin >> cm;
                cmtomm(cm, mm);
                promptAndWait();  // Call the promptAndWait() function.
                break;
            }
            case 4:{
                cout << "\n<< Convert Foot to Inch >>" << endl;
                cout << "Foot: ";
                cin >> F;
                FtoI(F, I);
                promptAndWait();  // Call the promptAndWait() function.
                break;
            }
            case 0:{ 
                cout << "Conversion App Terminated \nThank you for using the app!";
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
    cin.ignore();
    cout << " \nPress Enter to continue...";
    cin.get();
}
// Define the mtokm function.
void mtokm(double m, double km){

    // Print the results.
    cout << m << " Meter = " << (m / 1000) << " Kilometer" << endl;

} 
// Define the kmtom function.
void kmtom(double km, double m){
   
    // Print the results.
    cout << km << " Kilometer = " << (km * 1000) << " Meter" << endl;

}
// Define the cmtomm function.
void cmtomm(double cm, double mm){

    // Print the results.
    cout << cm << " Centimeter = " << (cm * 10) << " Millimeter" << endl;

}
// Define the FtoI function.
void FtoI(double F, double I){
   
   // Print the results.
    cout << F << " Foot = " << (F * 12) << " Inch" << endl;

}