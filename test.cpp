#include<cstdio>
int main(){
    //分别表示小球的个数，线段长度，t秒后小球的位置
    int n,l,t;
    //声明一个数组存放每一个小球的初始位置,此时运动的方向，1为右，0为左
    int a[110][1];
    scanf("%d %d %d",&n,&l,&t);
    for(int i = 0;i < n;i++){
        scanf("%d",&a[i][0]);
    }
    for(int i = 0;i < n;i++){
        a[i][1] = 1;
    }
    for(int i = 1;i <= t;i++){
        for(int j = 0;j < n;j++){
            //如果到达右端点
            if(a[j][0] == l && a[j][1] == 1){
                a[j][0] = l;
                //运动方向右改左
                a[j][1] == 0;
            }  
            //如果到达左端点
            else if(a[j][0] == 0 && a[j][1] == 0){
                a[j][0] = 0;
                //运动方向左改右
                a[j][0] == 1;
            }
            //如果不到达右端点且往右运动
            else if(a[j][0] != l && a[j][1] == 1)
                a[j][0]++;
            //如果不到达左端点且往左运动
            else if(a[j][0] != 0 && a[j][1] == 0)
                a[j][0]--;
        }
        for(int j = 0;j < n;j++){
            int flag = 0;
            int k = j;
            for(int m = k+1;m < n;m++){
                if(a[j][0] == a[m][0]){
                    if(a[j][1] == 1 && a[m][1] == 0){
                        a[j][1] == 0;
                        a[m][1] == 1;
                    }
                    else if(a[j][1] == 0 && a[m][1] == 1){
                        a[j][1] == 1;
                        a[m][1] == 0;
                    }
                    flag = 1;
                    break;
                }
            }
            if(flag == 1)
                break;
        }
    }
    for(int i = 0;i < n;i++){
        printf("%d ",a[i][0]);
    }
    printf("\n");
    return 0;
}
