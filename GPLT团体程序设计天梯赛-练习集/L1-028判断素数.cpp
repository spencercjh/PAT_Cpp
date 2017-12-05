#include<cstdio>
#include<cmath>
using namespace::std;
bool isprime(long long int a)
{
	if(a==1)
		return false;
	for(int i=2;i<=sqrt(a);i++)
		if(a%i==0)
			return false;
		else 
			continue;
	return true;
}
int main()
{
	int n,number;
	scanf("%d",&n);
	if(n<=0&&n>10)
		return 0;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&number);
		if(number<0&&number>pow(2,31))
			return 0;
		if(isprime(number))
			printf("Yes\n");
		else
			printf("No\n");
	}
	return 0;
}
