#include <iostream>
#include <string>

using namespace std;

const double TAX = 0.12;
const double P_h = 150.00;
const double SSS = 250.00;
const double P_I = 200.00

int main(){

    string e_p_m, e_p_n, d_o_p;
    int n_h_p
    double h_p_r, g_p, n_p, wh_t;

    cout <<"\n===========================================" endl;
    cout <<"Greetings! Dear employee, please input the following information needed in your payroll."
    cout <<"\n===========================================" endl;

    cout << "Enter Employee name          : "; 
    getline (cin, e_p_m);
    cout << "Enter Employee number        : ";
    getline (cin, e_p_n);
    cout << "Enter Date of payday         : ";
    getline (cin, d_o_p);
    cout << "Enter Hourly pay rate        : ";
    getline (cin, h_p_r);
    cout << "Enter Hours worked           : ";
    getline (cin, n_h_w);

    cout <<"\nYou earned " << n_h_w << " at " << h_p_r << " per hour "; << endl;

    g_p =  h_p_r * n_h_w
    wh_t = g_p * TAX
    n_p = g_p - wh_t - SSS - P_I - P_H
    
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2)

    cout << "\n------------------------PAYROLL-------------------------" << endl;
    cout << "Payroll summary for             : " << e_p_m     << endl;
    cout << "Employee No.                    : " << e_p_n     << endl;
    cout << "Payroll date                    : " << gross_pay << endl;
   
    cout <<"\nYou earned " << n_h_w << " at " << h_p_r << " per hour ";  << endl;
   
    cout << "Gross pay                       : " << g_p       << endl;
    cout << "Withholding tax                 : " << wh_t      << endl;
    cout << "Philhealth                      : " << P_H       << endl;
    cout << "SSS                             : " << SSS       << endl;
    cout << "Pagibig                         : " << P_I       << endl;
    cout <<"\n----------------------------------------------------------" <<endl;
    cout << "Net Pay                         : " << n_p       << endl;
    
    if (n_p < 5000.00){
        cout <<"Employee Status   : Contractual";
    }
    else if ((n_p > 5001.00) && (n_p < 10000.00)){
        cout <<"Employee Satus    : Probationary";
    }
    else{
        cout <<Employee Status    : Regular";
    }
    return 0;
}
