#include <iostream>
using namespace std;

int linear_search(int arr[], int target,int n)
{
    if(n==0)  // means length of arr =0 means no element in array ie empty
    {
        return -1;
    }
    
    for (int i=0;i<n;i++)
    {
        if(arr[i]==target)
        return i;
    }
    return -1;
}
int main()
{
    int arr[]={1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 9;
    cout<<"positon of target element is "<<linear_search(arr,target,n);
}