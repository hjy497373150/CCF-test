//Topic describe������10����������������С�������һ�����Ի���
//				�������������һ�����Ի���Ҫ����3������ʵ�֣�
//				�ֱ�Ϊ����10���������д������10������Ҫ��ʹ��ָ��ķ������д���
//input:�ÿո������10��������
//output:�����������Ŀ��������֮���10��������ÿ������֮�����һ���ո���ע����β������С�
//complete time:2019.3.5
//author:Jinyuan Hu
#include<cstdio>
#include<cmath>
#include<cstring>
void input(int a[]){
	for(int i = 0;i < 10;i++){
		scanf("%d",&a[i]);
	}
}

void deal(int *p){
	int min,max;
	min = 0;
	max = 0;
	for(int i = 0;i < 9;i++){
		if(*(p+min) >= *(p+i+1)){
			min = i+1;
		}
		if(*(p+max) <= *(p+i+1)){
			max = i+1;
		}
	}
	int tempmin = *(p+min);
	*(p+min)= *p;
	*p = tempmin;
	int tempmax = *(p+max);
	*(p+max)= *(p+9);
	*(p+9)= tempmax;
}

void output(int a[]){
	for(int i = 0;i < 10;i++){
		printf("%d ",a[i]);
	}
}
int main(){
	int a[10];
	int *p = a;
	input(a);
	deal(p);
	output(a);
	printf("\n");
	return 0;
}
	
