#include<cstdio>
using namespace::std;
int main()
{
	int H;
	scanf("%d",&H);
	if(H<100&&H>300)
		return 0;
	printf("%.1f",(H-100)*0.9*2.0);
	return 0;
}
