#include<cstdio>
int main(){
	//红绿灯设置 
	int r,y,g;
	//总共经过的道路段数和看到的红绿灯数目
	int n;
	int k,t;
	//总用时 
	int totaltime = 0;
	scanf("%d %d %d",&r,&y,&g);
	scanf("%d",&n);
	for(int i = 0;i < n;i++){
		scanf("%d %d",&k,&t);
		switch(k){
			case 0:
				totaltime = totaltime + t;
				break;
			case 1:
				totaltime = totaltime + t;
				break;
			case 2:
				totaltime = totaltime + t + r;
				break;
			case 3:
				totaltime = totaltime;
				break;
		}
	}
	printf("%d",totaltime);
	printf("\n");
	return 0;
} 
