#include<cstdio>
int main(){
    int n,k;
    int x;//报数
    int remain_num;//剩余人数
    //数组a用于存放小朋友编号，数组b用于判断该小朋友是否被淘汰，1未淘汰，0已淘汰
    int a[1010];
    int b[1010];
    scanf("%d %d",&n,&k);
    remain_num = n;
    for(int i = 1;i <= n;i++){
        a[i] = i;
        b[i] = 1;
    }
    int j = 1;
    //开始数数
    for(x = 1;remain_num != 1;x++){
        //淘汰符合条件的人，并将其设置为已淘汰
        if(((x % k == 0) || ((x-k) % 10) == 0) && b[j] == 1){
            remain_num--;
            b[j] = 0;
        }
        //当到最后一个小朋友时，返回最早的未被淘汰的小朋友
        if(j == n){
        	for(int i = 1;i <= n;i++){
        		if(b[i] == 1){
        			j = i-1;
        			break;
				}
			}
		}
        //得到下一个未被淘汰的小朋友的编号
        for(int i = j+1;i <= n;i++){
        	if(b[i] == 1){
    			j = i;
    			break;
			}
			if(i == n){
				for(int i = 1;i < n;i++){
					if(b[i] == 1){
		    			j = i;
		    			break;
					}
				}
				break;
			}
		}
    }
    for(int i = 1;i <= n;i++){
        if(b[i] == 1){
            printf("%d",a[i]);
            break;
        }
    }
    printf("\n");
    return 0;
}