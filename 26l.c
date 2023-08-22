#include <stdio.h>


int main(int argc, char const *argv[])
{
    int a;
    printf("enter value of a\n");
    scanf("%d",&a);
    int* ttr = &a;
printf("the addres of poitner is %p\n",&ttr);
printf("the add of a is %p\n",ttr);
printf("the value of a is %d\n",*ttr);
printf("the value of a is %d\n",a);

    return 0;
}