#include <iostream>
#include <climits>
using namespace std;

class Node
{
    public:

    int data;
    Node* next;

    Node(int d)
    {
        this->data =  d;
        this->next = NULL;
    }
};

class stack
{
    public:

    Node* top;
    
    stack(int d)
    {
       top = new Node(d);
    }

    void push(int data)
    {
        Node* temp = new Node(data);
        temp->next = top;
        top = temp;
    }

    void pop()
    {
       if(top != NULL)
         top = top->next;
       else
         cout <<"There is nothing to delete" <<endl;  
    }

    int peek()
    {
       if(top != NULL)
        return top->data;
       else
         cout<<"there is no data to show" <<endl; 
         return -1; 
    }
    
    bool empty()
    {
        if(top == NULL)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    stack st(5);
    st.push(7);
    // st.push(12);
    // st.push(34);
    
    st.pop();
   
    cout <<st.peek() <<endl;

    if(st.empty())
    {
        cout <<"Stack is empty" <<endl;
    }
    else{
        cout <<"Stack is not empty" <<endl;
    }
}