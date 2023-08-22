#include <stdio.h>
int main(){
printf("CURRENT DATE IS "__DATE__);
printf("\n CURRENT TIME IS "__TIME__);
printf("\n CURRENT FILE NAME IS "__FILE__);
printf("\n CURRENT LINE IS %d",__LINE__);
printf("\n IT IS ANSI OR NOT IS %d ",__STDC__);
    return 0;
}