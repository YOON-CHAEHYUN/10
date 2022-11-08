#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char str[30];
	FILE*fp=NULL;
	fp=fopen("sample.txt","r");
	
	while((fgets(str,30,fp))!=NULL)
		printf("%s",str);
	
	
	fclose(fp);
}
