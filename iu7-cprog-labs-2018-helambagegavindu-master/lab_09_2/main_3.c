//lab_09
//implement getline function
//implement replace string function

#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include "main_3.h"

char* str_replace(const char  *source, const char  *search, const char  *replace);
ssize_t my_getline(char **lineptr, size_t *n, FILE *stream);
int main(int argc,char *argv[])
{
	char *gettext = NULL;
    size_t len = 50;
    ssize_t read;
	gettext = (char*)malloc(50*sizeof(char));
	FILE *out;
	FILE *fp;
	fp = fopen(argv[1],"r"); 
	if(argc != 5)
	{
		fprintf(stderr,"type like this: <exefile> <input text file> <output text file> <search> <replacement>");
		exit(-3);
	}
	else if (ferror(fp)) 
	{
        printf("Error in reading from file \n");
    }
	else
	{
		while ((read = my_getline(&gettext, &len, fp)) != -1);
		
		printf("input string : %s\n", gettext);
		char *const finalstr =  str_replace(gettext, argv[3], argv[4]);
		if(finalstr)
		{
			printf("after replacing : %s\n",finalstr);
			
			out  = fopen(argv[2],"w");
			if(out == NULL)
			{
				printf("file not found..!!");
				exit(1);
			}
			else
			{
				fprintf(out,"the result is after replacing  : %s",finalstr);
				
			}
			free(finalstr);
		}
	}
	
	
	
    free(gettext);
    fclose(fp);
	fclose(out);
	getch();
	return 0;
}

