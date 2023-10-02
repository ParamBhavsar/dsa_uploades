#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

// IMP ALL THIS FUNCTION WILL BE SIMILAR TO OTHER CONTAINERS AS WELL

void explain_vector_fn()
{
    vector<int>v;
     v.push_back(1); //v.begin()
     v.push_back(2);
     v.push_back(3);
     v.push_back(4);
     v.push_back(5);
    
     //v={1,2,3,4,5}
     v.erase(v.begin()+1);  //v={1,3,4,5} 
     v.erase(v.begin()+1,v.begin()+2); //v={1,5}
    
    // it will insert 2 at v.begin()+1 ie after 1
    v.insert(v.begin()+1,2); //v={1,2,5}
    v.insert(v.begin()+2,3); //v={1,2,3,5}
    v.pop_back(); // will delete last element ie 5 v={1,2,3}
    v.pop_back(); //v={1,2}

    vector<int>v2(5,10); // insert another vector {of size 5 of instsnce 10}
    v.insert(v.begin(),v2.begin(),v2.end()); //at begin of v add begin of v2 upto end of v2
    
    for (auto it=v.begin();it!=v.end();it++)
    {
        cout<<*it<<endl;
    }
    //to swap 2 vector not elements
    //v={1,2,3} v2={10,10,10,10,10}
    v.swap(v2);  //now v={10,10,10,10,10}  v2={1,2,3}
    cout<<"size of vector is :"<<v.size()<<endl;
    v.clear(); //clears entire vector
    cout<<v.empty()<<endl; // gives 1 if empty else 0
    cout<<v2.empty()<<endl; // 0 as not empty
}
int main()
{
    explain_vector_fn();
    return 0;
}