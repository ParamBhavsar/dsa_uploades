#include <iostream>
using namespace std;

// In C++ programming, this is a keyword that refers to the current instance of the class. There can be 3 main usage of this keyword in C++.
//It can be used to pass current object as a parameter to another method.
//It can be used to refer current class instance variable.
//It can be used to declare indexers.  eg class employee in which int age , name are private so we create constructor employee(int input_age , input_string name){this->age=input_age; this->string=input_string }// in this way we can acess private members of class 
class node 
{   
    public:
    int data;
    node *next; // next pointer of type node is created

    
    node(int given_data)    // this is constructor of node class whenever new node (data) is passed this constructor is called 
    {
        this->data=given_data;
        this->next=nullptr; //next is automatically assigned to nullptr
    }
};

//The Dot(.) operator is used to normally access members of a structure or union. The Arrow(->) operator exists to access the members of the class using pointers
//eg class employee in which int age , name => employee *emp = new employee [obj. created with memory allocated ; emp->age =18; [we access age using ptr]

class linked_list
{
    node *head; //created head ptr of type node // so to access head we use ->(arrow) as pointer of type class node 
    public:
    linked_list() //so whenever we create the calss of linked list head will automatically points to nullptr
    {
        this->head=nullptr; // head is currently pointing to null
    }
    void insert_at_beginning(int input_data)
    {   // see this is a significance of using new we dont need to create an obj in main fn ,
        // but on creating new node it will call the constructor node(int given_data) 
        //new will return the memory address of node in which we input_data and that address needs to be taken by new_node of same type ie. node
        node *new_node =new node(input_data); // inshort will allocate the memory of node to new_node
        // means a new node is created and taken by ptr of type node named new_node and have data as x and next ptr as null , look at constructor of node to see how
        new_node->next=head; // head's address will now be stored in next of new_node
        head=new_node;    // now overall address of new_node will be fetched by head and head will now point to new_node
    }
    
   
    void insert_at_end(int input_data)
    {
        node *new_node = new node(input_data);// constructor of node called data is assigned to input_data and next ptr to nullptr
        // also new gives memory address of type node which is recived by pointer of same type node named new_node
        if(head==nullptr) //  if no element present head=nullptr
        {
            head=new_node;  // so giving value of new_node to head
            return;
        }
        node *temp=head;
        while (temp->next!=nullptr)
        {
            temp=temp->next;  // traverse through linked_list and make temp point to last node 
        }
        temp->next=new_node;  // giving address(value) of new_node to temp->next(means next of where temp is currently pointing) so new_node is added at end
        

    }


    void show()
    {
        node *temp=head;  //temp ptr is of type node which is set to head means both head and temp now points at first node
        while (temp!=nullptr)
        {
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        
    }
    
     // note:-  head is 100 pointing to (N1 of 100 address and next of 200) -> (N2 of 200 address and next of 300)->(N3 of 300 address and next of nullptr)
    // so head gives 100 but head->next will point to 200 and head=head->next will set head = 200 so now head will point to N2 and N1 is no further pointend by head
    // further head=head->next will set head = 300 and head will now point to N3 
    // further head=head->next will set head = nullptr and head will now be not pointing to any node
    void delete_at_beginning()
    {
        if(head==nullptr) // if no element present head=nullptr
        {
            return;
        }
        head=head->next; // head->next means next of which head is pointing and that value will be setted to head
    }
    
    void delete_at_end()
    {
        if(head==nullptr)  // for no element head == nullptr
        {
            return;
        }
        if(head->next==nullptr) // for only one element present 
        {
            head=nullptr;
            return;
        }
        node *temp =head;
        while(temp->next->next!=nullptr)
        {
            temp=temp->next;
        }
        temp->next=nullptr;
    }
    
    void search(int target)
    {
        int i=0;
        if(head==nullptr)
        {
            return;
        }
        if(head->next==nullptr)
        {
            cout<<"your element "<<target<<" is at positon :"<<(i+1)<<endl;
        }
        node *temp = head;
        while(temp!=nullptr)  // imp here not temp->next!=nullptr but temp!=nullptr
        {
            if(temp->data==target)
            {
                cout<<"your element "<<target<<" is at positon :"<<(i+1)<<endl;
            }
            else
            i++;
            temp=temp->next; 
        }
    }
};
int main()
{
    linked_list ll;
    ll.insert_at_beginning(10);
    ll.insert_at_beginning(1);
    ll.insert_at_end(2);
    ll.insert_at_end(3);
    ll.insert_at_end(4);
    ll.show();
    cout<<""<<endl;
    ll.delete_at_end();
    ll.delete_at_beginning();
    ll.show();
    cout<<""<<endl;
    ll.search(3);
    ll.search(10);
    
    

}