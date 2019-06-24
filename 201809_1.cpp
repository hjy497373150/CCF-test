#include<cstdio>
int main(){
	//???????? 
	int n;
	scanf("%d",&n);
	//??????? 
	int fir_price[1010];
	//??????? 
	int sec_price[1010];
	for(int i = 0;i < n;i++){
		scanf("%d",&fir_price[i]);
	}
	sec_price[0] = (fir_price[0] + fir_price[1])/2;
	sec_price[n-1] = (fir_price[n-2] + fir_price[n-1])/2;
	for(int i = 1;i < n-1;i++){
		sec_price[i] = (fir_price[i-1]+fir_price[i]+fir_price[i+1])/3;
	}
	for(int i = 0;i < n;i++){
		printf("%d ",sec_price[i]);
	}
	printf("\n");
	return 0;
}
