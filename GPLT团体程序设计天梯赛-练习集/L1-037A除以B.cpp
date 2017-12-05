#include<cstdio>
#include<cmath> 
using namespace::std;
int main()
{
	int a,b;
	while(scanf("%d%d",&a,&b)==2)
	{
		if(abs(a)>100||abs(b)>100)
			return 0;
		if(b==0)
			printf("%d/%d=Error\n",a,b);
		else if(b>0)
			printf("%d/%d=%.2f\n",a,b,1.0*a/b);
		else if(b<0)
			printf("%d/(%d)=%.2f\n",a,b,1.0*a/b);
	}
	return 0;
	}
