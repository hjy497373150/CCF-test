//Topic describe����һԪ���η���ax2+bx+c=0�ĸ�������ϵ��a, b, c�ɼ������룬��a����Ϊ0��������֤b2-4ac>0�����������漰�ı�����Ϊdouble���͡�
//input:�Կո�ָ���һԪ���η��̵�����ϵ����˫����double����
//output:����������������£�ע��ĩβ�Ļ��У���
/*	r1=��һ����
  	r2=�ڶ�����
	������ʱ�����ռ7λ������С������2λ�����������ʵ�������һ��������Ϣ��ע��ĩβ�Ļ��У���
	No real roots!*/
//complete time:2019.3.3
//author:Jinyuan Hu

#include<stdio.h>
#include<math.h>
int main(){
    double a,b,c;
    double s1,s2;
    double r1,r2;
    scanf("%lf %lf %lf",&a,&b,&c);
    if(a == 0)
    {
        printf("a can not be 0,please input again!\n");
        return 0;
    }
    s1 = b*b - 4*a*c;
    if(s1 < 0)
    {
        printf("No real roots!\n");
        return 0;
    }
    s2 = sqrt(s1);
    r1 = (b*(-1) + s2)/(2*a);
    r2 = (b*(-1) - s2)/(2*a);
    printf("%7.2f\n",r1);
    printf("%7.2f\n",r2);
    return 0;
}
