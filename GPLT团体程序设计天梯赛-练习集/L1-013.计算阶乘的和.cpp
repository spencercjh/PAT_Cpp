#include<cstdio>
using namespace::std;
int main()
{
	int n,sum=0,t=1;
	scanf("%d",&n);
	if(n>0&&n<=10)
	{
		for(int i=1;i<=n;i++)
		{
			t=t*i;
			sum+=t;
		}
		printf("%d\n",sum);
	}
	return 0;
}
