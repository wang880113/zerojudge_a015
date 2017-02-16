#include<stdio.h>
int main(void) {
int a[100][100]={};
int r,c,i,j,ch;
while(scanf("%d %d",&r,&c)!=EOF){
	for(j=0;j<r;j++){
		for(i=0;i<c;i++){
			scanf("%d",&a[j][i]);
		}
	}
	for(j=0;j<c;j++){
		for(i=0;i<r;i++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}

    return 0;
}

