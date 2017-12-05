#include<cstdio>
#include<cmath>
int main()
{
	int n,answer;
	scanf("%d",&n);
	if(n>0&&n<=10)
	{
		answer=pow(2,n);
		printf("2^%d = %d\n",n,answer);
	}
	return 0;
}
