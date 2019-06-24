//Topic describe：输入10个整数，将其中最小的数与第一个数对换，
//				把最大的数与最后一个数对换。要求用3个函数实现，
//				分别为输入10个数、进行处理、输出10个数。要求使用指针的方法进行处理。
//input:用空格隔开的10个整数。
//output:对输出进行题目描述操作之后的10个整数，每个整数之后输出一个空格。请注意行尾输出换行。
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
	
