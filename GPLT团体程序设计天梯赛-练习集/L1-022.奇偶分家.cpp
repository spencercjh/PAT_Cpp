#include<cstdio>
using namespace::std;
int main()
{
	int n;
	scanf("%d",&n);
	int i,number[10000],sum1=0,sum2=0;
	if(n>0&&n<=1000)
	{
		for(i=0;i<n;i++)
		{	
			scanf("%d",&number[i]);
			if(number[i]<0)
				return 0;
			if(number[i]%2==0)
				sum2++;
			else
				sum1++;
		}
		printf("%d %d",sum1,sum2);
		return 0;
	}
	else
		return 0;
}
