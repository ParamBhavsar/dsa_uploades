#include <iostream>
using namespace std;

class stacks
{
private:
    int n;
    int stack[5];
    int top = -1, indx, new_val;
    int value;

public:
    void push()
    {
        if (top >= 4)
        {
            cout << "overflow of stack" << endl;
        }
        else
        {
            top = top + 1;
            cout << "enter your element to push" << endl;
            cin >> value;
            stack[top] = value;
        }
    }
    void pop()
    {
        if (top == -1)
        {
            cout << "stack is underflow" << endl;
        }
        else
        {
            stack[top] = 0;
            top = top - 1;
            cout << "element is deleted" << endl;
        }
    }
    void peep()
    {
        cout << "enter the postion to peep" << endl;
        cin >> indx;
        if (top - indx + 1 < 0) // <0 when top is at -1 if top at 0 then<=0
        {
            cout << "invalid or underflow" << endl;
        }

        else
        {
            cout << stack[top - indx + 1] << endl;
        }
    }
    void change()
    {
        cout << "enter the postion to change the element" << endl;
        cin >> indx;
        if (top - indx + 1 < 0)
        {
            cout << "invalid or underflow" << endl;
        }

        else
        {
            cout << "enter new element for that positon" << endl;
            cin >> new_val;
            stack[top - indx + 1] = new_val;
            cout << stack[top - indx + 1] << endl;
        }
    }
    void display()
    {
        if (top == -1)
        {
            cout << "stack is underflow" << endl;
        }

        else
        {
            for (int i = top; i >= 0; i--)
            {
                cout << stack[i] << endl;
            }
        }
    }
};
int main()
{
    int key, ch;
    stacks obj;
    do
    {
        cout << "press following keywords to perform operations" << endl;
        cout << "1-to push" << endl;
        cout << "2-to pop" << endl;
        cout << "3-to peep" << endl;
        cout << "4-to change" << endl;
        cout << "5-to display" << endl;
        cout << "6-to exit" << endl;
        cout << "press your key: ";
        cin >> key;

        switch (key)
        {
        case 1:
            obj.push();
            break;

        case 2:
            obj.pop();
            break;

        case 3:
            obj.peep();
            break;

        case 4:
            obj.change();
            break;

        case 5:
            obj.display();
            break;
        }

    } while (key != 6);
}