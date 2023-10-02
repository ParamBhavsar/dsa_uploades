#include <iostream>
using namespace std;

int main() 
{
    int n;
    cout<<"enter n"<<endl;
    cin>>n;
    int c =2*n;
    for (int i=1;i<=n;i++)
    {
    
        
           for(int m =1 ;m<=n-i;m++)
            {
                cout<<" ";
            }
               for (int j=i;j>=1;j--)
            {
               
                cout<<j;
            }
             for(int k=2;k<=i;k++)  //for row i=1 this loop will not run
                {
                    cout<<k;
                }
           
        
        cout<<""<<endl; // prints new line
    }

    return 0;
}