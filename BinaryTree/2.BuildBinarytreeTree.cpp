#include <iostream>
#include <queue>
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

node* buildTree(node* root)
{
     int data;
     cout <<"Enter the data "<<endl;
     cin >> data;

    // Creating new node with the given data
    root = new node(data);
    
    //if the given data  == -1 i will assume is an null input
    if(data == -1)
    {
        return NULL;
    }

    //Taking left data and right data
    
    cout <<"Enter the element that will be inserted to the left of "<<data <<endl;
    root->left = buildTree(root->left);

    cout <<"Enter the data that will be inserted to the right of the "<<data <<endl;
    root->right = buildTree(root->right);

    return root;
}

void levelOrderTraversal(node* root) {
   queue<node*> q;
   q.push(root);
   q.push(NULL);

   while(!q.empty())
   {
     node* temp = q.front();
     q.pop();

     if(temp == NULL)//Completed the level go to next line
     {
        cout <<endl;
        if(!q.empty())//queue still have some child node
        {
           q.push(NULL);
        }
     } 
     else //print the nodes and insert the element of child nodes
     {
        cout <<temp->data <<" ";

        //Insert the left child node
        if(temp->left)
        {
            q.push(temp->left);
        }
        //Insert the right child node
        if(temp->right)
        {
            q.push(temp->right);
        }
     }

   }

}

int main()
{
    // node* root = new node(2);
    node* root = NULL;

   root = buildTree(root);

   levelOrderTraversal(root);
}