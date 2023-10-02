#include <iostream>
using namespace std;

void explain_pair()
{
    pair<int,int>pair_name ={1,2};

    cout<<"fisrt int in pair:"<<pair_name.first<<endl;
    cout<<"second int in pair"<<pair_name.second<<endl;

    //pair in pair nested pair
    pair<int,pair<int,int>>pair_name1={1,{2,3}};

    cout<<"fisrt int in 1st pair:"<<pair_name1.first<<endl;
    cout<<"first int in 2nd pair"<<pair_name1.second.first<<endl;
    cout<<"second int in 2nd pair"<<pair_name1.second.second<<endl;

    // pairs in array index
    // {1,2} at 0 indx {3,4} at 1 indx of arr
    pair<int,int>arr[]={{1,2},{3,4},{5,6} };
    cout<<arr[1].second;  // second element of indx 1

}
int main()
{
    explain_pair();
    return 0;
}