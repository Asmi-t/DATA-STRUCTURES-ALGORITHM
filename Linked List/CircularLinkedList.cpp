#include <iostream>
using namespace std;

class Node 
{
    public :
    
    int data;
    Node* next;

    //Constructor
    Node(int d)
    {
        data = d;
        next = NULL;
    }
};

void InsertNode(int d, Node* &tail)
{
     Node* temp = new Node(d);
     temp -> next = tail->next;
     tail->next = temp;
     tail = temp;
}

void print(Node* &tail)
{
    if(tail == NULL)
    {
        cout <<"List is empty "<<endl;
    }
    Node* n = tail;
    do{
        cout <<n->data<<" ";
        n = n->next;
    }
    while(n != tail);
}
int main()
{
   Node* n1 = new Node(1);
   n1->next = n1;
   Node* tail = n1;

   InsertNode(4 , tail);
   InsertNode(9 , tail);

   print(tail);

}