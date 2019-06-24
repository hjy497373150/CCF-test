//Topic describe：按要求输入如下格式的杨辉三角
/*	1
	1 1
	1 2 1
	1 3 3 1
	1 4 6 4 1
	1 5 10 10 5 1
最多输出10层*/
//input:输入只包含一个正整数n，表示将要输出的杨辉三角的层数。
//output:对应于该输入，请输出相应层数的杨辉三角，每一层的整数之间用一个空格隔开
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
