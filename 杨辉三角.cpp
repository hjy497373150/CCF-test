//Topic describe����Ҫ���������¸�ʽ���������
/*	1
	1 1
	1 2 1
	1 3 3 1
	1 4 6 4 1
	1 5 10 10 5 1
������10��*/
//input:����ֻ����һ��������n����ʾ��Ҫ�����������ǵĲ�����
//output:��Ӧ�ڸ����룬�������Ӧ������������ǣ�ÿһ�������֮����һ���ո����
//complete time:2019.3.4
//author:Jinyuan Hu
#include<cstdio>
#include<cmath>
#include<cstring> 
int main(){
	int n;
	scanf("%d",&n);
	int **array = new int*[n];
	for(int i = 0;i < n;i++){
		array[i] = new int [n];
	}
	for(int i = 0;i < n;i++){
		array[i][0] = 1;
		array[i][i] = 1;
		if(i >= 2 ){
			for(int j = 1; j < i;j++){
				array[i][j] = array[i-1][j-1] + array[i-1][j];
			}
		}
	}
	for(int i = 0;i < n;i++){
		for(int j = 0;j < i+1;j++)
			printf("%d ",array[i][j]);
		printf("\n");
	}
	printf("\n");
	for(int i = 0;i < n;i++){
		delete [] array[i];
	}
	return 0;
}
