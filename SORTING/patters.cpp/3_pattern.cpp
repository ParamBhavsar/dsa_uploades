#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"enter n"<<endl;
    cin>>n;
    int c =2*n;
    for (int row=0;row<=n;row++)
    {   
        for(int col=0;col<=n;col++)
        {
           int at_index= min(min(row,col),min(n-row,n-col));
            
            cout<<at_index;    
        }
        
           
           
        
        cout<<""<<endl; // prints new line
    }

    return 0;
}
