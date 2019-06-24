//Topic describe：求一元二次方程ax2+bx+c=0的根，三个系数a, b, c由键盘输入，且a不能为0，但不保证b2-4ac>0。程序中所涉及的变量均为double类型。
//input:以空格分隔的一元二次方程的三个系数，双精度double类型
//output:分行输出两个根如下（注意末尾的换行）：
/*	r1=第一个根
  	r2=第二个根
	结果输出时，宽度占7位，其中小数部分2位。如果方程无实根，输出一行如下信息（注意末尾的换行）：
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
