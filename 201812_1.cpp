#include<cstdio>
int main(){
	//���̵����� 
	int r,y,g;
	//�ܹ������ĵ�·�����Ϳ����ĺ��̵���Ŀ
	int n;
	int k,t;
	//����ʱ 
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
