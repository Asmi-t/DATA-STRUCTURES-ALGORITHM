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
      rear = -1;
   }
   //Functions

  //for inserting element
  void push(int data)
  {
    if((front == 0 && rear == size-1) || (rear == front-1) && rear != -1)
    {
       cout <<"Array is full" <<endl;
    }
    else
    {
       rear++;
       if(rear < size){arr[rear] = data;}
       else if(rear == size){rear = 0; arr[rear] = data;}
    }
  }

   //For deleting element
 int pop()
 {
    if(rear == -1)
    {
      return -1;
    }
    else if(rear == front)
    {
      int ans = arr[front];
      rear = -1;
      front = 0;
      return ans;
    }
    else{
     int ans = arr[front];
     front++;
     return ans;
    }
 }

  //return front element
 int Qfront()
 {
   if(rear == -1)
   {
      return -1;
   }
   else{
      return arr[front];
   }
 }

  //Is Empty
 bool isEmpty(){ 
     if(front == -1)
     {
       return true;
     }
    else{return false;}
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