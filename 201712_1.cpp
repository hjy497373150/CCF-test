#include<cstdio>
#include<stdlib.h>
#include<cmath>
int main(){
    int n,min,compare;
    int a[1010];
    scanf("%d",&n);
    for(int i = 0;i < n;i++){
        scanf("%d",&a[i]);
    }
    min = abs(a[0] - a[1]);
    for(int i = 0;i < n;i++){
        for(int k = i+1;k < n;k++){
        	compare = abs(a[i] - a[k]);
            if(min >= compare)
            	min = compare;
            else
            	min = min;
        }
    }
    printf("%d",min);
    printf("\n");
    return 0;
}