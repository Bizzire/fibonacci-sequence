/*
--Fibonacci Sequence--
Calculates fibonacci number based on
nth number from user input
-------------------------------------
COP3014-001 : Programmming II
Created by Kenley Ruiz on 2/24/24.
-------------------------------------
Last modified:
2/24/24 - 10:07pm
*/

#include <iostream>

using namespace std;

int main()
{
    int nth = 0;
    
    cout << "Please enter nth number in the sequence: " << endl;
    cin >> nth;
    cout << endl;
    
    long int temp_a = 0;
    long int temp_b = 1;
    long int temp_c = 0;
    
    cout << temp_a << " ";
    cout << temp_b << " ";
    
    for(int i = 1; i < nth; i++)
    {
        temp_c = temp_a + temp_b;
        temp_a = temp_b;
        temp_b = temp_c;
        cout << temp_c << " ";
        
        if(i == (nth - 1)) 
        {
            cout << endl << endl << "your number is: " << temp_c << endl;
        }
    }
    
    return 0;
}