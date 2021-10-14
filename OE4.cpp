//Name: Ashley A. Avecilla
//Activity Name: OE4
//Description: Postcard from Gizah
//Date: October 14, 2021

#include <iostream>
using namespace std;

int main()
{
    int h;
    string a;
    
    cout << "Enter pyramid's height: ";
    cin >> h;
    
	if (h <= 2 || h >= 9)
        return 1;
    		for(int i = 0; i < h - 1; ++i)
    		{
        	for (int j = 0; j < 3; ++j)
           		 for(int k = 0; k < 2 * h + 1; ++k)
               		 if(h - i == k || h + i == k)
                   		 a += "*";
              			  else a += " ";
       						 a += "\n";
    }
    for(int i = 0; i < 3; ++i) 
    {
        a += " ";
        for(int j = 0; j < 2 * h - 1; ++j)
            a += "*";
        a += " ";
    }
   		a+= "\n";
    	cout << a;

    return 0;

}

