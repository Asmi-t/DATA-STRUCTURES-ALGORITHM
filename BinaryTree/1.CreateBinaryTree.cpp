#include <iostream>
using namespace std;

class node{
    public:
      int data;
      node* left;
      node* right;

     //Initialize the node
     node(int data)
     {
        this->data = data;
        left = NULL;
        right = NULL;
     }
};

int main()
{
    node* root = new node(2);

    cout <<root->left;
    cout <<root->right;
    cout <<root->data;
}