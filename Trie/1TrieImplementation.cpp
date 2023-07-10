#include <iostream>
using namespace std;

class TrieNode
{
    public:
    char data;
    TrieNode* children[26];
    bool isTerminal;

    TrieNode(char ch)
    {
       data = ch;
       for(int i = 0; i<26; i++)
       {
          children[i] = NULL;
       }
       isTerminal = false;
    }
};

class Trie
{
    public:
    TrieNode * root;
    

    void insertUtil(string word , TrieNode *root)
    {
        if(word.size() == 0)
        {
            root->isTerminal = true;
            return ;
        }

        //Assuming we are doing things for CAPS 
        int indx = 'A' - word[0];

        //if character is already present
        TrieNode* child;
        if(root->children[indx] != NULL)
        {
            child = root->children[indx];
        }
        else // if character is not prensent
        {
            child = new TrieNode(word[0]);
            root->children[indx] = child;
        }
        
        insertUtil(word.substr(1), child);
    }

    void insertWord(string word)
    {
        insertUtil(word , root);
    }
 
    bool searchUtil(string word , TrieNode* root)
    {
        if(word.size() == 0)
        {
            return root->isTerminal;
        }

        int indx = 'A' - word[0];

        TrieNode* child;
        // if character is present then move ahead
        if(root->children[indx] != NULL)
        {
            child = root->children[indx];
        }
        else //if character is not present i.e word is not present
        {
            return false;
        }

        //Recursion
        return searchUtil(word.substr(1) , child);
    }
    bool searchWord(string word)
    {
        return searchUtil(word , root);
    }
     
    void removeUtil(string word, TrieNode* root)
    {
        if(word.size() == 0)
        {
            if(root->isTerminal) root->isTerminal = false;
            else cout <<"Can't Remove word is not present "<<endl;
            return;
        }

        int indx = 'A' - word[0];

        TrieNode * child;
        if(root->children[indx] != NULL)
        {
            child = root->children[indx];
        }
        else
        {
           cout <<"Can't Remove word is not present "<<endl;
           return;
        }  

        removeUtil(word.substr(1) , child);
    }

    void removeWord(string word)
    {
       removeUtil(word , root);
    } 

    Trie()
    {
        root = new TrieNode('\0');
    }
};

int main()
{
   Trie * t = new Trie;

   t->insertWord("ARM");
   t->insertWord("ARE");
   t->insertWord("DO");
   t->insertWord("TIME");
   t->insertWord("TIS");
   cout <<t->searchWord("ARE") <<endl;
   cout <<t->searchWord("ASMIT")<<endl;
   cout <<t->searchWord("DO")<<endl;
 
   t->removeWord("DO");
   cout <<t->searchWord("DO")<<endl;

}