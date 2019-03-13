#include<cstdio>
int main(){
	//红绿灯设置 
	int r,y,g;
	//总共经过的道路段数和看到的红绿灯数目
	int n;
	int k,t;
	//总用时
	long long totaltime = 0;
	scanf("%d %d %d",&r,&y,&g);
	int circle = r+y+g;
	int r_flag,y_flag,g_flag;
	scanf("%d",&n);
	for(int i = 0;i < n;i++){
		scanf("%d %d",&k,&t);
		switch(k){
			case 0:
				totaltime = totaltime + t;
				break;
			case 1:
				r_flag = totaltime % circle;
				//红变红 
				if(r_flag <= t)
					totaltime = totaltime + t - r_flag;
				//红变绿 
				else if(r_flag > t && r_flag <= (t+g))
					totaltime = totaltime;
				//红变黄或红再次变红 
				else if(r_flag > (t+g))
					totaltime = totaltime + y - r_flag + t + g + r;
				/*else if(r_flag > (t+g+y))
					totaltime = totaltime + r - r_flag + t + g + y;*/
				break;
			case 2:
				y_flag = totaltime % circle;
				//黄变黄或黄变红 
				if(y_flag <= (t+r))
					totaltime = totaltime + t + r - y_flag;
				//黄变绿 
				else if(y_flag > (t+r) && y_flag <= (t+r+g))
					totaltime = totaltime;
				//黄再次变黄 
				else if(y_flag > (t+r+g))
					totaltime = totaltime + y - y_flag + t + g + r + r;
				break;
			case 3:
				g_flag = totaltime % circle;
				//绿变绿或绿再次变绿 
				if(g_flag <= t || g_flag > (t+y+r))
					totaltime = totaltime;
				//绿变黄 
				else if(g_flag > t && g_flag <= (t+y))
					totaltime = totaltime + y-(g_flag-t) + r;
				//绿变红 
				else if(g_flag > t+y && g_flag <= (t+y+r))
					totaltime = totaltime + r-(g_flag-t-y);
				break;
		}
	}
	printf("%lld",totaltime);
	printf("\n");
	return 0;
} 
