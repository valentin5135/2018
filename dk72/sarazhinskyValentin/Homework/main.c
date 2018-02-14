#include <stdio.h>
#include <stdlib.h>
#include "dk_tool.h"
 int lines,columns,i,j;
 
int main(int argc, char *argv[]){
	printf("enter the length of the lines:");
	scanf("%d",&lines);
	printf("enter the length of the columns:");
	scanf("%d",&columns);
	char matrix[lines][columns];
	for(i=0;i<lines;i++){
		for(j=0;j<columns;j++){
			printf("matrix[%d][%d]:",i,j);
			scanf("%d",&matrix[i][j]);		
		}
	}
		for(i=0;i<columns;i++){
		for(j=0;j<lines;j++){
			printf("%d    ",matrix[j][i]);			
		}
		printf("\n");
	}
	
	return 0;
}
