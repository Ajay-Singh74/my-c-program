#include <stdio.h>

int main()
{
    int m, n, sum = 0;
    int a[3][4], b[4][2], result[3][2];
    printf("enter your first matrix \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("enter your matrix element if %d %d \n", i, j);
            scanf("%d", &a[i][j]);
           // printf("\t");
        }
       
    }

    printf("enter your second matrix \n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
           printf("enter your  matrix element if %d %d \n", i, j);
            scanf("%d", &b[i][j]);
           // printf("\t");
        }
       // printf("\n");
    }

    for (int i = 0; i < 3; i++)
    {
     for (int j = 0; j < 2; j++)
     {
        for(int k=0;k<4;k++)
    {
        sum+=a[i][k]*b[k][j];
    }
     result [i][j]=sum;
     sum=0;
     }
    }
    

    
    for (int i = 0; i < 3; i++)
    {
     for (int j = 0; j < 2; j++)
     {
    printf("%d \t",result [i][j]);
     }
     printf("\n");
    }
    
   

    return 0;
}