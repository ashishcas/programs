#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

struct Node
{
   int data;
   struct Node *next;
}*top = NULL;

void push(int);
void pop();
void display();

int main()
{
   int choice, value;

   cout<<"\n:: Stack using Linked List ::"<<endl;;
   while(1){

      cout<<"\n 1. Push\n2. Pop\n3. Display\n4. Exit\n";
      cout<<"Enter your choice: ";
      cin>>choice;
      switch(choice){
	 case 1: cout<<"Enter the value to be insert: ";
		 cin>>value;
		 push(value);
		 break;
	 case 2: pop(); break;
	 case 3: display(); break;

	 default: cout<<"Wrong selection!!! Please try again!!! "<<endl;
      }
   }
}
void push(int value)
{
   struct Node *newNode;
   newNode = (struct Node*)malloc(sizeof(struct Node));
   newNode->data = value;
   if(top == NULL)
      newNode->next = NULL;
   else
      newNode->next = top;
   top = newNode;
     cout<<"Insertion is Success!!!";
}
void pop()
{
   if(top == NULL)
         cout<<"Stack is Empty!!!"<<endl;
   else{
      struct Node *temp = top;
      printf("\nDeleted element: %d", temp->data);
      top = temp->next;
      free(temp);
   }
}
void display()
{
   if(top == NULL)
         cout<<"Stack is Empty!!!"<<endl;
   else{
      struct Node *temp = top;
      while(temp->next != NULL){
	 cout<<temp->data<<endl;
	 temp = temp -> next;
      }
      cout<<temp->data;
   }
}
