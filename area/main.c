#include <stdio.h>
#include <stdlib.h>

int main()
{
    int height,width,area;
    printf("Enter wall height (feet):");
    scanf("%d",&height);
    printf("Enter wall width (feet):");
    scanf("%d",&width);
    area = height*width;
    printf("Wall area: %d Square feet",area);
    return 0;
}
