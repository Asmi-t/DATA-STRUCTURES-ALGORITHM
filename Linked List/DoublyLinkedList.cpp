#include <iostream>
using namespace std;

class node
{
 public :
   int data;
   node* prev;
   node* next;
   //Cnstructor to initialize
   node(int d)
   {
     data = d;
     prev = NULL;
     next = NULL;
   }   
   //Destructor to deallocate the memory
   ~node()
   {
     delete prev;
     delete next;
     cout <<"Node is deleted for the data " << data <<endl;
   } 
};


void InsertAtTail(int d, node* &tail)
{
    node* temp = new node(d);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}


void InsertAtHead(int d , node* &head)
{
    node* temp = new node(d);
    temp->next = head;
    head->prev = temp;
    head = temp;
}

//Insert the data at any position p
void InsertAtPosition(int d , int p ,node* &head, node* &tail)
{  
    if(p == 1)
    {
        InsertAtHead(d , head);
        return;
    }
    int cnt = 1;
    node* prevNode = head;
    while(cnt < p - 1)
    {
        prevNode = prevNode->next;
        cnt++;
    } 

    if(prevNode->next == NULL)
    {
       InsertAtTail(d , tail);
       return;
    }
    
    node *temp = new node(d);
    temp->prev = prevNode;
    temp->next = prevNode->next;
    prevNode->next->prev = temp;
    prevNode->next = temp;
    
}

void print(node* head)
{
   if(head == NULL)
   {
      cout <<"LL is empty" <<endl;
   }
   else
   {
      while(head != NULL)
      {
        cout <<head->data <<" ";
        head = head->next;
      }
   }
  
} 

void deleteNode(int p , node* &head)
{
    if(p == 1)
    {
        node* curr = head;
        head = head->next;
        head->prev = NULL;
        curr -> prev = NULL;
        curr -> next = NULL;
        delete curr;
    }
    else
    {
        node* curr = head;
        node* prev = NULL;
        int cnt;
        while(cnt < p)
        {
            prev = curr;
            curr = curr -> next;
            cnt++;
        }

        curr->next->prev = prev->next;
        prev->next = curr->next;
        curr->next = NULL;
        curr->prev = NULL;
        delete curr;
    }
}

int main()
{
    node *n1 = new node(2);
  
    node *head = n1;
    node *tail = n1;

    InsertAtTail(12, tail);
    InsertAtTail(64, tail);
    InsertAtTail(34, tail);
    InsertAtTail(13, tail);
    print(head);
 
    cout <<endl;
    InsertAtPosition(50 , 3 ,head , tail);
    print(head);

    deleteNode(2, head);
    print(head);
  
}