#include<cstdio>
int main(){
    //�ֱ��ʾС��ĸ������߶γ��ȣ�t���С���λ��
    int n,l,t;
    //����һ��������ÿһ��С��ĳ�ʼλ��,��ʱ�˶��ķ���1Ϊ�ң�0Ϊ��
    int a[110];
    int b[110];
    scanf("%d %d %d",&n,&l,&t);
    for(int i = 0;i < n;i++){
        scanf("%d",&a[i]);
        b[i] = 1;
    }
    for(int i = 1;i <= t;i++){
        for(int j = 0;j < n;j++){
            //��������Ҷ˵�
            if(a[j]== l && b[j] == 1){
                a[j] = l-1;
                //�˶������Ҹ���
                b[j] = 0;
            }  
            //���������˵�
            else if(a[j] == 0 && b[j] == 0){
                a[j] = 1;
                //�˶����������
                b[j] = 1;
            }
            //����������Ҷ˵��������˶�
            else if(a[j] != l && b[j] == 1)
                a[j]++;
            //�����������˵��������˶�
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
