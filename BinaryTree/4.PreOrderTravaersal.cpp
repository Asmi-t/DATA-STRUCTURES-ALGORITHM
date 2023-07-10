#include <iostream>
using namespace std;

class node{
public:    
   int data;
   node* left;
   node* right;

   //Constructor initialize the node
   node(int data)
   {
      this->data = data;
      left = NULL;
      right = NULL;
   }
};

node* buildTree(node *root)
{
     int data;
     cout <<"Enter the data" <<endl;
     cin >>data;

     root = new node(data);

     if(data == -1){return NULL;}

     cout <<"Enter the data that will be insert to the left of the node with data" <<data <<endl;
     root->left = buildTree(root->left);

     cout <<"Enter the data that will be insert to the right of the node with data" <<data <<endl;
     root->right = buildTree(root->right);

     return root;
}

void preOrder(node* root)
{
    //PreOrder means NLR

    if(root == NULL){return ;}
    cout <<root->data <<" ";
    preOrder(root->left);
    preOrder(root->right);

}

int main()
{
    node* root = NULL;
    root = buildTree(root);

    preOrder(root);
}