#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char c;
	FILE*fp=NULL;
	fp=fopen("sample.txt","r");
	
	while((c=fgetc(fp))!=EOF)//문자변수=fgetc(파일포인터) 
		putchar(c);
	
	
	fclose(fp);
}
