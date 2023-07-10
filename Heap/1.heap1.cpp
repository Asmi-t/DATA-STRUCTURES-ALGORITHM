#include <iostream>
using namespace std;

class Heap
{
    public:
    int arr[100];
    int size;

    Heap()
    {
        arr[0] = -1;
        size = 0;
    }

    void insert(int data)
    {
        size = size + 1;
        int indx = size;
        arr[indx] = data;
        int parentIndx = indx/2;

        while(indx > 1 && arr[parentIndx] < arr[indx])
        {
            swap(arr[parentIndx] , arr[indx]);
            indx = parentIndx;
            parentIndx = indx/2;
        }
    }

    void print()
    {
        for(int i = 1; i<=size; i++)
        {
            cout <<arr[i] <<" ";
        }cout <<endl;
    }

    void deleteParentNode()
    {
        if(size == 0)
        {
            cout <<"Nothing to delete Heap is Empty" <<endl;
            return ;
        }  
         //step1:- swap root node with it's last node
         arr[1] = arr[size];
         
         //step2:- Delete last node
         size--;
         //step3:- Place root node to it's correct position
         int curr = 1;
         
         while(curr < size)
         {
            int leftChild = curr*2;
            int rightChild = curr*2+1;
            int greater = curr;
            if(leftChild <= size && arr[leftChild] > arr[curr]) greater = leftChild;
            if(rightChild <= size && arr[rightChild] > arr[greater]) greater = rightChild;
            if(greater == curr) break;
            swap(arr[curr], arr[greater]);
            curr = greater;
         }
    }
};

void heapify(int* arr , int indx , int n)
{
     int left = indx*2;
     int right = indx*2+1;
     int largest = indx;

     if(left <= n && arr[left] > arr[largest]) largest = left;
     if(right <= n && arr[right] > arr[largest]) largest = right;

     if(largest != indx)
     {
         swap(arr[indx] , arr[largest]);
         heapify(arr , largest , n);   
     }

}

void heapSort(int* arr , int n)
{
    int size = n;
    
    
    while(size>1)
    {
        //swap first and last element
        swap(arr[1],arr[size]);
        cout <<arr[1] <<" " <<arr[size] <<endl;
        //Leave last element
        size--;

        //Heapify first element or take first element to its correct postion
        heapify(arr , 1 , size);
    }
}

int main()
{
      Heap hp;

      hp.insert(60);
      hp.insert(50);
      hp.insert(40);
      hp.insert(30);
      hp.insert(20);
      hp.insert(14);
      hp.insert(55);
      hp.insert(70);
      hp.print();
      hp.deleteParentNode();
      hp.print();

     // Heapify Algorithm
    //  int arr[10] = {-1,54,53,55,52,50};
         int arr[10] = {-1,8,4,1,5,1,5,5,4};

     int n = 8;
     
     for(int i = 1; i<=n/2; i++)
     {
        heapify(arr , i , n);
     }

     for(int i = 1; i<=n; i++)
     {
        cout <<arr[i] <<" ";
     }cout <<endl;


     //Heap Sort
     heapSort(arr , n);
     for(int i = 1; i<=n; i++)
     {
        cout <<arr[i] <<" ";
     }cout <<endl;


}