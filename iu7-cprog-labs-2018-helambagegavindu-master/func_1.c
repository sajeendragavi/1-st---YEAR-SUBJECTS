#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include "func_1.h"

void read_matrix(FILE *f,int *matrix,int row,int col)
{
	for(int i = 0;i < row;i++)
	{
		for(int j = 0;j < col;j++)
		{
			fscanf(f,"%d",(matrix + i*col +j));	
		}
		
	}		
}

void print_matrix(int *matrix,int row,int col)
{
	for(int i = 0; i < row; i++)
	{
		for (int j = 0;j < col; j++)
		{
			printf("%4d",*(matrix + i*col +j));
					
		}
		printf("\n");
		
	}	
	printf("\n");
	
}

void add_matrix(int *addmat,int *matrix1,int *matrix2,int col1,int col2,int rowa,int cola)
{
	
	for(int i = 0; i < rowa; i++ )
	{	
		for(int j = 0;j < cola;j++)
		{
			*(addmat + i*cola + j)= *(matrix1 + i*col1 + j) + *(matrix2 + i*col2 + i);	
			
		}
		
	}
	
} 
void multiply_mat(int *mulmat,int *matrix1,int *matrix2,int col1,int row2,int col2,int rowm,int colm)
{
	int sum = 0;
	for(int k = 0; k < rowm; k++)
	{	
		for(int h = 0; h < colm ;h++)
		{
			sum = 0;
			for(int j = 0;j < colm; j++)
			{
				sum  += *(matrix1 + k*col1 + j) * (*(matrix2 + j*col2 + h));
			}
			*(mulmat + k*colm + h) = sum;
			
		}
	}
	
}

void printfile(int *matrix,FILE *out,int row,int col)
{
	for(int i = 0;i < row;i++)
	{
		for(int j = 0;j < col ;j++)
		{
			fprintf(out,"%4d",*(matrix + i*col + j));
			
		}
		fprintf(out,"\n");
	}
}
