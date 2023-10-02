
#include <iostream>
#include <stack>
using namespace std;
class infixtopostfix
{
    public:
    int prec(char c)
    {
        if(c=='+'||c=='-')
        return 1;
         if(c=='*'||c=='/')
        return 2;
         if(c=='^')
        return 3;
        else return 0;
    }
    string inf_to_post(string infix)
    {
        stack<char> st;
        st.push('#');
        string postfix="";
        string invalid="invalid";
        int rank;
        string::iterator next; //next pointer will point the infix string 
        for( next = infix.begin() ; next!=infix.end();next++)
        {
            if(isalnum(*next)) //implicit conversion of next pointer to char is imp here
            {
                postfix+=*next;
            }

            else if(*next=='('||*next=='{'||*next=='[')
            st.push(*next);

            else if(*next=='^')
            st.push('^');

            else if (*next==')')
            { 
                while(st.top()!='(')
                {
                    postfix+=st.top(); // append whats in stack untill it reaches '('
                    st.pop();
                }
                st.pop();  //as closing  bracket'(' will overiden by next pointer after condition ends and next incerement 
                // this will popout already pushed opening bracket')' from the stack
                }
/*same thing again */else if (*next=='}')
            {
                while(st.top()!='{')
                {
                    postfix+=st.top();
                    st.pop();
                }
                st.pop();
            }
/*same thing again */else if (*next==']')
            {
                while(st.top()!='[')
                {
                    postfix+=st.top();
                    st.pop();
                }
                st.pop();
            }
            else 
            {
                if(prec(st.top())<prec(*next))
                {
                    st.push(*next);
                }
                else
                {
                    while (prec(st.top())>=prec(*next))
                    {  // divison is in stack now * comes in next so append / and pop out / from stack
                        postfix += st.top();
                        st.pop();
                    }// but still * is in next not in stack so if loop ends next pointer will overide *
                    // but * is now eligible to be in stack as per now prec(next)>prec(st.top)
       /*!imp  */       st.push(*next);// so we push that element 
                }
            }

            
        }// now infix string is over and reached at null pointer so pop and append remaining from the stack
        while(st.top()!='#')
        {
            postfix+=st.top();
            st.pop();
        }
        return postfix;
    }
    
};
int main ()
{
    infixtopostfix obj;
    string infix="a+b/c(x^d)*z";
     cout<<"infix is: "<<infix<<endl;
    cout<<"infix to postfix is: "<<obj.inf_to_post(infix)<<endl;
    return 0;
}

    
