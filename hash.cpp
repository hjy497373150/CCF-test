#include<cstdio>
const int maxn = 100010;
int hashtable[maxn] = {0};
int main(){
    int n,m,x;
    scanf("%d %d",&n,&m);
    for(int i = 0;i < n;i++){
        scanf("%d",&x);
        hashtable[x] = 1;
    }
    for(int i = 0;i < m;i++){
        scanf("%d",&x);
        if(hashtable[x] == 1)
            printf("yes\n");
        else
            printf("no\n");
    }
    return 0;
}