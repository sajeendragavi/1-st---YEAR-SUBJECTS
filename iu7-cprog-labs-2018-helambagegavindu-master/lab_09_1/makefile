
main_1.exe:functions_1.o main_1.o
		gcc -o main_1.exe functions_1.o main_1.o
	
main_1.o:main_1.h functions_1.h main_1.c
		gcc -std=c99 -Wall -Werror -g3 -pedantic -c main_1.c
		
functions_1.o:functions_1.h main_1.h functions_1.c
			gcc -std=c99 -Wall -Werror -g3 -pedantic -c functions_1.c
	
	
