#include<iostream>
using namespace std;
char digits[]= {'0','1','2','3','4','5','6','7','8','9'};
void convert(long long y,long long x)
{
	if(x!=0)
	{
		convert(y,x/y);
		printf("%c",digits[x%y]);
	}
}
int main()
{
	long long a,b;
	int d;
	scanf("%lld%lld%d",&a,&b,&d);
	if(a+b==0)
		printf("0\n");
	else
	{
		int s=a+b;
		convert(d,s);
		printf("\n");
	}
	return 0;
}
