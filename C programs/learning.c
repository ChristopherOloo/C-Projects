#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char name[10];
	static char mej[] = "Waiting for ";
	
	char quote[] ="Pursue Excellence ,";
	char quote1[] = "Success Will Follow";
	char quote2[25];
	int len;
	
	strcpy(quote2,quote);
	printf(" Always %s\n",quote2);
	
	strcat(quote,quote1);
	printf("%s\n",quote);
	
	len = strlen(quote);
	printf("%d\n",len);
	
	
	strcat(mej, "Love");
	printf("Enter your name\n");
	scanf("%s",&name);
	printf("You name is %s\n",name);
	printf("You are %s\n",mej);
	
	
	return 0;
}
