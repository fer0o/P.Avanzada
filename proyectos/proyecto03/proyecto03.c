#include<stdio.h>
#include<math.h>
long long ultimok(int n,int p,long long kp)
{
       long long res = 1, base = n;
       while (p) {
               if (p&1) {
                       res = (res*base)%kp;
               }
               base = (base*base)%kp;
               p>>=1;
       }
       return res;
}
long long primerk(int n,int k)
{
       long double m = n*log10l(n);
       long double p = powl(10,m-(int)m);
       long long res = (long long)(p*pow(10,k));
       long long value = (long long)pow(10,k);
       while(res>=value) res/=10;
       return res;
}
int main()
{
       int N;
       scanf("%d",&N);
       while(N--)
       {
               int n,k;
               scanf("%d %d",&n,&k);
               long long kp = pow(10,k);
               printf("%lld %0*lld\n",primerk(n,k),k,ultimok(n,n,kp));	        }
       return 0;
}
