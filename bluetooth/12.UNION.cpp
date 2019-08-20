#include<stdio.h>>
#include<conio.h>
int main()
{
      union employe
      {
            char name[10];
            int id;
      }s1;
printf("\nenter the name:-");
scanf("%s",&s1.name);
printf("\nnameis:-");
printf("%s",s1.name);
printf("\nenter the id:-");
scanf("%d",&s1.id);
//printf("name is:-");
//printf("\n%s",s1.name);
printf("\nid is:-");
printf("%d",s1.id);
      
getch();
}
