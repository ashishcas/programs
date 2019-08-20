#include<bits/stdc++.h>



using namespace std;

//  unordered_map < int , int > um;


struct Node
{
    int data;
    struct Node* left, * right;
};

void topView(struct Node *root)
{
    if(root == NULL)
        return;




    queue< pair< Node* , int> > q;


   q.push(make_pair(root,0));

             unordered_map< int,int > m;

   while(!q.empty())
   {
        pair<Node*,int> p;
        // queue<pair<Node*,int>>

        p = q.front();
        q.pop();

        Node *ptr = p.first;
        int hd = p.second;

        if(m.find(hd) == m.end())
        {
            m[hd] = ptr->data;
            cout<<ptr->data<<" ";
        }

        if(ptr->left != NULL)
        {
            q.push(make_pair(ptr->left,hd-1));
        }
        if(ptr->right != NULL)
        {
            q.push(make_pair(ptr->right,hd+1));
        }
   }

}

struct Node* newNode(int key)
{
    struct Node* node = new Node;
    node->data= key;
    node->left = node->right = NULL;
    return node;
}

// main function
int main()
{
    /* Create following Binary Tree
             1
           /  \
          2    3
           \
            4
             \
              5
               \
                6*/

    Node *root=newNode(1);
    root->left=newNode(2);
    root->right=newNode(3);
    root->left->right=newNode(4);
    root->left->right->right=newNode(5);
    root->left->right->right->right=newNode(6);

    topView(root);
    return 0;
}
