#include<iostream>
using namespace std;
int main()
{
   int n;
   cout<<" Enter The Rows: ";
   cin>>n;
   
    for( int rows=0; rows<n; rows= rows+1)
    {
        for( int column=0; column<rows+1; column= column+1 )
       {
        cout<< " *"<<column+1;
       }
       cout<<endl;
    }
    return 0;
}
