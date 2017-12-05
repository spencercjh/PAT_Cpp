#include<cstdio>
using namespace::std;
int main()
{
	int n;
	int col;
	char c;
	scanf("%d ",&n);
	c=getchar();
	if(n%2!=0)
		col=n+1;
	else
		col=n;
	for(int i=0;i<col/2;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i==0||i==col/2-1)
			{
				printf("%c",c);
				continue;
			}
			else if(j==0||j==n-1)
			{
				printf("%c",c);
				continue;
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
