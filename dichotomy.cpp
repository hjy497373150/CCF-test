//用二分法计算根号2的近似值
#include<cstdio>
#include<cmath>
using namespace std;
int main(){
    const double eps = 1e-5;
    double left = 1,right = 2;
    double mid;
    while(right-left > eps){
        mid = left + (right - left)/2;
        if((pow(mid,2)) > 2)
            right = mid;
        else 
            left = mid;
    }
    printf("%lf\n",mid);
    return 0;
}