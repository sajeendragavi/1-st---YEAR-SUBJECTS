
main_3.exe :functions_3.o main_3.o
			gcc -o main_3.exe functions_3.o main_3.o
			
main_3.o:main_3.h functions_3.h main_3.c
			gcc -std=c99 -Wall -Werror -g3 -pedantic -c main_3.c
			
functions_3.o:functions_3.h main_3.h functions_3.c
			gcc -std=c99 -Wall -Werror -g3 -pedantic -c functions_3.c
			
			