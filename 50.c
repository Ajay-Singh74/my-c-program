#include <stdio.h>
#include <stdlib.h>
int main()
{
    int chars, i = 0;
    char *ptr;
    while (i < 3)
    {
        printf("employ %d : enter the number of character in your employer id\n",i+1);
        scanf("%d", &chars);
            ptr = (char *)malloc((chars + 1) * sizeof(char));
        printf("enter the employer id\n");
        scanf("%s", ptr);
        printf("your employer id id %s\n", ptr);
        free(ptr);
        i = i + 1;
    }

    return 0;
}