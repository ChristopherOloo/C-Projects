#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,j;
	
	for(i=3;i>=1;i--){
//		printf("Smile!"*i);
//		printf("\n");
		for(j=3;j>=1;j--){
			printf("%s", "smile!");
		}
		puts("");
	}
	return 0;
}
