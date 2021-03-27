#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include "main_10_1.h"
#include "liststruct.h"





void free_all();
void printout(FILE *fout);
void insert(ptr elem, ptr before);
int find_length();
void print_list();
void create_list(int x);
int main(int argc,char *argv[])
{
	ptr p;
	int loc;
	int x;
	head = NULL;
	FILE *fout;
	fout = fopen(argv[2],"w");
	FILE *f;
	f = fopen(argv[1],"r");
	if(argc != 5)
	{
		fprintf(stderr,"type -> <file.exe><input.txt><output.txt><beforelocation><addvalue>");
		exit(-1);
	}
	else if(ferror(f))
	{
		printf("error in reading from file..!!");
		
	}
	else
	{
		while(!feof(f))
		{
		
			fscanf(f,"%d",&x);
			create_list(x);		
		}
		print_list();
		int len = find_length();
		
		//adding function
	
		char *a = argv[3];//convert command line argument to integer value
		loc= atoi(a);
		
		if(loc > len)
		{
			printf("Invalid input for location..!!\n");
			printf("currently has %d nodes\n",len);		
		}
		else
		{
			int i = 1;
			p = head;
			while(i < loc -1)
			{
				p = p->next;
				i++;	
			}
			ptr newNode;
			newNode = (ptr)malloc(sizeof(node_t));
			char *b  = argv[4];
			newNode->data = atoi(b); 
			insert(newNode, p);
			printout(fout);
			
		}
		free_all();
	}
	fclose(f);
	fclose(fout);
	getch();
	return 0;
}