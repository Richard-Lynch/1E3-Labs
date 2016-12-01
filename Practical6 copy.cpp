#include <iostream>
#include <iomanip> //for io manipulation//
#include <cmath>
using namespace std;

int main() {
    //void decimalToBCD(int x);
    int x, A, B, C, D, High, Low;
   
    
    cout << "please enter x \n";
    cin >> x;
    cout << endl;
    
    if(x / 8)
    {
        DigitalWrite(D, High);
    }
    else
    {
        DigitalWrite(D, Low);
    }
    
    x = x % 8;
    
    if(x / 4)
    {
        DigitalWrite(C, High);
    }
    else
    {
        DigitalWrite(C, Low);
    }
    
    x = x % 4;
    
    if(x / 2)
    {
        DigitalWrite(B, High);
    }
    else
    {
        DigitalWrite(B, Low);
    }
    
    x = x % 2;
    
    if(x = 1)
    {
        DigitalWrite(A, High);
    }
    else
    {
        DigitalWrite(A, Low);
    }

    
    cout << A << cout << B << cout << C << cout << D;


    return 0;
}


//void decimalToBCD(int x, A, B, C, D)
{
    if(x / 8)
    {
        DigitalWrite(D, High);
    }
    else
    {
        DigitalWrite(D, Low);
    }
    
    x = x % 8;
    
    if(x / 4)
    {
        DigitalWrite(C, High);
    }
    else
    {
        DigitalWrite(C, Low);
    }
    
    x = x % 4;
    
    if(x / 2)
    {
        DigitalWrite(B, High);
    }
    else
    {
        DigitalWrite(B, Low);
    }
    
    x = x % 2;
    
    if(x = 1)
    {
       DigitalWrite(A, high);
    }
    else
    {
        DigitalWrite(A, Low);
    }
}