//implement of function strpbrk 
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include "main_1.h"

char* my_strpbrk(char *,char *);
int main()
{
	char *result;
	char *string1;
	char *string2;
	string1 = (char*) malloc(20*sizeof(char));
	string2 = (char*)malloc(20*sizeof(char));
	
	printf("Input the string1:\n ");
	scanf(" %[^\n]s",string1);
	
	printf("Input the charecter set:\n");
	scanf(" %[^\n]s",string2);
	
	result = my_strpbrk(string1,string2);
	printf("Out of string: %s",result);
	
	
	getch();
	return 0;
}

