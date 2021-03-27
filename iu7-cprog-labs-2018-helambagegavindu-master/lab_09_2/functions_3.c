#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include "functions_3.h"

char* str_replace(const char  *source, const char   *search, const char  *replace)
{
	size_t const soclen = strlen(source);
	size_t const serlen = strlen(search);
	size_t const replen = strlen(replace);
	
	size_t searchCount = 0;
	const char *sourceptr;
	const char *searchloc;
	
	//find how many times the search string in the source string

	for(sourceptr = source;(searchloc = strstr(sourceptr,search));sourceptr = searchloc + serlen)
	{
		searchCount++;
		
	}
	//allocate memory for the new string
	size_t const newstlen = soclen + searchCount * (replen - serlen);
	char *const new = (char*) malloc(sizeof(char)*(newstlen)) ;
	
	
    if (new != NULL)
    {
      // copy the original string, 
      // replacing all the instances of the pattern
      char * retptr = new;
      for (sourceptr = source;(searchloc = strstr(sourceptr,search))!= NULL;sourceptr = searchloc + serlen)
      {
        size_t const skplen = searchloc - sourceptr;
        // copy the section until the occurence of the pattern
        strncpy(retptr, sourceptr, skplen);
        retptr += skplen;
		
        // copy the replacement 
        strncpy(retptr, replace, replen);
        retptr += replen;
      }
      // copy the rest of the string.
      strcpy(retptr, sourceptr);
    }
    return new;
}
//implement of function getline
ssize_t my_getline(char **lineptr, size_t *n, FILE *stream)
{
	size_t newlen;
	if(fgets(*lineptr,*n,stream)== NULL)
	{
		return -1;
	}
	newlen = strlen(*lineptr);
	
	while(strchr(*lineptr,'\n') == NULL)
	{
		*n = *n + 50;
		*lineptr = (char*)realloc(*lineptr,*n);
		fgets(*lineptr + newlen,*n - newlen,stream);
		return newlen;
		
	}
	return EXIT_SUCCESS;	
}	