#include <stdio.h>
#include <stdlib.h>

int getExamScorefromUser()
{
    int score;
    printf("Enter exam Scores \n");
    scanf("%d",&score);
    return score;
}

int getavg(int a[], int n)
{
    int k,sum =0;

    for(k =0;k<n;k++)
    {
      sum += a[k];
    }

     sum = sum/n;

     return sum;

}

void getGradeLetter(int avg)
{
    if(avg >= 90)
    {
        printf(".with letter grade:A ");
    }
    if( avg >= 80 && avg <90 )
    {
        printf(".with letter grade:B");
    }
    if(avg >= 70 && avg <80)
    {
        printf(".with letter grade:C");
    }
    if(avg >=60 && avg <70 )
    {
        printf(".with letter grade:D");
    }
    if(avg >= 50 && avg <60 )
    {
        printf(".with letter grade:P");
    }
    if(avg < 50)
    {
        printf(".with letter grade:F");
    }
    printf("\n");
}

int main()
{
    char name[30];
    int a[100],n,m,i=0,j,avg;
    while(1)
    {

    printf("1.Enter Username\n");
     printf("2.ENter exam scores\n");
      printf("3.Display average exam scores\n");
       printf("4.Display summary\n");
        printf("5.Quit\n");
         printf("Enter your choice \n");
         scanf("%d",&m);
         if(m == 1)
         {
             printf("ENter username \n");
             scanf("%s",&name);
             i = 1;
         }
         if(m == 2 )
         {
             if(i == 1)
             {
             printf("Enter the number of exams");
             scanf("%d",&n);
             for(j=0;j<n;j++)
             {
                 a[j] = getExamScorefromUser();
             }
             i =2;
             }
             else
             {
                 printf("try another choice\n");
             }
         }
         if(m == 3)
         {
             if(i == 2)
             {
                 avg = getavg(a,n);
             }
             else
             {
                 if(i==1)
                 {
                     printf("Please use menu to enter exam scores first \n");
                 }
             }
         }
         if( m == 4)
         {
             printf("Hello %s ",name);
             printf("your exam scores are : ");
               for(j = 0; j<n ;j++)
               {
                   printf("%d,",a[j]);
               }
               printf(".Your average is %.1f",(float)(avg));
               getGradeLetter(avg);

         }
         if(m == 5)
         {
             break;
         }
    }
    return 0;
}
