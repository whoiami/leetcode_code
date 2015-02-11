#include <stdio.h>
#include <string.h>
void setzeros(int m,int array[][m]){
    int row[m],collumn[m],i,j;
    memset(row,1,sizeof(row));
    memset(collumn,1,sizeof(collumn));
    for(i = 0;i<m;i++){
	for(j=0;j<m;j++){
	    if(array[i][j]==0){
		row[i]=0;
		collumn[j]=0;
	    }
	}
    }
    for(i=0;i<m;i++){
	if(row[i]==0){for(j=0;j<m;j++)array[i][j]=0;}	
	if(collumn[i]==0){for(j=0;j<m;j++)array[j][i]=0;}
    }
}

void main(){
    int i,j,array[4][4]={{1,1,1,0},{1,0,1,1},{1,1,1,1},{1,1,1,1}};
    setzeros(4,array);
    for(i=0;i<4;i++){
	for(j=0;j<4;j++){
	    printf("%d",array[i][j]);
	}	
	printf("\n");
    }
}
