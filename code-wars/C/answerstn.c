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
	



	    free(m[counter]);
	}
  
	free(m);

	return soma;
}
