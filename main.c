#include <stdio.h>

int main(void) {

  float tb = 3.9;// target B
  float tp = 4.8;// target P
   
  float b1;
  float p1;

  float b2;
  float p2;

  float db1;
  float dp1;
  
  float db2;
  float dp2;

  float b2h61;
  float ph31;
  float b2h62;
  float ph32;
  float b2h63;
  float ph33;

  scanf("%f",&b2h61);
  scanf("%f",&ph31);

  scanf("%f",&b1);
  scanf("%f",&p1);
  
  b2h62=b2h61*tb/b1;
  db1=tb-b1;
  dp1=-0.5*db1;
  p2=p1+dp1;
    
  ph32=ph31*tp/p2;

  dp2=tp-p2;
  db2=-0.2*dp2;

  b2=tb+db2;

  b2h63=b2h62*tb/b2;

 printf("b2h6 is %f \n",b2h63);
 printf("ph3 is %f \n",ph32);

  return 0;
}