#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;
	char str[30];
	FILE*fp;
	fp=fopen("sample.txt","w");
	
	for(i=0;i<3;i++){
		printf("input a word: ");
		scanf("%s", str);//문자열은 &필요없음 
		fprintf(fp,"%s\n",str);
		printf("\n");
	}
	
	fclose(fp);
}
