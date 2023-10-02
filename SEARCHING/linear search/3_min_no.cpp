#include <iostream>
using namespace std;

int linear_search_min(int arr[],int n)
{
    if(n==0)
    {
        return -1;
    }
    int min =arr[0];
    for (int i=0;i<n;i++)
    {
        if(min>arr[i])
        {
            min=arr[i];
        }
     }
    return min;
}
int main()
{
    int arr[]={1,2,3,-4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"minimum element in an array is "<<linear_search_min(arr,n);
}