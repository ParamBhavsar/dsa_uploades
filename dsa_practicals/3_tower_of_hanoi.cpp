#include <iostream>
using namespace std;

// eg. 3 disk che Source par 2 disk ie.(n-1) uthai ne aux par muki didhi
// to 1 disk je third no. ni hase source par ane destination par muki didhi
// biji 2 disk 2nd and 1st e aux thi destination par muki didhi 
// etle aa recursion nu pattern bani jaay n disk aapi hoy (n-1) utai ne s to aux and 1 disk s ni d par and biji 2 aux par mukeli d par 

void TOH(int n ,char source,char auxillary,char destination)  
{ 
    if(n==0){
    return;
    }
    TOH((n-1) , source,destination,auxillary);
    cout<<"move disk "<<n <<" from "<< source <<" to "<< destination<<endl; //only this line will exceute when toh(1,s,a,d) as 
    // toh(0) will return nothing just this line (if n==o then return)
    TOH((n-1) , auxillary,source,destination);
  
}
int main()
{
    int n=3;
    char s,a,d;
    TOH(n,'s','a','d');
    return 0;
  
}