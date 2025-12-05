#include<stdio.h>
float main()
{ float cp,sp;
printf("enter cost price \n");
scanf("%f", &cp);
printf("enter selling price \n");
scanf("%f",&sp);
float pro= sp-cp;
float los=cp-sp;
if(pro>los)
{    float pp= (pro/cp)*100;
     printf("profit percent: %f \n", pp);
}
else if(los>pro)
{ float lp= (los/cp)*100;
printf("loss percent: %f \n", lp);
else 
printf("no profit or loss");
}
 return 0;
}
