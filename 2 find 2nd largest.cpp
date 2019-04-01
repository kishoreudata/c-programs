#include <stdio.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,a[10],k;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    int largest, secondlargest;
    for(int j=0;j<n;j++)
    {   
        for(k=0;k<n-1;k++){
            if(a[k]>a[k+1]){
                a[k]=a[k]+a[k+1];
                a[k+1]=a[k]-a[k+1];
                a[k]=a[k]-a[k+1];
        }
     }   
    } 
    largest=a[n-1];
    for(int l=n-2;l>=0;l--)
        if(a[l]<largest){
            secondlargest=a[l];
            l=-1;
        }
    printf("%d",secondlargest);
    return 0;
}
