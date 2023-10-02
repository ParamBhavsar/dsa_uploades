#include <iostream>
#include <stack>
using namespace std;
//LIFO --> last in first out
void expalin_stack()
{
    stack<int> st;
    st.push(1);//{1}
    st.push(2);//{2,1}
    st.push(3);//{3,2,1}
    st.push(4);//{4,3,2,1}
    st.push(5);//{5,4,3,2,1}

    cout<<st.top()<<endl; // prints 5
    st.pop(); //deletes element from top ie 5
    st.pop(); //{3,2,1}
    cout<<"size of stack: "<<st.size()<<endl;
    // to print the stack
    while(!st.empty())
    {
        cout<<st.top()<<endl;
        st.pop(); //will pop out element from top after print
    }
}

int main()
{
    expalin_stack();
}
