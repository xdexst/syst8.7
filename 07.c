#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	printf("Test v8.7: OK.\n");
	srand(time(0));

	int k,i,j,a[3][4],array[12];
	
	printf("Array:\n");
	for(i=0;i<12;i++) {
		array[i]=rand()%9+1;
		if(i==11){printf("%d\n",array[i]);}
		else {printf("%d, ",array[i]);}
	}
	
	printf("\nFisrt method:\n");
	k=0;
	for(i=0;i<3;i++) {
		for(j=0;j<4;j++) {
			a[i][j]=array[k];
			k++;
			if(j==3){printf("%d\n",a[i][j]);}
			else {printf("%d, ",a[i][j]);}
		}
	}
	
	k=0;
	for(i=0;i<4;i++) {
		for(j=0;j<3;j++) {
			a[j][i]=array[k];
			k++;
		}
	}
	printf("\nSecond method:\n");
	for(i=0;i<3;i++) {
		for(j=0;j<4;j++) {
			if(j==3){printf("%d\n",a[i][j]);}
			else {printf("%d, ",a[i][j]);}
		}
	}
	
	return 0;
}
