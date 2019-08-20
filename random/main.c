#include <stdio.h>
#include <stdlib.h>
#include<math.h>


int main()
{
    char a,b; //intialiazing two character variables
    int n = rand()%26; //to generate random alphabet we are generating integer upto and adding 65 getting convert the ascii value to character
    a = (char)(n+65);
    printf("%c \n",a);
    while(1) // taking while 1 so that loop runs infinite times till user guesses correct alphabet
    {
      printf("ENTER THE ALBHABET \n");
      scanf("%c",&b);
      int d = (int)(a);
      int e = (int) (b);
      if(a == b)
      {
          char c;
          printf("Congratulations !!! You have guessed the letter computer has chosen /n");
          printf("Thanks for playing would you like to play again (Y/N) \n");

          scanf("%c",&c);
          if(c=='N')
          {
              printf("GoodBye");
              break;
          }
      }

      else if(e > d)
      {
          printf("your guess %s ",b);
          printf("is not the letter computer chosen the letter is closer to a");
      }
     else
      {
          printf("your guess %s ",b);
          printf("is not the letter computer chosen the letter is closer to z");
      }
    }

    return 0;
}
