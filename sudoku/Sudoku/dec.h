#include <stdio.h>
#include <stdlib.h>
#define MAX 9

typedef enum {
OK,
NNUL,
Out_Of_Bound,Not_ok}errors_t;

errors_t prohibted(int column,int row,int arr[MAX][MAX]);
errors_t IsIn(int num,int row,int column,int arr[MAX][MAX] );
errors_t IsIn_hand(int num,int row,int column,int arr[MAX][MAX]);
errors_t print_sudoku(int arr[MAX][MAX]);
errors_t insert(int arr[MAX][MAX],int pro[MAX][MAX],int row,int column,char num);
void game(int arr[MAX][MAX],int pro[MAX][MAX]);
void fill(int arr[MAX][MAX],int pro[MAX][MAX]);
