//Topic describe������һ��������n����Fibonacci���еĵ�n������Fibonacci���е��ص㣺��1,2����Ϊ1,1���ӵ�3������ʼ��������ǰ��������֮�͡�
//input:һ��������50��������
//output:Fibonacci���еĵ�n������ĩβ������С�
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
