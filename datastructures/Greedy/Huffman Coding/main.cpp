#include <bits/stdc++.h>

#define ll long long

using namespace std;



struct Minheap
{

    char data;
    unsigned freq;

    Minheap *left,*right;


    Minheap(char data,unsigned freq)
    {

        left = right = NULL;

        this->data = data;
        this->freq = freq;
    }


};


struct compare
{

    bool operator()(Minheap* l,Minheap* r)
    {

        return (l->freq > r->freq);
    }
};


void printCodes(Minheap *root,string str)
{

   if(!root)
   {

       return ;
   }

    if(root->data != '$')
        cout<<root->data<<" : "<<str<<endl;

    printCodes(root->left,str + "0");
    printCodes(root->right,str + "1");


}


void huffman(char s[],int freq[],int size)
{
    struct Minheap *left,*right,*top;

    priority_queue< Minheap* , vector < Minheap* > , compare > Heap;


    for(ll i= 0;i<size;i++)
    {

        Heap.push( new Minheap(s[i],freq[i]));
    }

    while(Heap.size() != 1)
    {

        left = Heap.top();
        Heap.pop();

         right = Heap.top();
        Heap.pop();


        top = new Minheap('$',left->freq+right->freq);

        top->left = left;
        top->right = right;

        Heap.push(top);

    }

    printCodes(Heap.top(),"");

}



int main()
{
    char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
    int freq[] = { 5, 9, 12, 13, 16, 45 };

    int size = sizeof(arr) / sizeof(arr[0]);

    huffman(arr, freq, size);

    return 0;
}
