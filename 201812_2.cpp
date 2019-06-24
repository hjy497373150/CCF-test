#include<cstdio>
int main(){
	//????????? 
	int r,y,g;
	//??????????¡¤??????????????????
	int n;
	int k,t;
	//?????
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
				//???? 
				if(r_flag <= t)
					totaltime = totaltime + t - r_flag;
				//????? 
				else if(r_flag > t && r_flag <= (t+g))
					totaltime = totaltime;
				//????????¦Á?? 
				else if(r_flag > (t+g))
					totaltime = totaltime + y - r_flag + t + g + r;
				/*else if(r_flag > (t+g+y))
					totaltime = totaltime + r - r_flag + t + g + y;*/
				break;
			case 2:
				y_flag = totaltime % circle;
				//???????? 
				if(y_flag <= (t+r))
					totaltime = totaltime + t + r - y_flag;
				//????? 
				else if(y_flag > (t+r) && y_flag <= (t+r+g))
					totaltime = totaltime;
				//????¦Á?? 
				else if(y_flag > (t+r+g))
					totaltime = totaltime + y - y_flag + t + g + r + r;
				break;
			case 3:
				g_flag = totaltime % circle;
				//??????????¦Á??? 
				if(g_flag <= t || g_flag > (t+y+r))
					totaltime = totaltime;
				//???? 
				else if(g_flag > t && g_flag <= (t+y))
					totaltime = totaltime + y-(g_flag-t) + r;
				//???? 
				else if(g_flag > t+y && g_flag <= (t+y+r))
					totaltime = totaltime + r-(g_flag-t-y);
				break;
		}
	}
	printf("%lld",totaltime);
	printf("\n");
	return 0;
} 
