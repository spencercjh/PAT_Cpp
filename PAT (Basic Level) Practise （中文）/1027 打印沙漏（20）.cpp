#include<cstdio>
using namespace::std;
int main()
{
	int n;
	scanf("%d ",&n);
	if(n>1000||n<=0)
		return 0;
	//fflush(stdin);
	char ch;
	ch=getchar();
	if(n==1)
	{
		printf("%c\n%d",ch,0);
		return 0;
	}
	int i,j,k,r,level=0;
	for(i=1;i<n/2;i++)
		if(2*i*(i+2)+1>n)
		{	
			level=i;
			break;
		}
	r=n-(2*(level-1)*(level-1+2)+1);
	for(i=level;i>=1;i--)
	{
		for(j=level-i;j>=1;j--)
			printf(" ");
		for(k=2*i-1;k>=1;k--)
			printf("%c",ch);
		printf("\n");
	}
	for(i=2;i<=level;i++)
	{
		for(j=level-i;j>=1;j--)
			printf(" ");
		for(k=2*i-1;k>=1;k--)
			printf("%c",ch);
		printf("\n");
	}
	printf("%d",r);
	return 0;
}
