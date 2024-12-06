// wap to print square printing using the help of for loop  
//   square pattern printing  in c++
//  
#include<iostream>
using namespace std;
int main()
{
    int  rows, col;

    for( rows= 0; rows<4; rows = rows +1)
    {
        for( col = 0; col<4; col = col +1)
        {
            cout<<" *";
        }

        cout << endl; 
   }

   return 0;
}