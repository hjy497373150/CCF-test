#include<cstdio>
int main(){
    int n,k;
    int x;//����
    int remain_num;//ʣ������
    //����a���ڴ��С���ѱ�ţ�����b�����жϸ�С�����Ƿ���̭��1δ��̭��0����̭
    int a[1010];
    int b[1010];
    scanf("%d %d",&n,&k);
    remain_num = n;
    for(int i = 1;i <= n;i++){
        a[i] = i;
        b[i] = 1;
    }
    int j = 1;
    //��ʼ����
    for(x = 1;remain_num != 1;x++){
        //��̭�����������ˣ�����������Ϊ����̭
        if(((x % k == 0) || ((x-k) % 10) == 0) && b[j] == 1){
            remain_num--;
            b[j] = 0;
        }
        //�������һ��С����ʱ�����������δ����̭��С����
        if(j == n){
        	for(int i = 1;i <= n;i++){
        		if(b[i] == 1){
        			j = i-1;
        			break;
				}
			}
		}
        //�õ���һ��δ����̭��С���ѵı��
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