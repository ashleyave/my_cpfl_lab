//Name: Ashley A. Avecilla
//Activity Name: OE2
//Description: POS Computer System that computes at least 3 kinds of product input, plus TAX
//Date: September 15, 2021

#include <iostream>
#include <string>

const double TAX = 0.12;

using namespace std;

int main()
{
    string cname, pn1, pn2, pn3, p1_id, p2_id, p3_id;
    int pq1, pq2, pq3;
    double pn1_price, pn2_price, pn3_price, t_price, pretax, TAX_d; 

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
    cout << "Enter product1 I.D.   : ";
    cin >> p3_id;
    cout << "Enter quantity        : ";
    cin >> pq3;
    cout << "Enter Product price   : ";
    cin >> pn3_price; 

    pretax = (pn1_price*pq1) + (pn2_price*pq2) + (pn3_price*pq3);
    TAX_d = pretax * TAX;
    t_price = pretax + TAX_d; 

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    cout << "\n------------------RECEIPTS--------------------" << endl;
    cout << "Customer name : " << cname << endl;
    cout << "\n----------------------------------------------" << endl;
    cout << "Product name  : " << pn1 << endl;
    cout << "Product I.D.  : " << p1_id << endl;
    cout << "Quantity      : " << pq1 << endl;
    cout << "Price         : " << "P" << pn1_price << endl;
    cout << "\n----------------------------------------------" << endl;
    cout << "Product name  : " << pn2 << endl;
    cout << "Product I.D.  : " << p2_id << endl;
    cout << "Quantity      : " << pq2 << endl;
    cout << "Price         : " << "P" << pn2_price << endl;
    cout << "\n----------------------------------------------" << endl;
    cout << "Product name  : " << pn3 << endl;
    cout << "Product I.D.  : " << p3_id << endl;
    cout << "Quantity      : " << pq3 << endl;
    cout << "Price         : " << "P" << pn3_price << endl;
    cout << "\n----------------------------------------------" << endl;
    cout << "TAX           : " << "P" << TAX_d << endl; 
    cout << "TOTAL Amount  : " << "P" << t_price << endl; 
    cout << "\n----------------------------------------------" << endl;
    return 0;
}


