#include<iostream>
#include <queue>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int d)
    {
       this->data = d;
       this->left = NULL;
       this->right = NULL;
    }
};

void levelOrderTraversal(Node* root)
{
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty())
    {
        Node* front = q.front();
        q.pop();

        if(front == NULL)
        {
            //Old level is completed let's start new level
            cout <<endl;
           //if queue has still some child
            if(!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {   
            cout <<front->data<<" ";
            if(front->left)
            {
                q.push(front->left);
            }
            if(front->right)
            {
                q.push(front->right);
            }    
        }
    }
}

void preOrder(Node* root)
{
    if(!root) return ;
    //Preorder --> NLR
    cout <<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

void inOrder(Node* root)
{
    if(!root) return ;
    inOrder(root->left);
    cout <<root->data<<" ";
    inOrder(root->right);
}

void postOrder(Node* root)
{
    if(!root) return ;

    postOrder(root->left);
    postOrder(root->right);
    cout <<root->data <<" ";
}

Node* minVal(Node* root)
{
    while(root->left) root = root->left;
    return root;
}

Node* deleteNode(Node* root , int key)
{
    //base case
    if(!root) return NULL;
    if(root->data == key)
    {
          //zero child
          if(!root->left && !root->right)
          {
              delete root;
              return NULL;
          } 
          //one child
          if(!root->left && root->right) //right child
          {
              Node* temp = root->right;
              delete root;
              return temp;
          }
          if(root->left && !root->right) //left child
          {
             Node* temp = root->left;
             delete root;
             return temp; 
          }
          
          //two child
          if(root->left && root->right)
          {
              int minRight = minVal(root->right)->data;
              root->data = minRight;
              root->right = deleteNode(root->right , minRight);
              return root;
          }
          return root;
    }
    else if(key > root->data)
    {
        root->right = deleteNode(root->right , key);
        return root;
    }
    else
    {
        root->left = deleteNode(root->left , key);
        return root;
    }
}
Node* insertIntoBST(Node* root , int data)
{
    if(!root)
    {
       root = new Node(data);
       return root;
    } 
    
    if(data > root->data)
    {
        root->right = insertIntoBST(root->right , data);    
    }
    else
    {
        root->left = insertIntoBST(root->left , data);
    }
    return root;
}

void takeInput(Node* &root)
{
    int data;
    cin >>data;

    while(data != -1)
    {
        root = insertIntoBST(root , data);
        cin >>data;
    }
    
}


int main()
{
    Node* root = NULL;

    cout <<"Enter the data as an input to BST "<<endl;

    takeInput(root);

    // cout <<minVal(root)->data <<endl;
    deleteNode(root , 7);
    // cout <<root->data<<endl;
    levelOrderTraversal(root);
    cout <<"pre Order -> ";
    preOrder(root);
    cout <<endl;

    cout <<"In order -> ";
    inOrder(root);
    cout <<endl;    

    cout <<"Post order -> ";
    postOrder(root);

}