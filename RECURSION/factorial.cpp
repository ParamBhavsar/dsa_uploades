#include <iostream>
using namespace std;

int factorial(int n)  
{
    if(n<2) // factorial of 0 and 1 is 1
    {
        return 1;
    }
    return (n)*factorial(n-1);    
}
int main()
{
   int n=5;
   cout<<factorial(n); 
   return 0;
}