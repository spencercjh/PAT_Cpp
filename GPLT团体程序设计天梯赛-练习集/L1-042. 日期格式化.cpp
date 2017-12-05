#include<cstdio>
using namespace::std;
int main()
{
	int mm,dd,yyyy;
	scanf("%d-%d-%d",&mm,&dd,&yyyy);
	if(yyyy<1900||dd>31||mm>12||mm<=0||dd<=0)
		return 0;
	if(mm==2&&dd>29)
		return 0;
	if((mm==4||mm==6||mm==9||mm==11)&&dd>30)
		return 0;
	printf("%04d-%02d-%02d",yyyy,mm,dd);
	return 0;
}
