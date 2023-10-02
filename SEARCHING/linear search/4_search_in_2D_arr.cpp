#include <iostream>
using namespace std;
//n C/C++ you cannot define a bi-dimensional array with two unknown size as in int arr[][].
//multidimensional array must have bounds for all dimensions except the first. Try defining at least one size

int linear_search( int arr[][5], int target,int n,int row_length)
{
    if(n==0)  // means length of arr =0 means no element in array ie empty
    {
        return -1;
    }
    
    for (int i=0;i<n;i++)
    {
        for(int j=0;j<row_length;j++)
        {
            if(arr[i][j]==target)
            {
                return i;
            }
        }
    }
    return -1;
}
int main()
{
    int arr[][5]={{1,2,3},{4,5,6},{8,9,5},{5,34,6}};
    int row_length = sizeof(arr)/sizeof(arr[0]);
    int n = sizeof(arr)/sizeof(arr[0][0]);
    int target = 9;
    cout<<n << endl <<row_length;
    cout<<"positon of target element is "<<linear_search(arr,target,n,row_length);
}