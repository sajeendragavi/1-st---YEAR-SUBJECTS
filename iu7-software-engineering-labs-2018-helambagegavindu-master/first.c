#include<stdio.h>
#include<conio.h>

int max(int x,int y);
int main()

{
	int a,b;
	printf("Hello !Input a and b: ");
	scanf("%d %d",&a,&b);
	int c=max(a,b);
	printf("Max value is %d",c);
	getch();
	return 0;
	
}

int max(int x,int y)
{
	int z = x;
	if(y > x)
		z = y;
	return z;
}