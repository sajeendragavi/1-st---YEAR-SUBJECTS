#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	float Ax,Ay,Bx,By,Cx,Cy;
	printf("Input 3 numbers for your x coordinates:");	
	scanf("%f %f %f",&Ax,&Bx,&Cx);
	printf("Input 3 numbers for your y coordinates:");
	scanf("%f %f %f",&Ay,&By,&Cy);
	
	float A = sqrt(((Bx-Ax)*(Bx-Ax))+((By-Ay)*(By-Ay)));
	float C = sqrt(((Ax-Cx)*(Ax-Cx))+((Ay-Cy)*(Ay-Cy)));
	float B = sqrt(((Cx-Bx)*(Cx-Bx))+((Cy-By)*(Cy-By)));
	
	float P = A + B + C;
	
	printf("perimeter of Triangle is %f",P);
	getch();
	return 0;
	
	
}