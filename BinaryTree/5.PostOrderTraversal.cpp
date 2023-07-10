#include <iostream>
using namespace std;

class node{
public:    
    int data;
    node* left;
    node* right;

    //Constructor to initialize the data with data left and right with NULL
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
    
    if(data == -1) {return NULL;}
  
    root = new node(data);

    cout <<"Enter the data that will be insert to the left of the " <<data <<endl;
    root->left = buildTree(root->left);

    cout <<"Enter the data that will be inserted to the right of the " <<data <<endl;
    root->right = buildTree(root->right);

    return root;
}

void postOrder(node *root)
{
    //postOrder is  LRN

    if(root == NULL){return ;}
    postOrder(root->left);
    postOrder(root->right);
    cout <<root->data <<" ";
}

int main()
{
    node *root = NULL;

    root = buildTree(root);
    postOrder(root);
}