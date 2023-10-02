#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"enter n"<<endl;
    cin>>n;
    int c =2*n;
    for (int i=1;i<=c;i++)
    {
        
        if (i>n)
        {
            for (int p=1;p<=(i-n);p++)
            {
                cout<<" ";    
            }
            for(int k=1;k<=n-(i-n);k++)
            {
            cout<<"* ";
             
            }
        }
        else 
        {
            for(int m =1 ;m<=n-i;m++)
            {
                cout<<" ";
            }
               for (int j=1;j<=i;j++)
            {
                cout<<"* ";
            }
           
        }
        cout<<""<<endl; // prints new line
    }

    return 0;
}
