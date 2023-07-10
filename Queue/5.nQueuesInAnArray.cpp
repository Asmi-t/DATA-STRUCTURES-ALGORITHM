#include <iostream>
using namespace std;

class nQueue{
    private:
      int *arr;
      int *next;
      int *front;
      int *rear;
      int freespot;

     public:
      nQueue(int n , int k)// n -> size of the array , k -> No of queue
      {
          arr = new int[n];
          next = new int[n];
          for(int i = 0; i<n; i++)
          {
              next[i] = i+1;
          }
          next[n-1] =  -1;
          front = new int[n];
          rear = new int[n];
          for(int i = 0; i<n; i++)
          {
              front[i] = -1;
              rear[i] = -1;
          }
          freespot = 0;
      }

     void enqueue(int x, int qn)
     {
         if(freespot == -1)
         {
            cout <<"Space is not available you can't enque"<<endl;
            return ;
         }
         
         int index = freespot;
         freespot = next[index];

        if(front[qn-1] == -1)//if first element is going to be inserted then updating front
        {
            front[qn-1] = index;
        }
        else // if more element is going to be inserted then linking rear with new element 
        {
            next[rear[qn-1]] = index;
        }

        //updating next that the index is allocated
        next[index] = -1;

        //updating rear
        rear[qn-1] = index;
        
        //inserting element
        arr[index] = x;
     }

     int deque(int qn)
     {
        //if no element present in qn then return -1 because we cannot delete anything
        if(front[qn-1] == -1)
        {
            cout <<"Queue " <<qn <<" is empty" <<endl;
            return -1;
        }     
        
        int index = front[qn-1];
        front[qn-1] = next[index];

        //utilizing the current deleted free space
        next[index] = freespot;
        freespot =  index;

        return arr[index];
     }



};




int main()
{
    nQueue q1(10, 2);
    q1.enqueue(4,1);
    q1.enqueue(3,1);
    q1.enqueue(1,1);
    

    cout <<q1.deque(2) <<endl;
    cout <<q1.deque(1) <<endl;
    cout <<q1.deque(1) <<endl;
    cout <<q1.deque(1) <<endl; 
    cout <<q1.deque(3) <<endl;  
}