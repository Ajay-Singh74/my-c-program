/*#include<stdio.h>

void changevalue(int* address )
{
    *address=334;
   // *bba=3499;
}
void ggg(int* bba)
{
    *bba=6789;
}
int main()
{
    int a,b;
    a=21;
    b=33;
    printf("value of a is %d\n",a);
changevalue(&a);
printf("value of a is %d\n",a);
ggg(&b);
printf("value of \b is %d\n",b);


    return 0;
}*/
// challange by code with harry
#include<stdio.h>

void add(int*x,int*y,int*sum){

   * sum=*x+*y;
}


int main()
{
    int a,b,sum;
    printf("enter value of a and b\n");
    scanf("%d\n%d",&a,&b);
   sum=a+b;

    add(&a,&b,&sum);
    printf("sum is%d",sum);
    return 0;

}