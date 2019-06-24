#include<cstdio>
int main(){
    //分别表示小球的个数，线段长度，t秒后小球的位置
    int n,l,t;
    //声明一个数组存放每一个小球的初始位置,此时运动的方向，1为右，0为左
    int a[110];
    int b[110];
    scanf("%d %d %d",&n,&l,&t);
    for(int i = 0;i < n;i++){
        scanf("%d",&a[i]);
        b[i] = 1;
    }
    for(int i = 1;i <= t;i++){
        for(int j = 0;j < n;j++){
            //如果到达右端点
            if(a[j]== l && b[j] == 1){
                a[j] = l-1;
                //运动方向右改左
                b[j] = 0;
            }  
            //如果到达左端点
            else if(a[j] == 0 && b[j] == 0){
                a[j] = 1;
                //运动方向左改右
                b[j] = 1;
            }
            //如果不到达右端点且往右运动
            else if(a[j] != l && b[j] == 1)
                a[j]++;
            //如果不到达左端点且往左运动
            else if(a[j] != 0 && b[j] == 0)
                a[j]--;
        }
        for(int j = 0;j < n;j++){
            int k = j;
            for(int m = k+1;m < n;m++){
                if(a[j] == a[m]){
                    if(b[j] == 1 && b[m] == 0){
                        b[j] = 0;
                        b[m] = 1;
                    }
                    else if(b[j] == 0 && b[m] == 1){
                        b[j] = 1;
                        b[m] = 0;
                    }
                    break;
                }
            }
        }
    }
    for(int i = 0;i < n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    return 0;
}
