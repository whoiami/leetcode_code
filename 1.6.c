#include <stdio.h>

void rotate(int n,int array[][n]){
   int first,layer,last,i,offset;
   for(layer=0;layer < n/2; ++layer){
    	first = layer;
	last = n - 1 - layer;
	for(i=first; i< last;++i){
	    offset=i-first;
	    // save top
	    int top =array[first][i];
	    //left->top
	    array[first][i] = array[last-offset][first];
	    //bottom -> left
	    array[last-offset][first] = array[last][last-offset];
	    //right-> bottom
	    array[last][last-offset] = array[i][last];
	    //top->right
	    array[i][last] = top;
	}
    } 
}

void main(){
    int array[4][4]={{1,1,1,1},{2,2,2,2},{3,3,3,3},{4,4,4,4}};
    rotate(4,array);

}
