//Topic describe：有一个已排好序的数组，要求输入一个数后，按原来排序的规律将它插入到数组中。
//假设数组长度为10，数组中前9个数（这9个数要求从键盘上输入，输入时要满足自小到大的输入顺序）已经按从小到大进行排序。
//然后再从键盘上输入一个整数，将此整数插入到前有序的9个数中，使得最终的10个数依然是从小到大有序的。
//input:第一行输入以空格分隔的9个整数数，要求按从小到大的顺序输入。
//		第二行输入一个整数
//output:从小到大输出这10个数，每个数一行。
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
