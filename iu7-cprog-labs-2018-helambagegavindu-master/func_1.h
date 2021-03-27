#ifndef func_1_h
#define func_1_h

void read_matrix(FILE *f,int *matrix,int row,int col);
void print_matrix(int *matrix,int row,int col);
void add_matrix(int *addmat,int *matrix1,int *matrix2,int col1,int col2,int rowa,int cola);
void printfile(int *matrix,FILE *out,int row,int col);

#endif