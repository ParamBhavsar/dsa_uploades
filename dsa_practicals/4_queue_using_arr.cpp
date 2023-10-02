#include <iostream>
using namespace std;
#define MAX 100
class queue_using_arr
{
public:
    int queue[MAX];
    int rear = -1;
    int front = -1;
    void insert(int x)
    {
        if ((rear - 1) >= MAX)
        {
            cout << "overflow" << endl;
        }
        else
            queue[++rear] = x;
        if (front == -1)
        {
            front = 0;
        }
    }
    void dequeue()
    {
        int temp;
        if (front == -1 || rear == -1)
        {
            cout << "underflow" << endl;
        }
        else if (rear == 0 && front == 0)
        { // only 1 element
            front = -1;
            rear = -1;
        }
        else
            temp = queue[front++];
    }
    void search(int target)
    {
        int count=1;
        int n = front; // else if front++ instead of n++ then display which starts from front will delete incremented value
        while (n <= rear)
        {

            if (queue[n] == target)
            {
                cout << "position of target element" << target << "is " << n << endl;
                break;
            }
            n++;
            count++;
        }
        if(count>rear) // because in queue rear always greater or equals to front
        {
            cout<<"element not exist in queue"<<endl;
            return;
        }
    }
    void change(int target_positon, int new_value)
    {
        int n = front;
        while (n <= rear)
        {
            if (n == target_positon)
            {
                queue[n] = new_value;
                cout << "value is changed to that positon" << endl;
            }
            n++;
        }
    }
    void display()
    {
        cout << "[ ";
        for (int i = front; i <= rear; i++)
        {

            cout << queue[i] << ",";
        }
        cout << " ]" << endl;
    }
};
int main()
{
    queue_using_arr obj;
    int n, x, target, z, new_val;
    do
    {
        cout << "enter 1 to insert" << endl;
        cout << "enter 2 to delete" << endl;
        cout << "enter 3 to search" << endl;
        cout << "enter 4 to change" << endl;
        cout << "enter 5 to display" << endl;
        cin >> n;
        switch (n)
        {
        case 1:
            cout << "enter value to be inserted" << endl;
            cin >> x;
            obj.insert(x);
            break;
        case 2:
            cout << "element is deleted" << endl;
            obj.dequeue();
            break;
        case 3:
            cout << "enter the target element to search " << endl;
            cin >> target;
            obj.search(target);
            break;
        case 4:
            cout << "enter positon to change " << endl;
            cin >> z;
            cout << "enter new value to be changed at that positon" << endl;
            cin >> new_val;
            obj.change(z, new_val);
            break;
        case 5:
            obj.display();
            break;

        default:
            break;
        }

    } while (n < 6);
}