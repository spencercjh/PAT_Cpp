#include<cstdio>
using namespace::std;
int main()
{
	int day1;
	scanf("%d",&day1);
	if(day1>=1&&day1<=5)
		printf("%d",day1+2);
	else if(day1>=6&&day1<=7)
		printf("%d",(day1+2)%7);
	else 
		return 0;
	return 0;
}
