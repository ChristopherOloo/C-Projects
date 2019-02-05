#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	FILE *fp;
	
	fp = fopen("myfile.txt", "w+");
	fprintf(fp, "Life is a journey, not a destination..\n");
	fputs("Always live to your best in life..\n", fp);
	fclose(fp);
	
	return 0;
}
