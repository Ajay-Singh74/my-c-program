
//case1---dynamic memory location
/*#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr=((int *)malloc(3*sizeof(int)));
    ptr[0]=2;
    ptr[1]=3;
    ptr[4]=44;
    printf("%d\n",ptr[4]);
    free(ptr);// pointer is dangling now
    ptr[4]=33;
    printf("oo %d",ptr[4]);
    return 0;
}*/


//case 2---function returnig local variable addres

/*#include<stdio.h>
#include<stdlib.h>
int *func()
{
    int a,b,sum;
    a=30;
    b=20;
    sum=a+b;
    return &sum;
}
int main()
{
   int*dangptr=func();//dangdtr become danfling pointer
    return 0;
}*/


// case 3--- variable going out of scope

#include<stdio.h>
#include<stdlib.h>

int main()
{
   int*dangptr;
   {
    int i=22;
    dangptr=&i;
   }
   //here is a out of scope so it dangptr become a dangling pointer

    return 0;
}

