#include<cstdio>
using namespace::std;
int function(int y)
{
	int book[10]={0};
	int a;
	for(int i=0;i<4;i++)
	{
		a=y%10;
		book[a]=1;
		y=y/10;
	}
	int sum=0;
	for(int i=0;i<10;i++)
	{
		//printf("BOOK[%d]:%d\n",i,book[i]);
		if(book[i]==1)
			sum++;
	}
	//printf("SUM:%d\n",sum);
	return sum;
}
int main()
{
	//printf("������һ���и����������y��Ŀ������в�ͬ���ֵĸ���n:\n");
	int y,n;
	while(2==scanf("%d%d",&y,&n))
	{
		for(int i=y;;i++)
		{
			if(function(i)==n)
			{
				//printf("YEAR:%d\n",i);
				printf("%d %04d\n",i-y,i);
				break;
			}
		}
	}
	return 0;
}
