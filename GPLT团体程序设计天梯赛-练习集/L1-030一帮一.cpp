#include<cstdio>
#include<string>
using namespace::std;
struct node
{
	int order;
	int sex;
	char name[8];
};
int main()
{
	node people[51];
	int N,sumf=0,summ=0,book[50]={0};
	scanf("%d",&N);
	if(N%2!=0||N>50||N<=0)
		return 0;
	for(int i=1;i<=N;i++)
	{
		people[i].order=i;
		scanf("%d",&people[i].sex);
		//fflush(stdin);
		if(people[i].sex==0)
			sumf++;
		else if(people[i].sex==1)
			summ++;
		getchar();
		scanf("%s",people[i].name);
	}
	if(summ!=sumf)
		return 0;
	/*for(int i=1;i<=N;i++)
		//cout<<people[i].order<<" "<<people[i].sex<<" "<<people[i].name<<endl;
		printf("%d %d %s\n",people[i].order,people[i].sex,people[i].name);*/
	for(int i=1;i<=N;i++)
	{
		for(int j=N;j>=i;j--)
		{
			if(people[i].sex!=people[j].sex&&book[i]==0&&book[j]==0)
			{	//people[i].order=people[j].order=i;
				printf("%s %s\n",people[i].name,people[j].name);
			//	N--;
				book[i]=book[j]=1;
				break;
			}
		}
	}
	return 0;
}
