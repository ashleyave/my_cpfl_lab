//Name: Ashley A. Avecilla
//Activity Name: OE3
//Description: Application of Branching with Conditional Statement
//Date: September 23, 2021

#include <iostream>
#include <string>

using namespace std;

int main(){

    string e_name, e_ID;
    int num_hours_work, tax_rate;
    double rate_per_hour, gross_pay, tax_D, net_pay;
    
    cout << "Enter Employee ID            : "; 
    getline (cin, e_ID);
    cout << "Enter Employee Name          : ";
    getline (cin, e_name);
    cout << "Enter Number of hours worked : ";
    cin >> num_hours_work;
    cout << "Enter Rate per hour          : ";
    cin >> rate_per_hour;

    gross_pay = rate_per_hour * num_hours_work; // Salary is computed based on hours worked and rate per hour 

    if (num_hours_work == 0 || rate_per_hour == 0){
        cout << "You did not put anything!";
    }
    else if (gross_pay > 40000){  // Salary range is >40000    
        tax_rate = 12;
        tax_D = gross_pay * 0.12;
        net_pay = gross_pay - tax_D;
    }else if (gross_pay >= 30000 && gross_pay <= 40000){ // Salary range is 30000-40000  
        tax_rate = 10;
        tax_D = gross_pay * 0.1;
        net_pay = gross_pay - tax_D;
    }else if (gross_pay < 20000){ // Salary range is <20000  
        tax_rate = 5;
        tax_D = gross_pay * 0.05;
        net_pay = gross_pay - tax_D;
    }else{
        cout <<"Invalid input!";
    }
    
    cout <<"\n------------------------------------------------------"<<endl;
    cout << "Employee ID             : " << e_ID            << endl;
    cout << "Employee Name           : " << e_name          << endl;
    cout << "Your Gross Pay          : " << gross_pay       << endl;
    cout << "Tax Rate                : " << tax_rate<<"%"   << endl;
    cout <<"\n------------------------------------------------------"<<endl;
    cout << "Your Net Pay            : " << net_pay         << endl;
    cout <<"\n------------------------------------------------------"<<endl;
    
    return 0;
}












