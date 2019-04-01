#include<stdio.h>
#include<math.h>
void showbits(int a){
	int i=1;
	while(i>0)
	{
		for(int j=15;j>=0;j--){
			int k=a>>j;
			((k%2)==0)? printf("0"):printf("1");
		}
		i-=1;
	}
}
int main()
{
//	for(int j=0;j<5;j++){
	showbits(j);
//	printf("\n");   }
	return 0;
}
