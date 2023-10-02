#include <iostream>
#include <list>
#include <deque>

using namespace std;
void explain_list()
{
    //similar to that of vector but here we can push_front
    // whereas in vector we have to insert
    //insert fn in vector takes hell lot of time than push_front so its costly
    list<int>ls;
    ls.push_back(1); //{1}
    ls.push_back(2); //{1,2}
    ls.push_front(3); //{3,1,2,}

    // rest fn are same as vector
}
void explain_dequee()
{ 
    //similar to that of list and same fn as that of vector
    deque<int>dq;
    dq.push_back(1); //{1}
    dq.push_back(2); //{1,2}
    dq.push_front(3); //{3,1,2,}
}

