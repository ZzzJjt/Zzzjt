#include<stdio.h>
#include<math.h>
int main(void)
{
	float a,b,c,d,u;
	scanf("%f %f %f %f",&a,&b,&c,&d);
	u=sqrt((a-c)*(a-c)+(b-d)*(b-d));
	printf("%.2f",u);
	return 0;
 }  
