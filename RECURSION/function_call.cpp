#include <iostream>
using namespace std;

void print(int n)  
{
    if(n==5)
    {
        cout<<n;
        return;
    }
    cout<<n<<endl;
    print(n+1);     
}
int main()
{
    int n =1;
    print(n);
    return 0;
}