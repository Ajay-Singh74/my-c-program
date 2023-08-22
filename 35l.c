/*#include<stdio.h>
#include<string.h>

int main()
{
    char s1[]="SJAY";
    char s2[]="SUNITA";
char s3[23] ;
   // printf("the lungth of s1 is %d \n",strlen(s1));
 //   printf("strcat using puts \n");
    //puts(strcat(s1,s2));
 // puts(strrev(s1));
 //strcpy(s3,strcat(s1,s2));
 //puts(s3);
 printf("the compare of s1 ans s2 is %d \n",strcmp(s1,s2));



return 0;
}*/

#include<stdio.h>
#include<string.h>
int main()
{
   char s1[55] ;
   char s2[55] ;
   char s3[55] ;
    printf("enter first friend name\n");
    gets(s1);
     printf("enter second friend name\n");
    gets(s2);
    printf("%s is the friend of %s \n",s1,s2);
    printf("all 3 combination\n");
    strcpy(s3,strcat(s1,s2));
    puts(s3);
    


return 0;
}

