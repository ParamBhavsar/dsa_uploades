#include <iostream>
#include <vector>
using namespace std;

void explain_vector()
{
    // vector<data_type>vector_name;
    vector<int>v;
    v.push_back(1); //Adds an element to the the vector
    v.emplace_back(2); //more convinient than push_back

    vector<int>v2(5,100); // here we create container with size 5 all have value 100 
    // here as vector is dynamic we want to add element to v2 even though full in size it add up as dynamic
    v2.push_back(111);
    int n=0; while (n<7){
    cout<<v2[n]<<endl;
    n++;
    }

    // to copy vector
    vector<int>v3(v); //now v3 have instance/elements same as v
  
    for (int i=0 ; i<2 ;i++)
    {
       cout << v[i]<<endl;
    }
    
}
int main()
{
    explain_vector();
}