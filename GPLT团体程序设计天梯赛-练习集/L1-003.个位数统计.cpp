#include<cstdio>
using namespace::std;
int main()
{
	int number,r,book[10]={0};
	scanf("%d",&number);
	if(number<0)
		number=number*(-1);
	while(number!=0)
	{
		r=number%10;
		book[r]++;
		number=number/10;
	}
	for(int i=0;i<10;i++)
	{
		if(book[i])
			printf("%d:%d\n",i,book[i]);
	}
	return 0;
}
