#include <stdio.h>
#include <stdlib.h>

int main()
{
    int students,grade[100];
    int i,sum = 0,min = 9999, max = 0,j;
    printf("enter the number of students \n");
    scanf("%d",&students);
    for( i=0;i<students;i++)
    {
        scanf("%d",&grade[i]);
        sum += grade[i];
    }
    printf("average grade is : %d \n",sum/students);

    for(j=0;j<students;j++)
    {
        if(grade[j]<min)
        {
            min = grade[j];
        }
        if(grade[i]>max)
        {
            max = grade[j];
        }
    }

    printf("minimum grade is : %d \n",min);
    printf("maximum grade is : %d \n",max) ;
    int num=0;
    for(i=0;i<students;i++)
    {
        if(grade[i]  == max)
             num++;
    }
    printf("number of students with maximum grade : %d",num);
}
