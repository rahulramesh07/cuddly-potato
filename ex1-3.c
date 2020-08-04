/*for modify the temperature conversion pgm fahr to celsius to print a heading above the table*/
#include<stdio.h>
int  main(void){
   float fahr,celsius;
   int lower,upper,step;
  lower=0;
  upper=300;
  step=20;
  fahr=lower;
 printf("fahr\tcelsius\t \n");
while(fahr<=upper){
     celsius=(5.0/9.0)*(fahr-32.0);
    printf("%3.0f\t %10.1f\t\n",fahr,celsius);
      fahr=fahr+step;
 }
 return 0;
}
