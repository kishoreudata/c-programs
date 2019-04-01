#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char*s;
    s=(char*)malloc(1024*sizeof(char));
    scanf("%[^\n]",s);
    s=(char*)realloc(s,strlen(s)+1);
	int a[10];   
	int i;
	for(i=0;i<10;i++)
	a[i]=0;
    while(*s!=NULL){
    	for(i=0;i<10;i++)
    	if(*s==48+i)
    	a[i]+=1;
    	s++;
	}
	for(i=0;i<10;i++)
	printf("%d ",a[i]);
    return 0;
}
