#include<cstdio>
int n,p[11],hashtable[11] = {0};
void generatep(int index){
    if(index == n+1){
        for(int i = 1;i <= n;i++){
            printf("%d",p[i]);
        }
        printf("\n");
        return;
    }
    for(int x = 1;x <= n;x++){
        if(hashtable[x] == 0){
            p[index] = x;
            hashtable[x] = 1;
            generatep(index+1);
            hashtable[x] = 0;
        }
    }
}
int main(){
    n = 3;
    generatep(1);
    return 0;
}