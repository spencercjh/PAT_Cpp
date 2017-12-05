#include<cstdio>
#include<cmath>
using namespace::std;
struct node
{
	int H;
	int W;
	float WW;
};
bool function(node &a)
{
	float biaozhun=2*(a.H-100.0)*0.9;
	a.WW=biaozhun;
	//printf("BIAOZHUN:%f",a.WW);
	if(fabs(a.W-biaozhun)<biaozhun*0.1)
		return true;
	else
		return false;
}
int main()
{
	node people[21];
	int N;
	scanf("%d",&N);
	if(N<0||N>20)
		return 0;
	for(int i=1;i<=N;i++)
	{
		scanf("%d %d",&people[i].H,&people[i].W);
		if(people[i].H<=120||people[i].H>=200||people[i].W<=50||people[i].W>300)
			return 0;
		if(function(people[i]))
			printf("You are wan mei!\n");
		else
		{
			if(people[i].W>people[i].WW)
				printf("You are tai pang le!\n");
			if(people[i].W<people[i].WW)
				printf("You are tai shou le!\n");
		}
	}
	return 0;
}
	
