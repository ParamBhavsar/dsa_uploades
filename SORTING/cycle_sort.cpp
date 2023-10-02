#include <iostream>
using namespace std;
// for loop would be complicated to use in this sort
// this sorting algo will only work for continous 1 to n given in jumbling or directly sorted array
// array must start from 1 or include, till any and must be in continous range 
//{9,8,7,6,5} --> segmentation fault as not from 1,2,...
//{{8,6,3,2,1,9,4,5,7,1}--> gives sorted array as from 1,2,..n in jumbling


void swap(int *a,int *b)
{
    int temp;
    *a=temp;
    *a=*b;
    *b=temp;
}
void cycle_sort(int arr[],int n)
{
    int i=0; //mistake made was didnt written from where i should start in while loop
   while (i<n){
       int correct=arr[i]-1;
       // if(arr[i]!=correct) here we are comparing array index and correct is some kind of value so,write this way arr[correct]
        if(arr[i]!=arr[correct]) 
        {
            swap(arr[i],arr[correct]);

        }
        else
        i++;
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
    int arr[]={9,5,6,7,8,4};
    int n;
    n=sizeof(arr)/sizeof(arr[0]);
    cycle_sort(arr,n);
    print_arr(arr,n);

}