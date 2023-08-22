#include <stdio.h>


int main(int argc, char const *argv[])
{
    //printf("hellow world\n");
    int marks[4];
    for (int i = 0; i < 4; i++)
    {
      printf("enter thw value of %d element of array\n",i);
      scanf("%d",&marks[i]);
    }
    for (int i = 0; i < 4; i++)
    {
      printf("enter thw value of %d element of array is%d\n",i,marks[i]);
    
    }
    
    
    

    return 0;
}