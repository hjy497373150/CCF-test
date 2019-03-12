//Topic describe����һ������Ϊ����L(1<=L<=10000)����·����������������ϳ���ΪL��һ���߶Σ����������ԭ�㣬
//��ÿ�������������һ����������0,1,2��...��L��L+1��λ������L+1������
//����Ҫ����һЩ�������ߵ�����������һ�����ֱ�ʾ���� 100 200��ʾ���ߴ�100��200֮�䣨�����˵㣩���е�����
//������M(1<=M<=100)�����䣬����֮��������ص�������Ҫ�����������������֮��ʣ�µ����ĸ�����
//input:��������L(1<=L<=10000)��M(1<=M<=100)����������M��������ÿ����һ�����֡�
//output:�����ж����������ݣ�����ÿ���������ݣ����һ��������ʾ���������������֮��ʣ�µ����ĸ�����
//complete time:2019.3.6
//author:Jinyuan Hu
#include<cstdio>
#include<cmath>
#include<cstring>
int main(){
	int L,M;
	int groupnum = 0;
	scanf("%d %d",&L,&M);
	int rest[100];
	while(L>=1 && L<=10000 && M>=1 && M<=100){
		int max,min;
		int leftnum,rightnum;
		for(int i = 0;i < M;i++){
			scanf("%d %d",&leftnum,&rightnum);
			if(i == 0){
				min = leftnum;
				max = rightnum;
			}
			if(leftnum < min){
				min = leftnum;
			}
			if(rightnum > max){
				max = rightnum;
			}
		}
		rest[groupnum] = L-max+min;
		groupnum++;
		scanf("%d %d",&L,&M);
	}
	for(int i = 0;i < groupnum;i++){
		printf("%d\n",rest[i]);
	}
	return 0;
}
	
