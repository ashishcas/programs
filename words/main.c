#include <stdio.h>

void main(void)
{
    char sentence[100];
    int i = 0;
    int count = 1;


    printf("Enter a sentence \n");
    fgets(sentence, 100, stdin);

    for (i = 0; sentence[i] != '\0'; i++)
    {
        if (sentence[i] == ' ')
             {
                 count ++;
             }
         else    if(sentence[i] == 'd' && sentence[i] == '-')
         {
             break;
         }
    }
    printf("You entered %d words\n", count-1);

return 0;
}
