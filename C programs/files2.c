#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	FILE *fp;
	char buff[100];
	
	fp = fopen("myfile.txt", "r");
	
	fscanf(fp, "%s", buff);
	printf("1: %s\n", buff);
	
	fgets(buff, 255, (FILE*)fp);
	printf("2: %s\n", buff);
	
	fgets(buff, 255, (FILE*)fp);
	printf("3: %s\n",buff);
	
	fclose(fp);
	return 0;
}
