#include<cstdio>
int main(){
    //�ֱ��ʾС��ĸ������߶γ��ȣ�t���С���λ��
    int n,l,t;
    //����һ��������ÿһ��С��ĳ�ʼλ��,��ʱ�˶��ķ���1Ϊ�ң�0Ϊ��
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
            //��������Ҷ˵�
            if(a[j][0] == l && a[j][1] == 1){
                a[j][0] = l;
                //�˶������Ҹ���
                a[j][1] == 0;
            }  
            //���������˵�
            else if(a[j][0] == 0 && a[j][1] == 0){
                a[j][0] = 0;
                //�˶����������
                a[j][0] == 1;
            }
            //����������Ҷ˵��������˶�
            else if(a[j][0] != l && a[j][1] == 1)
                a[j][0]++;
            //�����������˵��������˶�
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
