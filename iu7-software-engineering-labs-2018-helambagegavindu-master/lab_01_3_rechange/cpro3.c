#include<stdio.h>
#include<conio.h>
int main()
{
	float R1,R2,R3;
	printf("input R1,R2,R3 resistances: ");
	scanf("%f %f %f",&R1,&R2,&R3);
	
	float R=((R1*R2*R3)/((R1*R2)+(R2*R3)+(R3*R1)));
	
	printf("Equator resistance is %f",R);
	
    getch();
	return 0;	
}