#include <stdio.h>
int main()
{
    char in ;
    float first ,second;
    float kmsToMiles = 0.6213711922;
    float inchesToFoot  = 0.0833333333 ;
    float cmsToInches  = 0.3937007874;
    float poundsTokgs  = 0.45359237;
    float inchesToMeter  = 0.0254;

    
while (1)      
{
     printf("ENTER THE INPUT q to exit \n   1.  km To Miles \n  2.inches To Foot \n 3. cm To Inches 4. \n  pounds To kg  \n5.  inches To Meter\n");
        scanf("%c",&in);
        switch (in)
        {
        case 'q':
        goto end;
        break;
        case '1' :
          printf("ENTER QUANTITY IN TERM OF FIRST UNIT\n");
    scanf("%f",&first);
   
        second = first*kmsToMiles;
        printf("%f is equal to%f \n",first,second);
        break;
         case '2' :
           printf("ENTER QUANTITY IN TERM OF FIRST UNIT\n");
    scanf("%f",&first);
   
          second =first * inchesToFoot ;
        printf("%f is equal to%f \n",first,second);
        break;
         case '3' :
           printf("ENTER QUANTITY IN TERM OF FIRST UNIT\n");
    scanf("%f",&first);
   
          second = first* cmsToInches ;
        printf("%f is equal to%f \n",first,second);
        break;
         case '4' :
           printf("ENTER QUANTITY IN TERM OF FIRST UNIT\n");
    scanf("%f",&first);
   
          second = first* poundsTokgs  ;
        printf("%f is equal to%f \n",first,second);
        break;
         case '5' :
           printf("ENTER QUANTITY IN TERM OF FIRST UNIT\n");
    scanf("%f",&first);
   
          second = first* inchesToMeter  ;
        printf("%f is equal to%f \n",first,second);
        break;
        
        default:
            break;
        }
}
end :
return 0;
}