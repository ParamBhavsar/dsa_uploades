#include <iostream>
using namespace std;

int linear_search(string st, int target,int n)
{
    if(n==0)
    {
        return -1;
    }
    
    for (int i=0;i<n;i++)
    {
        if(st[i]==target)
        return i;
    }
    return -1;
}
int main()
{
    string st="param";
    int n = sizeof(st)/sizeof(st[0]);
    char target = 'a';
    cout<<"positon of target element in string  is "
    <<linear_search(st,target,n);
}