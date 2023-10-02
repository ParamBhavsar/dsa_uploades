#include <iostream>
using namespace std;

void swap(int *a,int *b)
{
    int temp;
    *a=temp;
    *a=*b;
    *b=temp;
}

void cycle_sort(int arr[],int n)
{    
    int i=0;
    int correct;
    while(i<n)
    {
    correct=arr[i];
        if(arr[i]<n && arr[i]!=arr[correct])
        {
            swap(arr[i],arr[correct]);

        }
        else 
        i++;
        }
}
int missing(int arr[],int n)
{
    int correct;
    for(int i=0;i<n;i++)
    {   correct=arr[i];
        if(arr[i]!=arr[correct])
        {
        return i;
        break;
        }
        
    }
    return n;
}

int main()
{
    int arr[]={4,0,2,1,5,6,7,8,3};
    int n;
    n=sizeof(arr)/sizeof(arr[0]);
    cycle_sort(arr,n);
    cout<<"missing no. is "<<missing(arr,n);

}