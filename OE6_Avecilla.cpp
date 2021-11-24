//Name: Ashley A. Avecilla
//Activity Name: Outcomes Evaluation 6
//Description: Array programming 
//Date: November 24, 2021

#include <iostream>

using namespace std;

const int _SIZE = 100;

//Function prototypes
void searchArray(int arr[], int n);
void sortAscending(int arr[], int n); 
void sortDescending(int arr[], int n); 

int main(){

    int ch, n, arr[_SIZE];

	cout<<"Enter size of array:  "<<endl;
    cin>>n;

    cout<<"Enter elements of array:  "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    do{
        system ("cls");
        cout << endl;
        cout << "-----------------------------" << endl;
        cout << "       Array Program         " << endl;
        cout << "-----------------------------" << endl;
        cout <<"[1] Searching Array"            << endl;
        cout <<"[2] Sorting Array (Ascending)"  << endl;
        cout <<"[3] Sorting Array (Descending)" << endl;
        cout <<"[0] Exit the Program"           << endl;
        cout <<"Enter your choice:  ";
		cin >> ch;

        switch(ch){
            case 1:{
                cout << "\n<< Searching Array >>" << endl;

                searchArray(arr, n);
                system("pause");
                break;
            }
            case 2:{
                cout << "\n<< Sorting Array (Ascending) >>" << endl;

                sortAscending(arr, n); 
                system("pause");
                break;
            }
            case 3:{
                cout << "\n<< Sorting Array (Descending) >>" << endl;
            
                sortDescending(arr, n); 
                system("pause");
                break;
            }
            case 0:{
                cout << "\nThank you for using the system!" << endl;
                system("pause");   
                return 0;
            }
            default:{
                cout << "Invalid Input..." << endl;
                system("pause");
            }
        }
    }while(true);
} 
// End of main function

// Function definition

// Define the searchArray function.
void searchArray(int arr[], int n){
    
	int k,ans=-1;
    
    cout<<"Enter element to be searched:  "<<endl;
    cin>>k;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==k)
        {
            ans=i;
            break;
        }
    }
    if(ans!=-1)
    cout<<"The element "<<k<<" is present at index "<<ans;
    else
    cout<<"The element "<<k<<" is not there in the array ";
}

// Define the sortAscending function
void sortAscending(int arr[], int n){

	int a, b, temp;

	for(b=0; b<n; b++)
    {
        for(a=b+1; a<n; a++)
        {
            //If there is a smaller element found on right of the array then swap it.
            if(arr[a] < arr[b])
            {
                temp = arr[b];
                arr[b] = arr[a];
                arr[a] = temp;
            }
        }
    }
    //Printing the sorted array in ascending order
    cout<<"Elements of array in sorted ascending order:"<<endl;
    for(b=0; b<n; b++)
    {
        cout<<arr[b]<<endl;
    } 
} 

// Define the sortDescending function
void sortDescending(int arr[], int n){

	int k, z, temp;

    for (z = 0; z < n; ++z)   // 'for' loop is used for sorting the numbers in descending order
    {
        for (k = z + 1; k < n; ++k)
        {
            if (arr[z] < arr[k])
            {
                temp = arr[z];
                arr[z] = arr[k];
                arr[k] = temp;
            }
        }
    }

    cout<<"\n Numbers in Descending Order: \n";
    for (z = 0; z < n; ++z)
    {
        cout<<" ";
        cout<<arr[z];
        cout<<"\n";
    }
}
