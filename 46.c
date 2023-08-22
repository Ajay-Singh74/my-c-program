#include<stdio.h>
#include<string.h>

struct DRIVER
{
    char Name[30];
    int Dlis[34];
    char route[44];
    float kms[55];

};


int main(){
    struct DRIVER d1,d2,d3;
    printf("Enter the information of drivers;\n");
printf("Enter the name of first driver-\n");
scanf("%s",d1.Name);
printf("Enter the lis no. of first driver-\n");
scanf("%s",d1.Dlis);
printf("Enter the route of first driver-\n");
scanf("%s",d1.route);
printf("Enter the kms of first driver-\n");
scanf("%s",d1.kms);


printf("Enter the name of second driver-\n");
scanf("%s",d2.Name);
printf("Enter the lis no. of second driver-\n");
scanf("%s",d2.Dlis);
printf("Enter the route of second driver-\n");
scanf("%s",d2.route);
printf("Enter the kms of second driver-\n");
scanf("%s",d2.kms);



printf("Enter the name of third driver-\n");
scanf("%s",d3.Name);
printf("Enter the lis no. of third driver-\n");
scanf("%s",d3.Dlis);
printf("Enter the route of third driver-\n");
scanf("%s",d3.route);
printf("Enter the kms of third driver-\n");
scanf("%s",d3.kms);


printf("Name of first Driver is %s \n",d1.Name);
printf("lisence no of first Driver is %s \n",d1.Dlis);
printf("route of first Driver is %s \n",d1.route);
printf("kms of first Driver is %s \n",d1.kms);

printf("Name of second Driver is %s \n",d2.Name);
printf("lisence no of second Driver is %s \n",d2.Dlis);
printf("route of second Driver is %s \n",d2.route);
printf("kms of second Driver is %s \n",d2.kms);

printf("Name of third Driver is %s \n",d3.Name);
printf("lisence no of third Driver is %s \n",d3.Dlis);
printf("route of third Driver is %s \n",d3.route);
printf("kms of third Driver is %s \n",d3.kms);



return 0;

}
