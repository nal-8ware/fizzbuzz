#include <stdio.h>
#include <string.h>

void main() {
	char c[9] = "";
	char f[] = "Fizz";
	char b[] = "Buzz";
	char r[9];
	int i;
	int m = 100;
	for (i=1; i<=m; i++){
		strcpy(r, c);
		if(i % 3 == 0){
			strcat(r, f);
		}
		if(i % 5 == 0){
			strcat(r, b);
		}
		if(strcmp(r,c)==0){
			sprintf(r, "%d", i); 
		}
		printf("%s\n",r);
	}
}
