#include <stdio.h>
int main()
{
    char st[50];
    FILE *ptr = NULL;
    // for read file   FILE*ptr=NULL;
    // ptr=fopen("mufle.txt","r");
    // fscanf(ptr,"%s",st);
    // printf("this is your file %s\n",st);

    // for wright file
    // ptr = fopen("mufle.txt", "w");
    // fprintf(ptr, "%s", st);

     // for append
     ptr = fopen("mufle.txt", "a");
    fprintf(ptr, "%s", st);
    

    return 0;
}