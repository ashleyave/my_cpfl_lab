//Name: Ashley A. Avecilla
//Activity Name: Performance Task 3
//Description: POS, File I/O implementation
//Date: November 20, 2021

#include <iostream>
#include <fstream>
#include <cstdlib>

const double TAX = 0.12;

using namespace std;

int main()
{
    // declare stream variables
    ifstream in_stream; // input stream variable > keyboard
    ofstream ou_stream; // output stream variable > file

    in_stream.open("in_file.txt");
    ou_stream.open("ou_file.txt", ios::app);
    
    // Variables
    string cname, pn1, pn2, pn3, p1_id, p2_id, p3_id;
    int pq1, pq2, pq3;
    double pn1_price, pn2_price, pn3_price, t_price, pretax, TAX_d; 
    
    // User input
    cout << "Enter Customer name   : ";
    getline (cin,cname);
    cout << "Enter product1 name   : ";
    cin >> pn1;
    cout << "Enter product1 I.D.   : ";
    cin >> p1_id;
    cout << "Enter quantity        : ";
    cin >> pq1;
    cout << "Enter Product price   : ";
    cin >> pn1_price;
    
    cout << "Enter product2 name   : ";
    cin >> pn2;
    cout << "Enter product2 I.D.   : ";
    cin >> p2_id;
    cout << "Enter quantity        : ";
    cin >> pq2;
    cout << "Enter Product price   : ";
    cin >> pn2_price;

    cout << "Enter product3 name   : ";
    cin >> pn3;
    cout << "Enter product3 I.D.   : ";
    cin >> p3_id;
    cout << "Enter quantity        : ";
    cin >> pq3;
    cout << "Enter Product price   : ";
    cin >> pn3_price; 
    
    // Formulas 
    pretax = (pn1_price*pq1) + (pn2_price*pq2) + (pn3_price*pq3);
    TAX_d = pretax * TAX;
    t_price = pretax + TAX_d; 

    // Formatting output files
    ou_stream.setf(ios::fixed);
    ou_stream.setf(ios::showpoint);
    ou_stream.precision(2);
    
    // Statement to write the input to a file
    ou_stream << "\n------------------RECEIPTS--------------------" << endl;
    ou_stream << "Customer name : " << cname << endl;
    ou_stream << "\n----------------------------------------------" << endl;
    ou_stream << "Product name  : " << pn1   << endl;
    ou_stream << "Product I.D.  : " << p1_id << endl;
    ou_stream << "Quantity      : " << pq1   << endl;
    ou_stream << "Price         : " << "P"   << pn1_price << endl;
    ou_stream << "\n----------------------------------------------" << endl;
    ou_stream << "Product name  : " << pn2   << endl;
    ou_stream << "Product I.D.  : " << p2_id << endl;
    ou_stream << "Quantity      : " << pq2   << endl;
    ou_stream << "Price         : " << "P"   << pn2_price << endl;
    ou_stream << "\n----------------------------------------------" << endl;
    ou_stream << "Product name  : " << pn3   << endl;
    ou_stream << "Product I.D.  : " << p3_id << endl;
    ou_stream << "Quantity      : " << pq3   << endl;
    ou_stream << "Price         : " << "P"   << pn3_price << endl;
    ou_stream << "\n----------------------------------------------" << endl;
    ou_stream << "TAX           : " << "P"   << TAX_d     << endl; 
    ou_stream << "TOTAL Amount  : " << "P"   << t_price   << endl; 
    ou_stream << "\n----------------------------------------------" << endl;
    
    in_stream.close();
    ou_stream.close();

    return 0;
}