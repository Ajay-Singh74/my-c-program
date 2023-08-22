
//use of malloc


/*#include<stdio.h>
#include<stdlib.h>
int main(){
int *ptr;

int n;
printf("Enter a number of array you want\n");
scanf("%d",&n);


ptr=(int *)malloc(n*sizeof(int));
for (int i = 0; i < n; i++)
{
    printf("enter the value at psition %d is\n",i);
    scanf("%d", &ptr[i]);

}
for (int i = 0; i < n; i++)
{
    printf("the value at %d is %d \n",i,ptr[i]);
}


    return 0;
}*/


//use of calloc

/*#include<stdio.h>
#include<stdlib.h>
int main(){
int *ptr;

int n;
printf("Enter a number of array you want\n");
scanf("%d",&n);


ptr=(int *)calloc(n,sizeof(int));
for (int i = 0; i < n; i++)
{
    printf("enter the value at psition %d is\n",i);
    scanf("%d", &ptr[i]);

}
for (int i = 0; i < n; i++)
{
    printf("the value at %d is %d \n",i,ptr[i]);
}


    return 0;
}*/

//use of relloc

#include<stdio.h>
#include<stdlib.h>
int main(){
int *ptr;

int n;
printf("Enter a number of array you want\n");
scanf("%d",&n);


ptr=(int *)calloc(n,sizeof(int));
for (int i = 0; i < n; i++)
{
    printf("enter the value at psition %d is\n",i);
    scanf("%d", &ptr[i]);

}
for (int i = 0; i < n; i++)
{
    printf("the value at %d is %d \n",i,ptr[i]);
}
free(ptr);

// realloc
printf("Enter a number of new array you want\n");
scanf("%d",&n);


ptr=(int *)realloc(ptr,n*sizeof(int));
for (int i = 0; i < n; i++)
{
    printf("enter the value at psition %d is\n",i);
    scanf("%d", &ptr[i]);

}
for (int i = 0; i < n; i++)
{
    printf("the value at %d is %d \n",i,ptr[i]);
}

free(ptr);

    return 0;
}