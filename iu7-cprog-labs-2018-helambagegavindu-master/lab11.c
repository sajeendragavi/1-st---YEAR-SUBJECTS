#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include "func.h"

int main(){
	char buffer [100];
	my_snprintf(buffer, 100, "colour %hd photos with more than %d albums%c",0xFF0000FF, 450, '.');

	printf("\n\nResult string: \n");
	puts(buffer);
	
	
}