// doubt wrong till now   



#include <iostream>
using namespace std;
void swap(int *a,int *b)
{
    int temp =*a;
    *a=*b;
    *b=*a;
}

int disapp_num(int arr[],int n)
{
    int i=0;
    while(i<n)
    {
        int correct=arr[i]-1;
        if(arr[i]<n && arr[i]!=correct){
            swap(arr[i],arr[correct]);
        }else {
            i++;
        }
    }
        for (int indx =0 ;indx<n;indx++)
        {
            int correct=arr[indx]-1;
            if(arr[indx]!=indx+1)
            {
                return indx+1;
            }
            
        }  return n;                     
    
}
int main()
{
    int arr[]={1,2,3,4,3,2,7,8};
    int n =sizeof(arr)/sizeof(arr[0]);
    cout<<disapp_num(arr,n)<<endl;
    return 0;
}