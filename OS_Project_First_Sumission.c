#include<stdio.h>
#include<math.h>
int main()
{
	float PF,PFN,PM,PMN,MAT,SUCC,SUCCESS;
	float FAIL,FAILURE,ET,PASR,LOSR,MR,FN,FI,PN;
	int C;
	float N=1000000;
	z:printf("Time For A Page Fault For Empty Page (in millisecond):\n\n\t");
	scanf("%f",&PF);
	PFN=PF*N;
	printf("\nTime For Modified Page (in millisecond):\n\n\t");
	scanf("%f",&PM);
	PMN=PM*N;
	printf("\nEnter Memory Access Time (in nanosecond):\n\n\t");
	scanf("%f",&MAT);
	printf("\nReading Updated Page Percentage :\n\n\t");
	scanf("%f",&SUCC);
	SUCCESS=SUCC/100;
	FAIL=100-SUCC;
	FAILURE=FAIL/100;
	printf("\nReading Unupdated Page Percetnage :\n\n\t%f %\n",FAIL);
	printf("\nEnter The Effective Time (in nanosecond):\n\n\t");
	scanf("%f",&ET);
	return 0;
}
