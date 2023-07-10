#include <iostream>
using namespace std;

class queue{
private:
   int* arr;
   int size;
   int front;
   int rear;

public:
//Initializing using constructor
   queue()
   {
      size = 1000005;
      arr = new int[size];
      front = 0;
      rear = 0;
   }
   //Functions

  //for inserting element
   void push(int data)
   {
       if(rear == size)
       {
         cout <<"Queue is full you cannor insert any data" <<endl;
       }
       else
       {
         arr[rear] = data;
         rear++;
       }
   }

   //For deleting element
   int pop()
   {
      if(front == rear)
      {
         return -1;
      }
      else
      {
        int ans = arr[front];
        front++;
        if(front == rear)
        {
            front = 0;
            rear = 0;
        }
        return ans;
      }
   }

  //return front element
  int Qfront()
  {
    if(front == rear)
    {
        return -1;
    }
    else{
        return arr[front]; 
    }
  }

  //Is Empty
  bool isEmpty()
  {
    if(front == rear) {return 1;}
    else {return 0;}
  }
};

int main()
{
    
    queue q;
    q.push(4);
    q.push(7);

    cout <<q.Qfront() <<endl;
    q.pop();

    if(q.isEmpty())
    {
        cout <<"Queue is empty" <<endl;
    }
    else
    {
        cout <<"Queue is not empty" <<endl;
    }

    cout <<q.Qfront() <<endl;
    q.pop();
    if(q.isEmpty())
    {
        cout <<"Queue is empty" <<endl;
    }
    else
    {
        cout <<"Queue is not empty" <<endl;
    }

}