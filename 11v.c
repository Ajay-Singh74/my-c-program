#include<stdio.h>
int main()
{
    int num ;
    printf("ENTER YOUR NUMBER \n");
    scanf("%d",&num);
    switch (num)
    {
    case 1:
        printf("your number is 1\n");
        

        case 2:
        printf("your number is 2\n") ;
        

         case 3:
        printf("your number is 3\n") ;
        
    
    default:
    printf("your not betwen 1,2,and 3\n");
        
    }
    return 0;
}