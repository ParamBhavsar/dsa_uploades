#include <iostream>
using namespace std;
void swap(int*a,int*b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
// its simple sorting algo. which sort array partially with each pass of i 
// also staring from j=i+1 and will decrement till j>0 so we are sorting array partailly on L.H.S with each pass of i so it goes till i<=n-2 or i<n-1

void insertion_sort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)  // mistake was i<n-2 written instead i<n-1 ori<=n-2
    {
        for(int j=1+i;j>0;j--)
        {
            if(arr[j]<arr[j-1])
            {
                swap(&arr[j],&arr[j-1]);
                    
            }
            else
            {
                break;
            }
        }
    }

}
void print_arr(int arr[], int n)
{
    cout<<"sorted elements are:"<<endl;
    cout<<"[";
    for(int k=0;k<n;k++)
    {        
        cout<<arr[k]<<",";
    }
        cout<<"]";

}

int main()
{
    int arr[]={44,33,11,777,98,5};
    int n;
    n=sizeof(arr)/sizeof(arr[0]);
    insertion_sort(arr,n);
    print_arr(arr,n);
    return 0;
}