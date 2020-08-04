/*temp conversion pgm celsius to fahr in reverse order*/
#include<stdio.h>
int main(void)
{
 float fahr,celsius;
 int upper,lower,step;
  lower=0;
  upper=300;
  step=20;
  printf("celsius\t fahr\t\n");
  celsius=upper;
 while(celsius>=lower){
 fahr=((9.0/5.0) * celsius+32.0);
printf("%3.0f %6.1f\n",celsius,fahr);
celsius=celsius - step;
}
return 0;
}
