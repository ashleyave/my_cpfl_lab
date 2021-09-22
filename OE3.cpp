#include <iostream>
#include <string>

using namespace std;

int main(){

    string e_name, e_ID;
    int num_hours_work, tax_rate;
    double rate_per_hour, gross_pay, tax_D, net_pay;

    cout << "Enter Employee Name         : ";
    getline (cin, e_name);
    cout << "Enter Employee ID           : ";
    getline (cin, e_ID);
    cout << "Enter Number of hours work  : ";
    cin >> num_hours_work;
    cout << "Enter Rate per hour         : ";
    cin >> rate_per_hour;

    gross_pay = rate_per_hour*num_hours_work;

    if(num_hours_work == 0 || rate_per_hour == 0){
        cout << "You did not put anything!";
    }
    else if (gross_pay > 40000){
        tax_rate = 12;
        tax_D = gross_pay * 0.12;
        net_pay = gross_pay - tax_D;
    }else if (gross_pay >= 3000 && gross_pay <= 40000){
        tax_rate = 10;
        tax_D = gross_pay * 0.10;
        net_pay = gross_pay - tax_D;
    }else if ( gross_pay < 2000){
        tax_rate = 5;
        tax_D = gross_pay * 0.05;
        net_pay = gross_pay - tax_D;
    }
    else{
        cout << "Invalid input!";
    }
    
    cout <<"\n------------------------------------------------------"<<endl;
    cout << "Employee Name         : " << e_name          << endl;
    cout << "Employee ID           : " << e_ID            << endl;
    cout << "Number of hours work  : " << num_hours_work  << endl;
    cout << "Your Gross Pay        : " << gross_pay       << endl;
    cout << "Tax Rate              : " << tax_rate<<"%"   << endl;
    cout << "Tax Deduction         : " << tax_D           << endl;
    cout <<"\n------------------------------------------------------"<<endl;
    cout << "Your Net Pay          : " << net_pay         << endl;
    cout <<"\n------------------------------------------------------"<<endl;
    
    return 0;
}












