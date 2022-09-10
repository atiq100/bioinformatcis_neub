#include<stdio.h>
#include <string.h>

int finMax(int x,int y,int z){
 x=x>y?x:y;
 x=x>z?x:z;
 return x;
}


int main(){
 char ls[]="AGCT", rs[]="ATGCT";

 int row= strlen(ls)+1;
 int col=strlen(rs)+1;
 int data[row][col];

 int i,j;
 for(i=0;i<row;i++){
     for(j=0;j<col;j++){
        data [i][j]=0;
     }

 }
 for (int i = 0; i<1; i++) {
        for (int j = 1; j<col; j++) {
            data[i][j] = -j*2;
        }
    }
    for (int i = 0; i<row; i++) {
        for (int j = 0; j<1; j++) {
            data[i][j] = -i*2;
        }
    }


     for (int i = 0; i<row; i++) {
        for (int j = 0; j<col; j++) {
            printf(" %d",data[i][j]) ;
        }
        printf("\n");
    }

  int match = 1;
  int misMatch = -1;
  int gap =-2,lef_adj = 0, up_adj = 0, dia_adj = 0;

   for (int i = 1; i<row; i++) {
        for (int j = 1; j<col; j++) {
            lef_adj = data[i-1][j] + gap;


            up_adj = data[i][j-1] + gap;


            if(ls[i-1] == rs[j-1]) {
                    dia_adj = data[i-1][j-1]+match;
            }
            else {
                    dia_adj = data[i-1][j-1]+misMatch;
            }
            data[i][j]=finMax(lef_adj,up_adj,dia_adj);

        }
   }

   for (int i = 0; i<row; i++) {
        for (int j = 0; j<col; j++) {
            printf("%d ", data[i][j]);
        }

        printf(" \n");
    }

    return 0;
}
