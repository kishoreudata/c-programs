#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char *s;
    s = (char*)malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = (char*)realloc(s, strlen(s) + 1);
    //Write your logic to print the tokens of the sentence here.
    int i=0;
    for(;i<strlen(s);i++){
	if(*(s+i)==' ')
	printf("\n");
	else
	printf("%c",*(s+i));
	}
    return 0;
}

