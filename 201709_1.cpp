#include<cstdio>
int main(){
    int N,num;
    int five_n,three_n;
    scanf("%d",&N);
    five_n = N / 50;
    three_n = (N - 50 * five_n) / 30;
    num = five_n * 7 + three_n * 4 + (N - 50 * five_n - 30 * three_n) / 10;
    printf("%d\n",num);
    return 0;
}