#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,j,temp;
    for(i=1;i<2*n;i++){
        for(j=1;j<2*n;j++){
        if(i<n){
            if(j<n){
            temp = (i<j)? n-i+1:n-j+1;    
            }
            else{
            temp= (n-i+1>j-n+1)? n-i+1:j-n+1;
            }
        }
        else{
            if(j<n){
            temp= (2*n-i<j)? i-n+1:n-j+1;
            }
            else{
            temp= (i>j)? i-n+1:j-n+1;    
            }
        }
        printf("%d ",temp);
        }
        printf("\n");
    }
    
    return 0;
    
}
