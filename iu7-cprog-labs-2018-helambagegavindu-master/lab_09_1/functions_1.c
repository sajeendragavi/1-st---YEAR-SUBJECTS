#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include "functions_1.h"

char* my_strpbrk(char *string1,char *string2)
{
	int pos,k,flag = 0;
	for (k = 0 ; *(string1 + k); k++);
	pos = k;//find the length of 1 st string
	for(int i = 0; *(string2 + i) != '\0' ; i++)
	{
		for(int j = 0;*(string1 + j) != '\0'; j++)
		{
			if(*(string2 + i) == *(string1 + j))
			{
				if(j <= pos)
				{
					pos = j;
					flag = 1;
					
				}
				
			}
		}
		
	}
	if(flag == 1)
	{
		return (string1 + pos);
		
	}
	else
	{
		return NULL;
	}
	
} 