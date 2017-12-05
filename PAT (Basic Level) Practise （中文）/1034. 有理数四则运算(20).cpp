#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
#include<vector>
#include<set>
using namespace::std;
typedef long long int ll;
ll gcd(ll a,ll b)
{
	return b==0?a:gcd(b,a%b);
}
struct Fraction
{
	ll up;
	ll down;
}a,b;
Fraction reduction(Fraction result)
{
	if(result.down<0)
	{
		result.up=-result.up;
		result.down=-result.down;
	}
	if(result.up==0)
		result.down=1;
	else
	{
		ll d=gcd(abs(result.up),abs(result.down));
		result.up/=d;
		result.down/=d;
	}
	return result;
}
Fraction add(Fraction f1,Fraction f2)
{
	Fraction result;
	result.up=f1.up*f2.down+f2.up*f1.down;
	result.down=f1.down*f2.down;
	return reduction(result);
}
Fraction minu(Fraction f1,Fraction f2)
{
	Fraction result;
	result.up=f1.up*f2.down-f2.up*f1.down;
	result.down=f1.down*f2.down;
	return reduction(result);
}
Fraction multi(Fraction f1,Fraction f2)
{
	Fraction result;
	result.up=f1.up*f2.up;
	result.down=f1.down*f2.down;
	return result;
}
Fraction divide(Fraction f1,Fraction f2)
{
	Fraction result;
	result.up=f1.up*f2.down;
	result.down=f2.up*f1.down;
	return reduction(result);
}
void showresult(Fraction r)
{
	r=reduction(r);
	if(r.up<0)
		printf("(");
	if(r.down==1)
		printf("%lld",r.up);
	else if(abs(r.up)>r.down)
	{
		printf("%lld %lld/%lld",r.up/r.down,abs(r.up)%r.down,r.down);
	}
	else
	{
		printf("%lld/%lld",r.up,r.down);
	}
	if(r.up<0)
		printf(")");
}
int main()
{
	scanf("%lld/%lld %lld/%lld",&a.up,&a.down,&b.up,&b.down);
	showresult(a);
	printf(" + ");
	showresult(b);
	printf(" = ");
	showresult(add(a,b));
	printf("\n");
	showresult(a);
	printf(" - ");
	showresult(b);
	printf(" = ");
	showresult(minu(a,b));
	printf("\n");
	showresult(a);
	printf(" * ");
	showresult(b);
	printf(" = ");
	showresult(multi(a,b));
	printf("\n");
	showresult(a);
	printf(" / ");
	showresult(b);
	printf(" = ");
	if(b.up==0)
		printf("Inf");
	else
		showresult(divide(a,b));
	printf("\n");
	return 0;
}
