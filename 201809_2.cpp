#include<cstdio>
int main(){
	//时间段的数量 
	int n;
	scanf("%d",&n);
	int a[2010],b[2010],c[2010],d[2010];
	int talktime = 0;
	for(int i = 0;i < n;i++){
		scanf("%d %d",&a[i],&b[i]);
	}
	for(int i = 0;i < n;i++){
		scanf("%d %d",&c[i],&d[i]);
	}
	for(int i = 0;i < n;i++){
		for(int j = 0;j < n;j++){
			if(a[i] >= d[j] || b[i] <= c[j]){
				talktime = talktime;
			}
			else if(a[i] >= c[j] && a[i] <= d[j] && b[i] >= c[j] && b[i] >= d[j])
				talktime = talktime + d[j] - a[i];
			else if(a[i] >= c[j] && a[i] <= d[j] && b[i] >= c[j] && b[i] <= d[j])
				talktime = talktime + b[i] - a[i];
			else if(a[i] <= c[j] && a[i] <= d[j] && b[i] >= c[j] && b[i] >= d[j])
				talktime = talktime + d[j] - c[j];
			else if(a[i] <= c[j] && a[i] <= d[j] && b[i] >= c[j] && b[i] <= d[j])
				talktime = talktime + b[i] - c[j];
		}
	}
	printf("%d",talktime);
	printf("\n");
	return 0;
}
