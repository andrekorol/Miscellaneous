#include <stdio.h>
#include <stdlib.h>
int sumTriangularNumbers(int n){
	int  **m;
	int row, col, i, j , counter, num, r, c, soma;

	num = 1;
	row = n;
	col = n;
	m = (int **) malloc(sizeof(int*) * row);
	for(counter=0;counter<row;counter++){
	    m[counter] = (int *) malloc(sizeof(int) * col);
	}
  

	counter = 0;
	r = 0;
	c = 0;
	
	soma = 0;
	
	while (counter < n){
	    m[r][c] = num;
	   
	    if (r == c){
		soma += num;
		r += 1;
		c = 0;
		counter += 1;
		num += 1;
	    }
	    else {
		c +=1;
		num += 1;
	    }
	}
	    
	for( i= 0; i <row; i++){
	    for(j=0;j<col;j++){
		printf("%d, ", m[i][j]);
	    }
	    printf("\n");
	}

	counter = 0;
	r = 0;
	c = 0;
	while (counter < n - 1){
	    printf("%d + ", m[r][c]);
	    r += 1;
	    c += 1;
	    counter += 1;
	}
	
	

	printf("%d = %d\n", m[r][c],  soma);

	for( counter = 0; counter < row; counter++){
	    free(m[counter]);
	}
  
	free(m);
	return 0;
}


int main(){
    
    
    sumTriangularNumbers(4);

    return 0;
}
