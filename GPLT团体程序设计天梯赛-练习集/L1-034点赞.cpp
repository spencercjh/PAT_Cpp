#include<cstdio>
#include <algorithm>
using namespace::std;
int main()
{
	//printf("输入在第一行给出一个正整数N（<=1000）\n");
	int n,k;
	scanf("%d",&n);
	if(n>1000||n<=0)
		return 0; 
	int blog[1000][10],book[1000]={0};
	//printf("每行给出一篇被其点赞的博文的特性描述，格式为“K F1 … FK”\n");
	for(int i=0;i<n;i++)
	{
		//printf("请输入标签个数K：\n");
		scanf("%d",&k);
		if(k>10||k<1)
			return 0;
		blog[i][0]=k;
		//printf("请输入%d个标签F：\n",k);
		for(int j=1;j<=k;j++)
		{
			scanf("%d",&blog[i][j]);
			if(blog[i][j]>1000||blog[i][j]<1)
				return 0;
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=1;j<=blog[i][0];j++)
		{
			if(blog[i][j])
				++book[blog[i][j]];
				//printf("book[blog[%d][%d]]:%d %d\n",i,j,blog[i][j],book[blog[i][j]]);
		}	
	}
	int max=book[1];
	int maxindex=1;
	for(int i=1;i<1000;i++)
	{
		if(book[i]>=max)
		{	
			max=book[i];
			maxindex=i;
			//printf("MAX:%d\n",max);
		}	
	}
	printf("%d %d\n",maxindex,max);
	return 0;
}
