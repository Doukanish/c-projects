#include "dec.h"


errors_t IsIn_hand(int num,int row,int column,int arr[MAX][MAX] )
{ errors_t out=IsIn( num, row, column, arr );
    if(NNUL==out){
        printf("the pointers are NULLS\n");
                    return Not_ok;

    }
    else if(Not_ok==out){

            printf("can't insert the number as it's in already in \n");
            return Not_ok;
        }
        else {
            arr[row][column]=num;
        print_sudoku(arr);
        return OK;
        }
    }
void game(int arr[MAX][MAX],int pro[MAX][MAX])
{
   if( print_sudoku(arr)!=OK)
 {printf("there is something wrong with the coded\n");}
        fflush(stdin);
int row,column;
char n='y';
errors_t out ;    while (n != 'n')
    {

printf("please enter the row \n");
scanf(" %d",&row);
printf("please enter the column\n");
scanf(" %d",&column);
printf("please enter the number\n");
scanf(" %c",&n);
 if(n=='0'){printf("wrong entry ,please enter again \n");}else if(n>='1' && n<='9'){out=insert(arr,pro,row,column,n);
        while(Not_ok==out)
        {printf("please enter the row \n");
scanf(" %d",&row);
printf("please enter the column\n");
scanf(" %d",&column);
printf("please enter the number\n");
scanf(" %c",&n);
if(n =='n'){exit(1);}else if(n=='0'){printf("wrong entry ,please enter again \n");}else if(n>='1' && n<='9'){ out =insert(arr,pro,row,column,n);
        }}
        print_sudoku(arr);


    }
}}

