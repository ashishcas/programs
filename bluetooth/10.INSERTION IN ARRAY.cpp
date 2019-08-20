#include<stdio.h>
#include<conio.h>
main()
{
      int a[10];
      int n,item,loc;
      
       printf("enter the size of an array:-");
       scanf("%d",&n);
       
       printf("\nenter the elements:-");
       for(int i=0;i<n;i++)
       {
           scanf("%d",&a[i]);    
       }  
       
        printf("\nenter the element you want to insert:-");
       scanf("%d",&item);
       
       printf("\nenter the location:-");
       scanf("%d",&loc);
       
       for(int i=n-1;i>=loc;i--)//SHIFTING
       {
               a[i+1]=a[i];
       } 
       a[loc]=item;
       
       printf("\narray after inserting element is:-");
       for(int i=0;i<n+1;i++)
       {
           printf("%d\n",a[i]);    
       }  
       getch(); 
}
