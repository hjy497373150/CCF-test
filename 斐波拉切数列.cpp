//Topic describe：输入一个正整数n，求Fibonacci数列的第n个数。Fibonacci数列的特点：第1,2个数为1,1。从第3个数开始，概述是前面两个数之和。
//input:一个不超过50的正整数
//output:Fibonacci数列的第n个数，末尾输出换行。
//complete time:2019.3.3
//author:Jinyuan Hu

#include<cstdio>
#include<cmath>
int main(){
	int n;
	int i;
	int num,num1,num2;
	num1 = num2 = 1;
	scanf("%d",&n);
	if(n == 1 || n == 2)
		num = 1;
	else{
		for(i=3;i<=n;i++)
		{
			num = num1 + num2;
			num1 = num2;
			num2 = num;
		}
	}
	printf("%d\n",num);
	return 0;
}
