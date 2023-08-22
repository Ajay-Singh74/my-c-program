#include<stdio.h>
int main()
{
    int arr[]={23,67,90};
    
    /*printf("%d\n",pa);
    printf("%d\n",pa+5);
    printf("%d\n",pa-2);
    pa++;
    printf("%d\n",pa);
    pa--;
    printf("%d\n",pa);*/

    printf("addres at position 1 is %d\n",*(arr+1));
    printf("addres at position 1 is %d\n",*(arr));
    printf("value at position 2 is %d\n",*(&arr[3]));
    return 0;

}