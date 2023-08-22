/*#include<stdio.h>
int main()
{
    int s;
    printf("chose 1 for tringular star pattern and 0 for reversed star pattern \n");
    scanf("%d",&s);
    if (s==1)
    {
        printf("*\n");
        printf("**\n");
        printf("***\n");
        printf("****\n");
    }
    else 
    {
       printf("****\n");
       printf("***\n");
       printf("**\n");
       printf("*\n"); 
    }
    return 0;
    
}*/

#include<stdio.h>
void tri(int s){
    for (int i = 0; i < s; i++)
    {
       for (int j = 0; j <= i; j++)
       {
        printf("*");
       }
           printf("\n");
    
       
    }
    printf("\n");
    
}


void rev(int s){
    for (int i = 0; i < s; i++)
    {
       for (int j = 0; j <= s-i-1; j++)

       {
        printf("*");
       }
           printf("\n");
    
       
    }
    printf("\n");
    
}

int main()
{
    int s,t;
     printf(" enter 0 for sringular star patter and 1 for reversed star pattern\n");
    scanf("%d",&t);
    printf(" ow much column of star pattern you want\n");
    scanf("%d",&s);
   switch (t)
   {
   case 0:
    tri(s);
    break;

    case 1:
    rev(s);
    break;
   
   default:
    break;
   }
  
    

    return 0;
}