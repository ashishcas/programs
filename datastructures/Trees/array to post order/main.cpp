#include<bits/stdc++.h>

using namespace std;

/* A Binary Tree node */
struct TNode
{
    int data;
    struct TNode* left;
    struct TNode* right;
};

struct TNode* newNode(int data)
{
    struct TNode* node = (struct TNode*)
                         malloc(sizeof(struct TNode));
    node->data = data;
    node->left = NULL;
    node->right = NULL;

    return node;
}

/* A function that constructs Balanced Binary Search Tree from a sorted array */
struct TNode* sortedArrayToBST(int arr[], int start, int end)
{
    /* Base Case */
    if (start > end)
      return NULL;

    /* Get the middle element and make it root */
    int mid = (start + end)/2;
    struct TNode *root = newNode(arr[mid]);

    /* Recursively construct the left subtree and make it
       left child of root */
    root->left =  sortedArrayToBST(arr, start, mid-1);

    /* Recursively construct the right subtree and make it
       right child of root */
    root->right = sortedArrayToBST(arr, mid+1, end);

    return root;
}

/* Helper function that allocates a new node with the
   given data and NULL left and right pointers. */


/* A utility function to print preorder traversal of BST */
void preOrder(struct TNode* node)
{
    if (node == NULL)
        return;

    preOrder(node->left);
    preOrder(node->right);
    printf("%d ", node->data);
}

bool check(int a[],int n)
{

    stack<int> s;

    int root1 = INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(a[i]< root1)
           return false;

          while(!s.empty() && s.top() < a[i])
          {
              root1 = s.top();
              s.pop();
          }
          s.push(a[i]);
    }
    return true;
}

int main()
{
    int N;
    cin>>N;
    while(N--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        if(check(a,n))
        {
            sort(a,a+n);
            TNode *root = sortedArrayToBST(a,0,n-1);
            preOrder(root);
        }
        else
        {
            cout<<"NO";
        }
        cout<<endl;
    }
}

