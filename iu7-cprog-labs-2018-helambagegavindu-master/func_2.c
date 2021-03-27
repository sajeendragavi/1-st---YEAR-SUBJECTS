#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include "func_2.h"

void process()
{
   int rowo,colo;
   float *matrixop;
   float x[20];
   float *p;
   p = x;//pointer to array x
   float sum = 0.0,c = 0.0;
   
   FILE *inop;
   inop = fopen("inop.txt","r");
   if(!inop)
   {
	   printf("file is not found...!!!");
	   exit(0);
	   
   }
   else
   {
	   fscanf(inop,"%d %d",&rowo,&colo);
	   printf("augmented matrix row-wise \n");
	   printf("\n");
	   while(colo != rowo + 1)
	   {
		  printf("(no of col = no of row +1) must be in the input matrix..!! ");
		   
	   }		   
		   matrixop = (float*)malloc(rowo*colo*sizeof(float));
		   get_matrix(inop,matrixop,rowo,colo);
		   show_opmat(matrixop,rowo,colo);//print matrix for check
		   //loop for the generation of upper triangular matrix
		   
		   for(int j = 1;j <= rowo ; j++)
		   {
			   for(int i =1;i <= rowo; i++)
			   {
				   if(i > j)
				   {
					   c = *(matrixop + i*colo + j) / (*(matrixop + j*colo + j));
		
					   for(int k =1; k <= colo; k++)
					   {
						   *(matrixop + i*colo + k) = *(matrixop + i*colo + k) - c * (*(matrixop + j*colo + k));
						   
					   }		   
				   }
				   
			   }
			   
		   }
		   
		   *(p + rowo) = *(matrixop + rowo*colo + colo) / (*(matrixop + rowo*colo + rowo));
		  
		   // this loop for is for backward substitution
		   
		   for(int i = rowo-1; i >= 1; i--)
		   {
			   sum = 0.0;
			   for(int j = i+1; j <= rowo ; j++)
			   {
				   sum = sum + ((*(matrixop + i*colo + j)) * (*(p + j)));
				   
			   }
			   *(p + i) = (*(matrixop + i*colo + colo) - sum) / (*(matrixop + i*colo + i));
			   
		   }
		   //print the last result in display
		   
		   printf("\n The solution is : \n");
		   
		   for(int i = 1;i <= rowo; i++)
		   {   
				
			   printf("\nx%d=%f\t",i,*(p + i));
			   
			      
		   }
		   
		   
		   FILE *outop;
		   outop = fopen("outop.txt","w");
		   if(!outop)
		   {
			   printf("file not found..!!! ");
			   exit(0);
		   }
		   else
		   {
			   
			   printoutfile(outop,p,rowo);
			    
		   }
		   fclose(outop);
		   
	   
	   
   }
   fclose(inop);
}

void get_matrix(FILE *f,float *matrix,int row,int col)
{
	for(int i = 1;i < (row+1); i++)
	{
		for(int j = 1;j < (col+1); j++)
		{
			fscanf(f,"%f",(matrix + i*col +j));	
		}
		
	}		
}

void show_opmat(float *matrix,int row,int col)
{
	for(int i = 1; i < (row+1); i++)
	{
		for (int j = 1;j < (col+1); j++)
		{
			printf("%10f",*(matrix + i*col +j));
					
		}
		printf("\n");
		
	}	
	printf("\n");
	
}

void printoutfile(FILE *outop,float *p,int rowo)
{
	
			    fprintf(outop,"\n The solution is : \n");
			    for(int i = 1;i <= rowo; i++)
				{   
					fprintf(outop,"\nx%d=%f\t",i,*(p + i));
			      
				}
	
	
}


/*void free_matrix(float *matrix,int n);
{
	for(int i = 0; i < n ; i++ )
	{
		//free(matrix[i]);
		
	}
	
	
}*/
