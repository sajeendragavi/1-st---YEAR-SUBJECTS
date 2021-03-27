#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include "liststruct.h"
#include "function_10_1.h"

void create_list(int x)
{
	ptr temp;
	temp =(ptr) malloc(sizeof(node_t));
	temp->data = x;
	temp->next =NULL;
	if(head == NULL)
	{
		head = temp;
		
	}
	else
	{
		ptr p;
		p = head;
		while(p->next != NULL)
		{
			p = p->next;
				
		}
		p->next=temp;
	}
	
}
void print_list()
{
	ptr temp = head;
	printf("list is: \n");
	while(temp != NULL)
	{
		printf(" %d",temp->data);
		temp=temp->next;
				
	}
	printf("\n");
	
}
int find_length()
{
	int count = 0;
	struct Node* current;
	current = head;
	while(current != NULL)
	{
		count++;
		current = current->next;
		
	}
	return count;
}
void insert(ptr elem, ptr before)
{
	
	elem->next = before->next;
	before->next = elem;
	print_list();
	
}
void printout(FILE *fout)
{
	if(fout == NULL)
	{
		printf("file not found..!!");
		exit(0);
	}
	else
	{
		ptr temp = head;
		fprintf(fout,"list is: \n");
		while(temp != NULL)
		{
			fprintf(fout," %d",temp->data);
			temp=temp->next;
				
		}
		printf("\n");
			
	}
		
}
void free_all()
{
	ptr next;
	for(;head;head = next)
	{
		next = head->next;
		free(head);
		
	}
	
}
