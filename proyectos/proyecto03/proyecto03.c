#include<stdio.h>
#include<math.h>
long long ultk(int n,int p,long long oper){
       long long res = 1, base = n;
       while (p) {
               if (p&1) {
                       res = (res*base)%oper;
               }
               base = (base*base)%oper;
               p>>=1;
       }
       return res;
}
long long primk(int n,int k){
       long double m = n*log10l(n);
       long double p = powl(10,m-(int)m);
       long long res = (long long)(p*pow(10,k));
       long long value = (long long)pow(10,k);
       while(res>=value) res/=10;
       return res;
}
int main(){
       int N;
       scanf("%d",&N);
       while(N--){
               int n,k;
               scanf("%d %d",&n,&k);
               long long oper = pow(10,k);
               printf("%lld %0*lld\n",primk(n,k),k,ultk(n,n,oper));	        }
       return 0;
}
