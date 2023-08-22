#include<stdio.h>
#include<string.h>

struct student
{
    int id;
    char favword;
    float marks;
    char name[33];
};



int main()
{
    struct student ravi , kavi ,savi ;
    ravi.id =2;
kavi.id =3;
savi.id =4;

 ravi.marks =22;
kavi.marks =33;
savi.marks =44;

ravi.favword ='r';
kavi.favword ='k';
savi.favword ='s';

printf("revi id is %d \n", ravi.id);
printf("revi id is %f \n", ravi.marks);
printf("revi id is %c \n", ravi.favword);

printf("revi id is %d \n", kavi.id);
printf("revi id is %f \n", kavi.marks);
printf("revi id is %c \n", kavi.favword);

printf("revi id is %d \n", savi.id);
printf("revi id is %f \n", savi.marks);
printf("revi id is %c \n", savi.favword);

strcpy(ravi.name,"kavi");
printf("revi change name is is %s \n", ravi.name);


    return 0;
}