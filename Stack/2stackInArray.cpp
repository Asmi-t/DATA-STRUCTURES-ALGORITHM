#include <iostream>
using namespace std;

class Stack
{
  public:
  // Behaviours
  int* arr;
  int size;
  int top;

//Member functions
  //Constructor
  Stack(int size)
  {
    this->size = size;
    arr = new int[size];
    top = -1;
  }

  void push(int element)
  {
     if(size - top > 1)
     {
        top++;
        arr[top] = element;
     }
     else{
        cout <<"there is no space to store more element" <<endl;
     }
  }
  
  void pop()
  {
     if(top >= 0)
     {
        top--;
     }
     else
     {
        cout <<"There is no element to delete" <<endl;
     }
  }

  int peak()
  {
     if(top >= 0)
     {
        return arr[top];
     } 
     else
     {
        cout <<"Any element is not present" <<endl;
        return -1;
     }
  }

  bool isEmpty()
  {
    if(top >= 0)
    {
        return false;
    }
    else
    {
        return true;
    }
  }
};

int main()
{
    Stack st(10);

    st.push(2);
    st.push(56);
    st.push(36);
    st.push(23);
  
    st.pop();
  
    cout<<st.peak() <<endl;

    if(st.isEmpty())
    {
        cout <<"Hamara stack to empty hai"<<endl;
    }
    else
    {
        cout <<"Kuch to hai hamare stack me" <<endl;
    }
}