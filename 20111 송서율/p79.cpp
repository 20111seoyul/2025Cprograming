#include<stdio.h>
int n, d[1001];
int main(){
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        scanf("%d",&d[i]);
    }

    for(int i=0; i<n; i++)
        printf("%d ",d[i]);


    return 0;