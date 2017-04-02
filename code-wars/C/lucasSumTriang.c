#include <stdio.h>
#include <stdlib.h>
int sumTriangularNumbers(int n){
	int  **m;
	int row, col, i, j , counter;
	
	scanf(" %d %d", &row, &col);
  
	m = (int **) malloc(sizeof(int*) * row);
	for(counter=0;counter<row;counter++){
	    m[counter] = (int *) malloc(sizeof(int) * col);
	}
  
	for( i= 0; i <row; i++){
	    for(j=0;j<col;j++){
		scanf(" %d", &m[i][j]);
	    }
	}
  
	for( i= 0; i <row; i++){
	    for(j=0;j<col;j++){
		printf("%d, ", m[i][j]);
	    }
	    printf("\n");
	}
  
	for(counter=0;counter<row;counter++){
	    free(m[counter]);
	}
  
	free(m);
	return 0;
}


int main(){
    
    
    sumTriangularNumbers(4);

    return 0;
}
