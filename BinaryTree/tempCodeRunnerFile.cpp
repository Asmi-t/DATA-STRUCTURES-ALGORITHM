#include <iostream>
#include <queue>
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

void buildTreeFromLevel(node* &root)
{
    queue<node*> q;
    int data;
    cout <<"Enter the data for the root" <<endl;
    cin >>data;

    root = new node(data);
    q.push(root); 

    while(!q.empty())
    {
        node* temp = q.front();
        q.pop();

        int leftData;
        cout <<"Enter the data for left  of node "<< temp->data <<endl;
        cin >>leftData;

        if(leftData != -1)
        {
            temp->left = new node(leftData);
            q.push(temp->left);
        }

        int rightData;
        cout <<"Enter the data for the right of node " <<temp->data <<endl;
        cin >>rightData ;

        if(rightData != -1)
        {
            temp->right = new node(rightData);
            q.push(temp->right);
        }

    }
}

void printFromLevel(node* root)
{
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty())
    {
        node* temp = q.front();
        q.pop();

        if(temp == NULL)
        {
            cout <<endl;
            if(!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout <<temp->data <<" ";
            if(temp->left){ q.push(temp->left); }
            if(temp->right ){q.push(temp->right);  }
        }
    }
}

int main()
{
    node* root = NULL;
    buildTreeFromLevel(root);

    printFromLevel(root);
}