#include<cstdio>
using namespace::std;
int par[100]={0},n,m,k,g1,g2,r,p1,p2;
bool enemy[100][100]={false};
int getpar(int a)
{
	if(par[a]!=a)
		par[a]=getpar(par[a]);
	return par[a];
}
int main()
{
	//n为宾客数量 m为关系数量 k为查询条目数量 
	//printf("请输入宾客数量 关系数量 查询条码数量\n");
	scanf("%d%d%d",&n,&m,&k);
	for(int i=1;i<=n;i++)
		par[i]=i;
	//printf("请输入宾客之间的关系\n");
	for(int i=1;i<=m;i++)
	{
		scanf("%d%d%d",&g1,&g2,&r);
		if(r==1)
		{
			p1=getpar(g1);
			p2=getpar(g2);
			if(p1!=p2)
				par[p2]=p1;
		}
		else
			enemy[g1][g2]=enemy[g2][g1]=true;
	}
	//printf("请输入想要查询的宾客\n"); 
	for(int i=1;i<=k;i++)
	{
		scanf("%d%d",&g1,&g2);
		if(getpar(g1)==getpar(g2))
		{
			if(enemy[g1][g2])
				printf("OK but...\n");
			else
				printf("No problem\n"); 
		}
		else 
		{
			if(enemy[g1][g2])
				printf("No way\n");
			else
				printf("OK\n");
		}
	}
	return 0;
}
