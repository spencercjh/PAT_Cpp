#include<iostream>
#include<cstring>
using namespace::std;
int charToInt(char c)
{
	return (int)(c-'0');
}
int main(int argc, char *argv[])
{
	int n,i,j,k=0,s,
	          a[]= {7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
	char cur,b[11]= {'1','0','X','9','8','7','6','5','4','3','2'},
	                c[20];
	scanf("%d",&n);
	for(i = 0; i < n; i++)
	{
		s=0;
		scanf("%s",&c);
		for(j= 0; j<17; j++)
		{
			if(c[j]>='0'&&c[j]<='9')
			{
				s+=charToInt(c[j])*a[j];
			}
			else
			{
				printf("%s",c);
				if(i<n-1)
				{
					printf("\n");
				}
				s=-1;
				break;
			}
		}
		if(b[s%11]==c[j]&&s!=-1)
		{
			k++;
		}
		else if(b[s%11]!=c[j]&&s!=-1)
		{
			printf("%s",c);
			if(i<n-1)
			{
				printf("\n");
			}
		}
	}
	if(k==n)
	{
		printf("All passed");
	}
	return 0;
}
