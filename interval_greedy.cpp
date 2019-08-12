#include<cstdio>
#include<algorithm>
using namespace std;
const int maxn = 100; 
struct interval{
    int si,ei;
}Interval[maxn];
bool cmp(interval a,interval b){
    if(a.si != b.si)
        return a.si > b.si;
    else return a.ei < b.ei;
}
int main(){
    int n;
    int flag;
    int num = 1;
    while(scanf("%d",&n),n!=0){
        for(int i = 0;i < n;i++){
            scanf("%d %d",&Interval[i].si,&Interval[i].ei);
        }
        sort(Interval,Interval+n,cmp);
        int lastx = Interval[0].si;
        for(int i = 1;i < n;i++){
            if(Interval[i].ei <= lastx){
                lastx = Interval[i].si;
                num++;
            }
        }
    }
    printf("%d",num);
    printf("\n");
    return 0;
}
