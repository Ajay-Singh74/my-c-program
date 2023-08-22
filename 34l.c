/*#include<stdio.h>
void strfun(char str[])
{
int i=0;
while (str[i]!='\0')
{
    printf("%c",str[i]);
    i++;
}


}


int main()
{
    //char str[]={'s','u','n','i','t','a','\0'};
    
    char str[]={"ajay"};
    strfun(str);


    return 0;
}*/
#include<stdio.h>
int main()
{
    char str[55] ;
    printf("Please Enter Your Sting \n ");
    gets(str);
    printf(" Output Using Printf ;\n%s ",str);
     printf(" Output Using Puts ;\n ");
     puts(str);
    
    return 0;
}