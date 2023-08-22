/*#include<stdio.h>
int myfun(int a,int b){

    int sum; 
sum=a+b;
    return sum;
}


int main()
{
int sum=myfun(3,8);
printf("the value is %d",sum);
 return 0;
}*/

/*#include<stdio.h>

int sum;
int myfun(int a,int b){

   
sum=a+b;
    return sum;
}


int main()
{
 sum=myfun(3,8);
printf("the value is %d",sum);
 return 0;
}*/

/*#include<stdio.h>
#include"49temp.c"


int myfun(int a,int b){

   
sum=a+b;
    return sum;
}


int main()
{
 sum=myfun(3,8);
printf("the value is %d",sum);
 return 0;
}*/



#include<stdio.h>


/*int myfun(int a,int b){

  extern int sum;
  

    return sum;
}
int sum=2232;

int main()
{
 int sum=myfun(3,8);
printf("the value is %d",sum);
 return 0;
}*/


/*#include<stdio.h>


int myfun(int a,int b){

  static int sum;
  sum++;

  printf("the value is %d\n",sum);
  

    return sum;
}
int sum=2232;

int main()
{
 int sum=myfun(3,8);
 sum=myfun(3,8);
 sum=myfun(3,8);
 sum=myfun(3,8);
 sum=myfun(3,8);

 return 0;
}*/

#include<stdio.h>


int myfun(int a,int b){

  static int sum;
  sum++;

  printf("the value is %d\n",sum);
  

    return sum;
}
int sum=2232;

int main()
{
 int sum=myfun(3,8);
 sum=myfun(3,8);
 sum=myfun(3,8);
 sum=myfun(3,8);
 sum=myfun(3,8);

 return 0;
}


