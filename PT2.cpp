//Name: Ashley A. Avecilla
//Activity Name: Performance Task 2
//Description: Conversion Console App using functions [Dollar to Peso & Peso to Dollar] This is also a debugging activity
//Date: October 30, 2021

#include <iostream>
#include <iomanip>
#include <locale>

using namespace std;

//function for monetary formatting
struct group_facet: public numpunct<char> {
    protected:
        string do_grouping() const { return "\003"; }
};

// First function prototypes
 void promptAndWait(int& ans);

 /* Function takes two arguments: float and one unsigned int.
    The unsigned int has a default value of 1. Function returns no value. */
void dollarsToPeso(float conversionRate, unsigned int dollars = 1);
void pesoToDollars(float conversionrate, unsigned int peso = 1);

int main()
{
    // Declare the variables for the user input.
    float conversionRate  = 50.73; // $1 = 50.73 Pesos
    float conversionrate = 0.020; // 1 Philippine peso = 0.020 Dollars
    unsigned dollarsIn;
    unsigned peso;
    int ch, ans = 0;
    do{
        system("cls");
        cout << endl;
        cout << "-----------------------------" << endl;
        cout << "Dollar to Peso Conversion App" << endl;
        cout << "-----------------------------" << endl;
        cout << "[1] Dollar to Peso"            << endl;
        cout << "[2] Peso to Dollar"            << endl;
        cout << "[0] Exit the Conversion App"   << endl;
        cout << "Select Conversion : ";
        cin >> ch;

        switch(ch){
            case 1:{
                cout << "\n<< Convert Dollar to Peso >>" << endl;
                dollarsToPeso(conversionRate, dollarsIn = 1); //Show the exchange rate by calling the function.
                // Prompt the user and take US dollars input.
                cout << "Enter a US dollar amount (without the dollar sign, commas or a decimal): [####] ";
                cin >> dollarsIn;
                dollarsToPeso(conversionRate, dollarsIn); // Show the conversion by calling the function.
                promptAndWait(ans);  // Call the promtAndWait() function.
                break;
            }
            case 2:{
                cout << "\n<< Convert Peso to Dollar >>" << endl;
                pesoToDollars(conversionrate, peso = 1); //Show the exchange rate by calling the function.
                // Prompt the user and take Peso input.
                cout << "Enter a Peso amount (without the peso sign, commas or a decimal): [####] ";
                cin >> peso;
                pesoToDollars(conversionrate, peso); // Show the conversion by calling the function.
                promptAndWait(ans); // Call the promtAndWait() function.
                break;
            }
            case 0:{ 
                cout << "Conversion App Terminated \nThank you for using the app!";
                return 0;
            }
            default:{
                cout << "Invalid Input!";
                promptAndWait(ans);
            }
        }
    }while(ans == 1);
}
//End of main function

//Define the promptAndWAit() function.
void promptAndWait(int& ans){ 
    cin.ignore(100, '\n'); 
    cout << "Do you want to continue?" << endl;
    cout << "[1] YES" << endl;
    cout << "[2] NO" << endl;
    cin >> ans;
}
// Define the dollarsToPeso function.
void dollarsToPeso(float conversionRate, unsigned dollarsIn){ 
    // Adjust the formatting.
    cout.setf(ios::fixed);
    cout.precision(2);

    // Print the results.
    cout.imbue(locale(cout.getloc(), new group_facet)); 
    cout << "\n $" << dollarsIn << " USD = " << (conversionRate * dollarsIn) << " Pesos.\n";

}

// Define the pesoToDollars function.
void pesoToDollars(float conversionrate, unsigned peso){ 
    // Adjust the formatting.
    cout.setf(ios::fixed);
    cout.precision(2);

    // Print the results.
    cout.imbue(locale(cout.getloc(), new group_facet)); 
    cout << "\n P" << peso << " PHP = " << (conversionrate * peso) << " USD.\n";

}