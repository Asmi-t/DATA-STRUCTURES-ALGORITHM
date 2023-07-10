#include <iostream>
#include <queue>
#include <stack>
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

void ReverseLevel(node* root)
{
    queue<node*> q;
    stack<node*> st;
    q.push(root);
    q.push(NULL);

    while(!q.empty())
    {
        node* temp = q.front();
        q.pop();

        if(temp == NULL)
        {
           st.push(NULL);
           if(!q.empty())
           {
             q.push(NULL);
           }
        }
        else
        {
            st.push(temp);
            if(temp->left){q.push(temp->left); }
            if(temp->right){q.push(temp->right); }
        }
    }

   while(!st.empty())
   {
      if(st.top() == NULL){ cout <<endl; }
      else{ cout <<st.top()->data <<" ";  }
      st.pop();
   }
     

}

int main()
{
    node *root = NULL;

    root = buildTree(root);
    ReverseLevel(root);
}