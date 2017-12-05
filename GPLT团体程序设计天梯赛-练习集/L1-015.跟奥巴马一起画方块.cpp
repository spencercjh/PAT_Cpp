#include<cstdio>
using namespace::std;
int main()
{
	int n;
	char c;
	scanf("%d ",&n);
	c=getchar();
	if(n>=3&&n<=21&&c!='\0')
	{
		for(int i=0;i<0.5*n;i++)
		{
			for(int j=0;j<n;j++)
				printf("%c",c);
			printf("\n");
		}
	}
	return 0;
}
