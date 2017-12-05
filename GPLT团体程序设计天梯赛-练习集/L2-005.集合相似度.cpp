#include<cstdio>
#include <algorithm> 
using namespace::std;
int del(long long int *a)
{
	//printf("DEL!...\n");
	int book[1000000000]={0};
	int sum=0;
	for(int i=1;i<=a[0];i++)
	{
		if(a[i])
		{
			//printf("a[i]%d  ",a[i]);
			book[a[i]]=1;
		}
	}
	int j=1;
	for(int i=1;i<1000000000;i++)
	{
		if(book[i])
		{
			a[j++]=i;
			//printf("BOOK%d  ",i);
			sum++;
		}
	}
	return sum;
	/*int sum=0,l=a[0];
	for(int i=0;i<l;i++)
	{
		if(a[i]==a[i+1])
		{
			for(int j=i+1;j<l;j++)
			{
				a[j]=a[j+1];
			}
		}
	}
	for(int i=0;i<l;i++)
		if(a[i])
			sum++;
	return sum;*/
}
void getanswer(long long int *a,long long int *b)
{	
	//system("pause");
	long long int la=a[0],lb=b[0];
	//printf("la:%d lb:%d",a[0],b[0]);
	sort(a+1,a+la+1);
	sort(b+1,b+lb+1);
	//printf("sort ok!\n");
	long long int c[10000],j=1;
	for(int i=1;i<=la;i++)
		c[i]=a[i];
	for(int i=la+1;i<=la+lb;i++)
		c[i]=b[j++];
	c[0]=la+lb;
	/*for(int i:c)
		printf("%d",i);*/
	//printf("array C ok!\n");
	int nt=0;
	nt=del(c);
	//printf("NT:%d\n",nt);
	int laa,lbb,l;
	laa=del(a);
	//printf("LA:%d\n",laa);
	lbb=del(b);
	//printf("LB:%d\n",lbb);
	if(laa>lbb)
		l=laa;
	else
		l=lbb;
	int nc=0;
	for(int i=1;i<=la;i++)
	{
		//printf("a=%d   b=%d \n",a[i],b[i]);
		for(int j=1;j<=lb;j++)
		{
			//printf("ai=%d   bj=%d\n",a[i],b[j]);
			if(a[i]==b[j])
				{
					nc++;
					break;
				}
		}
	}
	//printf("NC:%d\n",nc);
	double answer=(double)nc/nt*100.0;
	printf("%.2lf",answer);
	printf("%\n");
	return;
}
int main()
{
	long long int number[50][10000]={0};
	int n,m,l,a1,a2;
//	printf("请输入集合的个数：\n");
	scanf("%d",&n);
	if(n<=0||n>50)
		return 0;
	for(int i=1;i<=n;i++)
	{
//		printf("请输入%d集合中元素的个数：\n",i);
		scanf("%d",&m);
		if(m>10000||m<=0)
			return 0;
		number[i][0]=m;	//第0行第0列不用，所以用第0列来存这一行数组的元素个数！！！ 
		//printf("%d",number[i][0]);
//		printf("请输入%d集合中元素：\n",i);
		for(int j=1;j<=m;j++)
			scanf("%lld",&number[i][j]);
		if(number[i][j]>1000000000||number[i][j]<0)
			return 0;
	}
	//printf("请输入想要计算的集合相似度的个数：\n");
	scanf("%d",&l);
	if(l>2000||l<=0)
		return 0;
//	printf("请输入%d对集合:A1 A2\n",l);
	for(int i=1;i<=l;i++)
	{
		scanf("%d%d",&a1,&a2);
		/*number[1][0]=3;
		number[1][1]=99;
		number[1][2]=87;
		number[1][3]=101;
		number[2][0]=4;
		number[2][1]=87;
		number[2][2]=101;
		number[2][3]=5;
		number[2][4]=87;*/
		getanswer(number[a1],number[a2]);
	}
	return 0;
}

		
	
