#include <iostream>
using namespace std;

int main()
{
    int a = 4;
    int b = 9;
    int c=1073741826;

    // cout << "a& b = " <<int( a & b) << endl;
    // cout << "a| b = " << int(a | b) << endl;
    // cout << "~b = " << int(~b )<< endl;
    // cout << "a^ b = " << int(a ^ b) << endl;

    // cout << "c<<1 = " << int(c<<1) << endl;
    // cout << int(17<<1) << endl;
    // cout << int(17>>2) << endl;
    // cout << int(19<<1) << endl;
    // cout << int(21<<2) << endl;
    
    // a = 4;
    // cout << a++ << endl;
    
    // a = 4;
    // cout << ++a << endl;
    
    // a = 4;
    // cout << a-- << endl;
    
    // a = 4;
    // cout << --a << endl;
    
    for (int i = 0, j = 10; i < 10 && j>0; i++,j--)
    {
        cout<<i<<j<<endl;
    }
    

    return 0; 
}