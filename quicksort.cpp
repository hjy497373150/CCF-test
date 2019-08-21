//快速排序
#include<cstdio>
using namespace std;
int partitition(int a[],int left,int right){
    int temp = a[left];
    while(left < right){
        while(left < right && a[right] > temp)
            right--;
        a[left] = a[right];
        while(left < right && a[left] <= temp)
            left++;
        a[right] = a[left];
    }
    a[left] = temp;
    return left;
}
int quickSort(int a[],int left,int right){
    if(left < right){
        int pos = partitition(a,left,right);
        quickSort(a,left,pos-1);
        quickSort(a,pos+1,right);
    }
}
int main(){
    int a[10] = {35,18,16,72,24,65,12,88,46,28};
    quickSort(a,0,10);
    for(int i = 0;i < 10;i++)
        printf("%d ",a[i]);
    printf("\n");
    return 0;
}