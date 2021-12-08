#include <iostream>
#include <conio.h>
#include <fstream>
#include <cstdlib>

using namespace std;

// Function Prototypes
void cashier();
void promptandwait(int& Y_N);

int main(){

   int Y_N;
   int loop;

   do{
       system("cls");
       cout << "<< Mr Isal's Restaurant Online Delivery >>" << endl;
       cout << "[1] Start " << endl;
       cout << "[2] Exit"   << endl;
       cout << "Select an option: ";
       cin >> loop;

       switch(loop)
       {
            case 1:{
                cashier();
                promptandwait(Y_N);
                break;
            }

            case 2:{
                cout <<"Thank you for using the app!" << endl;
                return 0;
                break;
                
            }
            
            default:{
                cout << "Invalid Input";
                break;
            }
       }
    }while(Y_N == 1); 
}

// Function Definition
void promptandwait(int& Y_N){
    cout << "Do you want to continue?" << endl;
    cout << "[1] YES" << endl;
    cout << "[2] NO"  << endl;
    cin >> Y_N;  
}

void cashier(){
    // Declare stream variable
    ofstream ou_stream; // output stream variable > file

    ou_stream.open("Restaurant_oufile.txt", ios::app);

    // Variables
    int size = 100;
    double price, total = 0, totalq =0;
    double list[size]{99.00, 109.00, 105.00, 115.00, 49.00, 59.00, 69.00, 39.00, 29.00};
    int choice, Y_N;
    int quantity = 0;
    int ch;
    char add;

    // Intro
       cout <<"\n ================================== " <<endl;
       cout <<"\n  |----------WELCOME TO-----------| " <<endl;
       cout <<"\n  |----------MR ISAL's------------| " <<endl;
       cout <<"\n  |----------Restaurant-----------| " <<endl;
       cout <<"\n ================================== " <<endl;

       cout <<"\nGood day Ma'am/Sir! Press Enter to see the MENU" <<endl;
       getch();

       system("cls");
        beginning:
        cout <<"\t\t==================================="<<endl;
        cout <<"\t\t|----------- M E N U ------------| "<<endl;
        cout <<"\t\t==================================="<<endl;
        
       
// MENU Output for Mr. Isal's Restaurant Paborito Value Meals
       cout << endl;
       cout << "        ========================               "<<endl;
       cout << "        | Paborito Value Meals |               "<<endl;
       cout << "        ========================               "<<endl;
       cout << "1.  VM1.1 - Paa Solo                P 99.00    "<<endl;
       cout << "2.  VM1.2 - Paa with Drink          P 109.00   "<<endl;
       cout << "3.  VM1.3 - Spicy Paa Solo          P 99.00    "<<endl;
       cout << "4.  VM1.4 - Spicy Paa with Drink    P 109.00   "<<endl;
       cout << "5.  VM2.1 - Pecho Solo              P 105.00   "<<endl;
       cout << "6.  VM2.2 - Pecho with Drink        P 115.00   "<<endl;
       cout << "7.  VM3.1 - Pork BBQ 2 pcs. Solo    P 99.00    "<<endl;
       cout << "8.  VM3.2 - Pork BBQ 2 pcs.w/Drink  P 109.00   "<<endl;
       cout << "9.  VM4.1 - Bangus Sisig Solo       P 99.00    "<<endl;
       cout << "10. VM4.2 - Bangus Sisig w/Drink    P 109.00   "<<endl;
       cout << "11. VM5.1 - Pork Sisig Solo         P 99.00    "<<endl;
       cout << "12. VM5.2 - Pork Sisig w/Drink      P 109.00   "<<endl;
       cout << "13. VM6.1 - Bangus Inihaw Solo      P 99.00    "<<endl;
       cout << "14. VM6.2 - Bangus Inihaw w/Drink   P 109.00   "<<endl;

// MENU Output for Mr. Isal's Restaurant Meriendas
      cout << endl;
      cout <<  "       ==========================              "<<endl;
      cout <<  "       | Your Favorite Merienda |              "<<endl;
      cout <<  "       ==========================              "<<endl;
      cout << "15. Pansit Bihon Solo                P 49.00    "<<endl;
      cout << "16. Pansit Bihon with Drink          P 59.00    "<<endl;
      cout << "17. Molo                             P 49.00    "<<endl;
      cout << "18. Lumpiang Togue                   P 49.00    "<<endl;
      cout << "19. Palabok                          P 59.00    "<<endl;
      cout << "20. Palabok with Drink               P 69.00    "<<endl;
      
// MENU Output for Mr. Isal's Restaurant Desserts
      cout << endl;
      cout <<  "       ==========================              "<<endl;
      cout <<  "       | Your Favorite Desserts |              "<<endl;
      cout <<  "       ==========================              "<<endl;
      cout << "21. Halo-Halo Regular                P 39.00    "<<endl;
      cout << "22. Halo-Halo Special                P 49.00    "<<endl;
      cout << "23. Leche Flan                       P 49.00    "<<endl;
      cout << "24. Turon Split                      P 39.00    "<<endl;

// MENU Output for Mr. Isal's Restaurant Refreshing Drinks
      cout << endl;
      cout <<  "          =====================                "<<endl;
      cout <<  "          | Refreshing Drinks |                "<<endl;
      cout <<  "          =====================                "<<endl;
      cout <<"25. Sago't Gulaman                   P 29.00     "<<endl;
      cout <<"26. Soft Drink Regular               P 29.00     "<<endl;
      cout <<"27. Soft Drink Large                 P 39.00     "<<endl;
      cout <<"28. Iced Tea Regular                 P 29.00     "<<endl;
      cout <<"29. Iced Tea Large                   P 39.00     "<<endl;
      
// Customer Input
    cout <<""<<endl;
    cout <<"|======================================================================|"<<endl;
    cout <<"\t\tYour current total bill is Php: "<< total  <<endl;
    cout <<"\t\tYour current total orders:      "<< totalq <<endl;
    cout <<"|======================================================================|"<<endl;
    cout <<""<<endl;
    cout <<"\n\nEnter your choice and press Enter: ";
    cin >> ch;

// Switch Statements
           switch(ch){
                case 1:{
                    cout <<"\tVM1.1 - Paa Solo\n";
                    price = list[0];
                    break;
                }
                case 2:{
                    cout <<"\tVM1.2 - Paa with Drink\n";
                    price = list[1];
                    break;
                }
                case 3:{
                    cout <<"\tVM1.3 - Spicy Paa Solo\n";
                    price = list[0];
                    break;
                }
                case 4:{
                    cout <<"\tVM1.4 - Spicy Paa with Drink\n";
                    price = list[1];
                    break;
                }
                case 5:{
                    cout <<"\tVM2.1 - Pecho Solo\n";
                    price = list[2];
                    break;
                }
                case 6:{
                    cout <<"\tVM2.2 - Pecho with Drink\n";
                    price = list[3];
                    break;
                }
                case 7:{
                    cout <<"\tVM3.1 - Pork BBQ 2 pcs. Solo\n";
                    price = list[0];
                    break;
                }
                case 8:{
                    cout <<"\tVM3.2 - Pork BBQ 2 pcs. w/Drink\n";
                    price = list[1];
                    break;
                }
                case 9:{
                    cout <<"\tVM4.1 - Bangus Sisig Solo\n";
                    price = list[0];
                    break;
                }
                case 10:{
                    cout <<"\tVM4.2 - Bangus Sisig w/Drink\n";
                    price = list[1];
                    break;
                }
                case 11:{
                    cout <<"\tVM5.1 - Pork Sisig Solo\n";
                    price = list[0];
                    break;
                }
                case 12:{
                    cout <<"\tVM5.2 - Pork Sisig w/Drink\n";
                    price = list[1];
                    break;
                }
                case 13:{
                    cout <<"VM6.1 - Bangus Inihaw Solo\n";
                    price = list[0];
                    break;
                }
                case 14:{
                    cout <<"VM6.2 - Bangus Inihaw w/Drink\n";
                    price = list[1];
                    break;
                }
                case 15:{
                    cout <<"Pansit Bihon Solo\n";
                    price = list[4];
                    break;
                }
                case 16:{
                    cout <<"Pansit Bihon with Drink\n";
                    price = list[5];
                    break;
                }
                case 17:{
                    cout <<"Molo\n";
                    price = list[4];
                    break;
                }
                case 18:{
                    cout <<"Lumpiang Togue\n";
                    price = list[4];
                    break;
                 }
                case 19:{
                    cout <<"Palabok\n";
                    price = list[5];
                    break;
                }
                case 20:{
                    cout <<"Palabok with Drink\n";
                    price = list[6];
                    break;
                }
                case 21:{
                    cout <<"Halo-Halo Regular\n";
                    price = list[7];
                    break;
                }
                case 22:{
                    cout <<"Halo-Halo Special\n";
                    price = list[4];
                    break;
                }
                case 23:{
                    cout <<"Leche Flan\n";
                    price = list[4];
                    break;
                }
                case 24:{
                    cout <<"Turon Split\n";
                    price = list[7];
                    break;
                }
                case 25:{
                    cout <<"Sago't Gulaman\n";
                    price = list[8];
                    break;
                }
                case 26:{
                    cout <<"Soft Drink Regular\n";
                    price = list[8];
                    break;
                }
                case 27:{
                    cout <<"Soft Drink Large\n";
                    price = list[7];
                    break;
                }
                case 28:{
                    cout <<"Iced Tea Regular\n";
                    price = list[8];
                    break;
                }
                case 29:{
                    cout <<"Iced Tea Large\n";
                    price = list[7];
                    break;
                }
                default:{
                    cout <<"Invalid input!";
                    promptandwait(Y_N);
                    goto beginning;
                    break;
                }
            }
    //Prompts
    cout << endl;
    cout <<" How Many Order/s? ";
    cin >> quantity;

    //Formula
    total+=price*quantity;
    totalq += quantity;

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    //Bill preview
    cout <<"\tYour current total bill is Php: "<< total <<endl;
    cout <<""<<endl; 

    //Prompts
    cout <<"\tWould you like to order more ? y/n: ";
    cin >> add;
        if(add=='y'){
            goto beginning;
        }
        else{
            goto end;       
        }   
    end:
     
    //Declare Variables for user input
    system("CLS");
    int in,ans;
    long long int c_n;
    double saleprice,discount,cash;
    string name;
    string add1;

    cout << "Do you have a Senior Citizen card? \n";
    cout << "[1] Yes \n";
    cout << "[2] No  \n";
    cout << "Response: ";
    cin >> ans;
    system("CLS");

    //Condition
    if(ans==1){
        cout <<"Enter your name: "    <<endl;
        cin.ignore();
        getline(cin, name);
        cout <<"Enter your number: "  <<endl;
        cin >> c_n;
        cin.ignore();
        system("CLS");
        cout <<"Enter your address: " <<endl;
        getline(cin, add1);
        
        //Billing 1 (Customer w/ Senior Citizen card)
        system("CLS");
        cout << "================================================="<<endl;
        cout << "              Mr. Isal's Restaurant              "<<endl;
        cout << "               | BILLING SUMMARY |               "<<endl;
        cout << "================================================="<<endl;
        
        cout <<""<<endl;
        cout <<""<<endl;

        //Details
        cout << "Customer   : "<< name <<endl;
        cout << "Your number: "<< c_n  <<endl;
        cout << "Address    : "<< add1 <<endl;
        cout << "Cashier    : Ashley"  <<endl;

        //Order list
        cout << "\n---Orders---";
        cout << "\nOrder Quantity: " <<totalq;

        //Discount
        cout << "\n---Discount---";

        //formula
        discount = total * 0.2; // 20% discount for Senior Citizen Customers
        saleprice = total - discount;

        //Adjust the formatting
        cout.setf(ios::fixed);
        cout.setf(ios::showpoint);
        cout.precision(2);

        cout << "\nRegular price: P " << total     << endl;
        cout << "Discount amount: P " << discount  << endl;
        
        cout << "Total amount: P "    << saleprice << endl;

        cout << "\nCash: ";
        cin >> cash;

        if(cash>=saleprice){
            cout << "\nChange: P "<<cash - saleprice;
            cout << ""<<endl;
            cout << ""<<endl;
            cout << "\n|==============================|"<<endl;
            cout << "\n|  Thank you for ordering!     |\n";
            cout << "\n|   Your food is on the way..  |\n";
            cout << "\n|        HAPPY EATING          |\n";
            cout << "\n|==============================|"<<endl;

            //Statement to write the input to a file (Billing 1)
            ou_stream << "================================================="<<endl;
            ou_stream << "              Mr. Isal's Restaurant              "<<endl;
            ou_stream << "               | BILLING SUMMARY |               "<<endl;
            ou_stream << "================================================="<<endl;
            ou_stream << ""<<endl;
            ou_stream << ""<<endl;
            ou_stream << "Customer   : "<< name <<endl;
            ou_stream << "Your number: "<< c_n  <<endl;
            ou_stream << "Address    : "<< add1 <<endl;
            ou_stream << "Cashier    : Ashley"  <<endl;
            ou_stream << "\n---Orders---";
            ou_stream << "\nOrder Quantity: " <<totalq;
            ou_stream << "\n---Discount---";

            //Formatting output files
            ou_stream.setf(ios::fixed);
            ou_stream.setf(ios::showpoint);
            ou_stream.precision(2);

            ou_stream << "\nRegular price: P " << total     << endl;
            ou_stream << "Discount amount: P " << discount  << endl;
            ou_stream << "Total amount: P "    << saleprice << endl;
            ou_stream << "\nCash: " << cash;
            ou_stream << "\nChange: P "<<cash - saleprice;
            ou_stream << ""<<endl;
            ou_stream << ""<<endl;
            ou_stream << "\n|==============================|"<<endl;
            ou_stream << "\n|  Thank you for ordering!     |\n";
            ou_stream << "\n|   Your food is on the way..  |\n";
            ou_stream << "\n|        HAPPY EATING          |\n";
            ou_stream << "\n|==============================|"<<endl;

        }
        else{
            cout <<"Insufficient balance!";
            ou_stream << "================================================="<<endl;
            ou_stream << "              Mr. Isal's Restaurant              "<<endl;
            ou_stream << "               | BILLING SUMMARY |               "<<endl;
            ou_stream << "================================================="<<endl;
            ou_stream << ""<<endl;
            ou_stream << ""<<endl;
            ou_stream << "Customer   : "<< name <<endl;
            ou_stream << "Your number: "<< c_n  <<endl;
            ou_stream << "Address    : "<< add1 <<endl;
            ou_stream << "Cashier    : Ashley"  <<endl;
            ou_stream << "\n---Orders---";
            ou_stream << "\nOrder Quantity: " <<totalq;
            ou_stream << "\n---Discount---";

            //Formatting output files
            ou_stream.setf(ios::fixed);
            ou_stream.setf(ios::showpoint);
            ou_stream.precision(2);

            ou_stream << "\nRegular price: P " << total     << endl;
            ou_stream << "Discount amount: P " << discount  << endl;
            ou_stream << "Total amount: P "    << saleprice << endl;
            ou_stream << "\nCash: "            << cash      << endl;
            ou_stream << "Insufficient balance!";

        }
      }
    else
    {
        //User input (Customer w/out Senior Citizen card / Regular Customers)
        cout <<"Enter your name: "   <<endl;
        cin.ignore();
        getline(cin, name);
        cout <<"Enter your number: " <<endl;
        cin >> c_n;
        cin.ignore();
        system("CLS");
        cout <<"Enter your address: "<<endl;
        getline(cin, add1);

        //Billing 2
        system("CLS");
        cout << "================================================"<<endl;
        cout << "            Mr. Isal's Restaurant               "<<endl;
        cout << "             | BILLING SUMMARY |                "<<endl;
        cout << "================================================"<<endl;

        //Details
        cout << "Customer   : "<<name <<endl;
        cout << "Your number: "<< c_n <<endl;
        cout << "Address    : "<<add1 <<endl;
        cout << "Cashier    : Ashley" <<endl;
        
        //Order list
        cout << "---Orders---\n";
        cout << "Order Quantity: "     <<totalq;

        cout << ""<<endl;
        cout << "\nTotal Amount is : P "<<total;

        cout << "\nCash: ";
        cin >> cash;

        if(cash>=total){
            cout << "\nChange: P "<<cash - total;
            cout << ""<<endl;
            cout << ""<<endl;
            cout << "\n|==============================|"<<endl;
            cout << "\n|  Thank you for ordering!     |\n";
            cout << "\n|   Your food is on the way..  |\n";
            cout << "\n|        HAPPY EATING          |\n";
            cout << "\n|==============================|"<<endl;

            //Statement to write the input to a file (Billing 2)
            ou_stream << "================================================"<<endl;
            ou_stream << "            Mr. Isal's Restaurant               "<<endl;
            ou_stream << "             | BILLING SUMMARY |                "<<endl;
            ou_stream << "================================================"<<endl;
            ou_stream << "Customer   : "<<name <<endl;
            ou_stream << "Your number: "<< c_n <<endl;
            ou_stream << "Address    : "<<add1 <<endl;
            ou_stream << "Cashier    : Ashley" <<endl;
            ou_stream << "---Orders---\n";
            ou_stream << "Order Quantity: "<<totalq;
            ou_stream << ""<<endl;

            //Formatting output files
            ou_stream.setf(ios::fixed);
            ou_stream.setf(ios::showpoint);
            ou_stream.precision(2);

            ou_stream << "\nTotal Amount is : P " <<total;
            ou_stream << "\nCash: "               << cash;
            ou_stream << "\nChange: P "           <<cash - total;
            ou_stream << ""<<endl;
            ou_stream << ""<<endl;
            ou_stream << "\n|==============================|"<<endl;
            ou_stream << "\n|  Thank you for ordering!     |\n";
            ou_stream << "\n|   Your food is on the way..  |\n";
            ou_stream << "\n|        HAPPY EATING          |\n";
            ou_stream << "\n|==============================|"<<endl;

          
        }

        else{
            cout <<"Insufficient balance!";
            ou_stream << "================================================"<<endl;
            ou_stream << "            Mr. Isal's Restaurant               "<<endl;
            ou_stream << "             | BILLING SUMMARY |                "<<endl;
            ou_stream << "================================================"<<endl;
            ou_stream << "Customer   : "<<name <<endl;
            ou_stream << "Your number: "<< c_n <<endl;
            ou_stream << "Address    : "<<add1 <<endl;
            ou_stream << "Cashier    : Ashley" <<endl;
            ou_stream << "---Orders---\n";
            ou_stream << "Order Quantity: "  <<totalq;
            ou_stream << ""<<endl;

            //Formatting output files
            ou_stream.setf(ios::fixed);
            ou_stream.setf(ios::showpoint);
            ou_stream.precision(2);

            ou_stream << "\nTotal Amount is : P " <<total;
            ou_stream << "\nCash: "               << cash;
            ou_stream << "Insufficient balance!"  << endl;

            ou_stream.close();

        }
    }
}


       