#include<cstdio>
using namespace::std;
int main()
{
	int n;
	scanf("%d",&n);
	int people[1001];
	int k,i,j,begin=0,sum=0,flag=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&k);
		for(j=begin;j<k+begin;j++)
		{
			scanf("%d",&people[j]);
		}
		begin+=k;
		sum+=k;
	}
	int m;
	scanf("%d",&m);
	int search[10000],answer[10000],book[100000];
	for(i=0;i<m;i++)
		scanf("%d",&search[i]);
	k=0;
	for(i=0;i<m;i++)
	{
		flag=0;
		for(j=0;j<sum;j++)
		{
			if(search[i]==people[j])
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			answer[k]=search[i];//printf("%d ",search[i]);//book[search[i]]=1;
			//printf("ANSWER[%d]:%d\n",k,answer[k]);
			k++;
		}
	}
	int count=0;
	for(i=0;i<k;i++)
	{
		if(book[answer[i]]==0&&count==0)
		{
			printf("%05d",answer[i]);
			book[answer[i]]=1;
			count++;
		}
		else if(book[answer[i]]==0)
		{
			printf(" %05d",answer[i]);
			book[answer[i]]=1;
			count++;
		}
	}
	if(flag==1)
		printf("No one is handsome\n");
	return 0;	
}
