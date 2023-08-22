#include <stdio.h>
int plaifuncf(int num)
{
    int rev = 0;
    int on = num;
    while (num != 0)
    {

        rev = rev * 10 + num % 10;
        num = num / 10;
    }
    printf("THE REVERSED NUMBER IS %d\n", rev);
    if (on==rev)
    {
       
        return 1;
    }
    else
    {
        return 0;
    }
    
    
}

int main()
{
    int a;
    printf("ENTER THE NUMBER TO CHEAK IT IS PALAINDROM 0R NOT \n");
    scanf("%d", &a);
  
    if (plaifuncf(a))
    {
        printf("IT IS A PALIDROM");

    
    }
    else
    {
        printf("IT IS NOT PALINDROM \n");
    }
    
    
    return 0;
}