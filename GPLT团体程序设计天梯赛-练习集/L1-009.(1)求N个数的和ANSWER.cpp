#include <stdio.h>

long long gcd(long long a,long long b)
{
  if(a == 0)
    return 0;
  else
    return (b == 0) ? a : gcd(b, a % b);
}

int main()
{
  int N;
  long long lcp;
  long long a,b,c,d;
  int i = 1;
  scanf("%d",&N);
  scanf("%lld/%lld",&a,&b);
  int t0 = gcd(a,b);
  if(a)
  {
        a /= t0;
        b /= t0;
  }

  while(i < N)
  {
    scanf("%lld/%lld",&c,&d);
    lcp = b / gcd(b,d) * d;
    a = a * lcp / b + c * lcp / d;
    b = lcp;
    int t0 = gcd(a,b);
    if(t0 != 0)
	{
            a = a / t0;
            b = b / t0;
    }
    i++;
  }
  if(a && a/b == 0)/// 整数部分为0 且 a不为 0
    printf("%lld/%lld\n",a%b,b);
  else if(a%b == 0)/// 小数部分为0
    printf("%lld\n",a/b);
  else
    printf("%lld %lld/%lld\n",a/b,a%b,b);
  return 0;
}
