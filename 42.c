/*#include<stdio.h>

int b=57;
int func1(int b5){
    printf("tcombaring local and global %d\n",b);
   // printf("the addres of b outside the main function %d\n",&b);
return b5*10;
}



int main()
{
int b=54;
printf("\nthe addres of b inside main function %d \n",&b);
int val =func1(b);
int *ptr=&val;
printf("\nthe alue is %d \n",val);

return 0;
}*/
#include<stdio.h>

int st(int b){
    static int puni=44;
    puni++;

    printf(" value ius %d\n",puni);

}

int main(){

    int val;
    st(val);
    st(val);
     st(val);
    st(val);
     st(val);
     st(val);
    st(val);
    return 0;
}