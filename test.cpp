#include<cstdio>
int n,v,maxvalue = 0;
int w[30],c[30];
void DFS(int index,int sumw,int sumc){
	if(index == n){
		if(sumw <= v && sumc > maxvalue){
			maxvalue = sumc;
		}
		return;
	}
	DFS(index+1,sumw,sumc);
	DFS(index+1,sumw+w[index],sumc+c[index]);
}
int main(){
	scanf("%d %d",&n,&v);
	for(int i = 0;i < n;i++){
		scanf("%d",&w[i]);
	}
	for(int i = 0;i < n;i++){
		scanf("%d",&c[i]);
	}
	DFS(0,0,0);
	printf("%d",maxvalue);
	printf("\n");
	return 0;
}

