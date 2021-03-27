main_10_1.exe:function_10_1.o main_10_1.o
		gcc -o main_10_1.exe function_10_1.o main_10_1.o
	
main_10_1.o:main_10_1.h function_10_1.h liststruct.h main_10_1.c
		gcc -std=c99 -Wall -Werror -g3 -pedantic -c main_10_1.c
		
function_10_1.o:function_10_1.h main_10_1.h liststruct.h function_10_1.c
			gcc -std=c99 -Wall -Werror -g3 -pedantic -c function_10_1.c