#include <iostream>
using namespace std;
void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
void bubble_sort(int arr[],int n) 
{
    for (int i=0;i<n;i++)   // for pass
    {
        for(int j=1;j<=(n-i-1);j++) 
        {
            if(arr[j-1]>=arr[j])
            {
            swap(&arr[j-1],&arr[j]); // swapping the variable till it reaches its correct index starting from maximum element as last
            }// range of j<=(n-i-1) helps to reduce the comparison of already sorted element wrt to pass provided by i
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
    int arr[]={55,22,55,66,77,88,99};
    int n;
    n=sizeof(arr)/sizeof(arr[0]);
    bubble_sort(arr,n);
    print_arr(arr,n);

}