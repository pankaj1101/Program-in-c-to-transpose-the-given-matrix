#include <stdio.h>
int main()
{
    int a[3][3];
    int b[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter number at (%d,%d):",i,j);
            scanf("%d",&a[i][j]);
        }
        
    }

    printf("\nArray..\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
        
    }
    printf("Transpose..\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ",a[j][i]);
        }
        printf("\n");
        
    }


}