//Topic describe����һ�����ź�������飬Ҫ������һ�����󣬰�ԭ������Ĺ��ɽ������뵽�����С�
//�������鳤��Ϊ10��������ǰ9��������9����Ҫ��Ӽ��������룬����ʱҪ������С���������˳���Ѿ�����С�����������
//Ȼ���ٴӼ���������һ�������������������뵽ǰ�����9�����У�ʹ�����յ�10������Ȼ�Ǵ�С��������ġ�
//input:��һ�������Կո�ָ���9����������Ҫ�󰴴�С�����˳�����롣
//		�ڶ�������һ������
//output:��С���������10������ÿ����һ�С�
//complete time:2019.3.4
//author:Jinyuan Hu
#include<cstdio>
#include<cmath>
#include<cstring> 
int main(){
	int sort[10];
	int temp;
	for(int i = 1;i < 10;i++){
		scanf("%d",&sort[i]);
	}
	scanf("%d",&sort[0]);
	for(int j = 1;j < 10;j++){
		for(int m = 0;m < 10-j ;m++){
			if(sort[m] > sort[m+1]){
				temp = sort[m+1];
				sort[m+1] = sort[m];
				sort[m] = temp;
			}
		}
	}
	for(int n = 0;n < 10;n++)
		printf("%d\n",sort[n]);
	printf("\n");
	return 0;
}
