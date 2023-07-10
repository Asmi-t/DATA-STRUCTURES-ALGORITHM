#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    node(int data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

node* buildTree(node* root)
{
   int data;
   cout <<"Enter the data" <<endl;
   cin >>data;

   if(data == -1){ return NULL; }

   root = new node(data);

   cout <<"Enter the data that will be in the left of " <<data <<endl;
   root->left = buildTree(root->left);

   cout <<"Enter the data that will be in the right of " <<data <<endl;
   root->right = buildTree(root->right);

   return root;
}

void inorder(node* root)
{
    //Inorder means LNR

    if(root ==  NULL){return ;}
    inorder(root->left);

    cout <<root->data <<" ";

    inorder(root->right);
    return ;
}


int main()
{
    node* root = NULL;
    root = buildTree(root);    

    inorder(root);
}