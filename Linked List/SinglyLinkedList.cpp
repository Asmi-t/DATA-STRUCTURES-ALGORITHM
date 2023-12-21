#include <iostream>
#include<map>
using namespace std;

class node
{
  public  :  
    int data;
    node *next;

    //Constructor
    node(int data)
    {
       this->data = data;
       this->next = NULL;  
    }
    //Destructor
    ~node()
    {  
        
        delete next;
        cout <<"Destructor executed for the data "<<data<<endl;
        
    }

};

//Insert the data d at tail
void InsertAtTail(int d, node* &tail)
{
    node *temp = new node(d);
    tail->next = temp;
    tail = temp;
}

//Insert the data d at head
void InsertAtHead(int d , node* &head)
{
    node* temp = new node(d);
    temp->next = head;
    head = temp;
}

//Insert the data at any position p
void InsertAtPosition(int p ,int d, node* &head,node* &tail)
{  
    //Insert at first positon
    if(p == 1)
    {
        InsertAtHead(d , head);
        return ;
    }
   
    node* prev = head;
    int i = 1; 
    while(i<p-1)
    {
        prev = prev->next;
        i++;
    }
    //Insert at last  position
    if(prev->next == NULL)
    {
        InsertAtTail(d , tail);
        return;
    }

    node* temp = new node(d);
    temp->next = prev->next;
    prev->next = temp;
     
}

void print(node *head)
{
   if(head == NULL)
   {
    cout <<"List is empty" <<endl;
   }
   
    while(head != NULL)
    {
       cout <<head->data<<" ";
       head = head->next;
    }
} 

void DeleteNodeAtPosition(int p , node* &head )
{
    if(p == 1) //Deletion for positioin 1
    {
        node *curr = head;
        head = head ->next;

        curr->next = NULL;
        delete curr;
    }
    else //Deletion for position middle or last i.e for >1
    {
      node* curr = head;
      node* prev = NULL;

      int cnt = 1;
      while(cnt < p)
      {
        prev = curr;
        curr = curr->next;
        cnt++;
      }

      prev->next = curr->next;
      curr->next = NULL;
      delete curr;
    }
}

node* FloydsLoopFinder(node* head)
{
   if(head == NULL )
   {
      return NULL;
   }

   node* slow = head;
   node* fast = head;

  while(slow != NULL && fast != NULL)
  {
    fast = fast->next;
    if(fast != NULL)
    {
        fast = fast->next;
    }
    slow = slow->next;

    if(fast == slow) //yes there is a loop of linked list
    {
        return slow;  //or fast
    }
  }
   
    
        return NULL; //we didn't get a loop
    
}

bool DetectLoop(node* head)   //   Detect loop by map
{
   map<node* ,bool> visited;

   while(visited[head] != true)
   {
      visited[head] = true;

     if(head == NULL)
     {
      return false;
     }
     head = head->next;
   }
   return true;
}

node *StaringNodeofLoop(node* head)
{
      node* intersection = FloydsLoopFinder(head);
      while(head != intersection)
      {
           head = head->next;
           intersection = intersection->next;
      }
      return head;
}

void RemoveFromLoop(node* startingNodeofLoop ){

    node* temp = startingNodeofLoop->next;

    while(temp->next != startingNodeofLoop)
    {
        temp = temp->next;
    }
     
   temp->next = NULL;  
}

int main()
{
    node *node1 = new node(3);
    
   
    node* head = node1; //Head is pointing to the node1
    node* tail = node1; // tail is also pointing to the node 1
 
    // cout <<node1 -> data << " " <<head -> data <<" " <<tail -> data<<endl;

   // Insert data at tail
   InsertAtHead(5,head);
   InsertAtHead(9, head);
   InsertAtHead(2, head);
   InsertAtHead(7, head);
   print(head);
   cout <<endl;

   InsertAtPosition(3 ,40 , head, tail);
   print(head);
   cout <<endl;

   node* dta = tail->next;
   tail->next = head;
   cout <<tail->next<<endl;
   cout <<dta<<endl;


//    DeleteNodeAtPosition(4 , head); 
 
//  tail->next = head->next->next;   //makeing a loop

// if(FloydsLoopFinder(head)){
//     cout <<"LOOP IS PRESENT " <<endl;
// }
// else{
//     cout <<"LOOP IS NOT PRESENT" <<endl;
// }

// node* starting_node_of_loop = StaringNodeofLoop(head);

// cout <<"Starting node of loop has data = "<<starting_node_of_loop->data <<endl;

//  RemoveFromLoop(starting_node_of_loop);
//  print(head);  

}