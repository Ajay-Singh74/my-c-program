 /*#include<stdio.h>

 int func(int array[]){
    for (int i = 0; i < 6 ; i++)
    {
        printf("your value at position %d is %d\n",i,array[i]);
    }
    array[5]=2;
    return 0;
 }



 int main(){
    int arr[]={12,19,94,88,48,54};
    printf("i the value at arr[5] is %d\n",arr[5]);
    func(arr);
    printf("i the value at arr[5] is %d\n",arr[5]);
    return 0;
    

 }*/


 /*

 #include<stdio.h>

 int bpa(int *ptr){


for (int i = 0; i <5; i++)
{
    printf("value at %d is %d\n",i,ptr[i]);// we can also do *(ptr+i)
}
ptr[2]=98;
return 0;


 }

 int main(){
 int arr[]={7,9,89,66,41};
 printf("the value at arr[2]is %d\n",arr[2]);
 bpa(arr);
 printf("the value at arr[2]is %d\n",arr[2]);

 return 0;

 }*/


 #include<stdio.h>

 void map(int ptr[2][2])
 {

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
    printf("value at %d , %d is %d\n",i,j,ptr[i][j]);

            
        }
        
    }
    
 }


 int main(){

int puni[][2]={{34,43},{2,6}};
map(puni);

    return 0;

 }