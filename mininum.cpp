//PAT B1023 组个最小数
#include<cstdio>
using namespace std;
int main(){
    int count[10];
    for(int i = 0;i < 10;i++)
        scanf("%d",&count[i]);
    for(int i = 0;i < 10;i++){
        if(count[i]!=0 && i!=0){
             printf("%d",i);
             count[i]--;
             break;
        }
    }
    for(int i = 0;i < 10;i++){
        while(count[i]!=0){
            printf("%d",i);
            count[i]--;
        }
    }
    printf("\n");
    return 0;
}