#include<stdio.h>
int main()
{
    int a;
    float f;
    printf("enter your integer \n");
    scanf("%d",&a);
    printf("enter your float \n");
    scanf("%f",&f);
    void *ptr;

    // printf("the value is %d\n",*ptr);  ----- it is not possible;;;
    ptr=&a;
    printf("the value is %d\n",*((int *)ptr));
    ptr=&f;
    printf("the value is %f\n",*((float *)ptr));
    return 0;
}