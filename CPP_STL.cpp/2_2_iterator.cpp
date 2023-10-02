#include <iostream>
#include <vector>
#include <iterator>
using namespace std;


void explain_iterator(){
//using auto will automatically decalre the variable when assign the value eg:-
     auto a=5;  // will assign a to int and stores 5
     auto ch={'param'}; //will assign ch to string and stores value param
     vector<int>v;
     v.push_back(1); //v.begin()
     v.push_back(2);
     v.push_back(3);
     v.push_back(4);
     v.push_back(5); //v.back()    {1,2,3,4,5}v.end() points at end not last element

    // iterator stores the memeory address so to acces element we write*it_name
    // to initialie iterator vector<data-type>::iterator it_name; 
    // here v={1,2,3,4,5}
    vector<int>::iterator itr =v.begin();//stores memory address of element which is at begin
    //so to access elements from address like ptr we use*
    cout<<*itr<<endl; itr++; cout<<*itr<<endl;
    // itr= v.end();  will not point last , end() will Returns an iterator to the theoretical element after the last element.
    // itr= v.back(); will store memeory of last element
    
    // on assig. it to v.begin auto will automatically declare it as iterator 
     for(auto it=v.begin();it!=v.end();it++)
     { 
        cout<<*(it)<<endl;
        
     }
}
int main()
{
    explain_iterator();
}