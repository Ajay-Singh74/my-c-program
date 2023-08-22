//wild pointer

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a=43;
    int *ptr ;// this is a wild pointer
    *ptr=555;//this is also wild pointer
    ptr=&a;//pointer not remain wild pointer 

    return 0;
}