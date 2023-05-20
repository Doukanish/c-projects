#include "dec.h"
errors_t prohibted(int column,int row,int arr[MAX][MAX])
{
    column++;
    for(int i=0;i<MAX;i++)
    {
         if(arr[row][i]==column){return Not_ok;}
    }
return OK;
}
errors_t IsIn(int num,int row,int column,int arr[MAX][MAX] )
{ if(0==arr )
        {
            return NNUL;
        }
    for(int counter =0;counter <MAX;counter++)
    {

    if(num == arr[row][counter])
    {

        return Not_ok;
    }
    }
    for(int counter=0;counter<MAX;counter++)
    {
        if(num==arr[counter][column])
        {
                  return Not_ok;

        }
    }
    return OK;

}

errors_t insert(int arr[MAX][MAX],int pro[MAX][MAX],int row,int column,char n)
{
 if(0==arr )
        {
            return NNUL;
        }
n-='0';
int num=(int)n;
if(prohibted(column,row,pro)==OK){errors_t out=IsIn_hand( num, row, column, arr);return out;
}else {
printf("prohibted cell\nchoose anoter cell\n");
return Not_ok;}
}



errors_t print_sudoku(int arr[MAX][MAX])
{if(0==arr)
{
    return NNUL;
}
int row=0,column=0;
for(;row<=MAX;row++)
{if(0==row || MAX==row)
{
    for(column=0;column<MAX+3;column++)
    {
    printf("* ");
    }
    printf("\n");
}
for(column=0;column<MAX && row<MAX;column++)
{
  if(column%3 ==0)
  {
      printf("* ");
  }
  if(arr[row][column]==0)
  {
       printf(" |");

  }
  else{  printf("%d|",arr[row][column]);
}
}
printf("\n");
}
return OK;
}


void fill(int arr[MAX][MAX],int pro[MAX][MAX])
{
    printf("filling the pro\n");
    int n=0;
    fflush(stdin);
    for(int i=0;i<MAX;i++)
    {
       for(int j=0;j<MAX;j++)
       {
           if(pro[i][j] !=0)
           {
               printf("please enter a number in %d row and %d column \n",i,pro[i][j]-1);
               scanf(" %d",&n);
               if(n>9){printf("wrong number \n please enter again \n");}
               else {               arr[i][pro[i][j]-1]=n;
}
           }
       }
    }
}
