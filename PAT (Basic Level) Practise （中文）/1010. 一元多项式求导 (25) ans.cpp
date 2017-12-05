#include<cstdio>
int main()
{
	int n, e, flag = false;
	while (scanf("%d%d", &n, &e)==2)
	{
		if(n*e)
		{
			if(flag)
				printf(" ");
			else
				flag = true;
			printf("%d %d", n*e, e-1);
		}
	}
	if(!flag)
		printf("0 0");
	return 0;
}
