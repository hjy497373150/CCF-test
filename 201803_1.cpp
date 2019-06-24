#include<cstdio>
int main(){
    //存放每一个数字
    int a[40];
    //得分
    int num = 0;
    int lastscore;
    for(int i = 0;i < 30;i++){
        scanf("%d",&a[i]);
        if(a[i] == 1)
            num = num + 1;
        else if(a[i] == 2 && (a[i-1] == 1 || i == 0)){
            num = num + 2;
            lastscore = 2;
        }
        else if(a[i] == 2){
            lastscore = lastscore + 2;
            num = num + lastscore;
        }
        else if(a[i] == 0)
            break;
    }
    printf("%d",num);
    printf("\n");
    return 0;
}