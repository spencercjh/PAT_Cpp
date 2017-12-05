#include<iostream>
#include<vector>
using namespace std;
struct node
{
	int add;
	int data;
	int next;
};
int main()
{
	vector<node> vin(100000);//输入时暂存节点
	vector<node> vsorted;//暂存排序后的结果
	vector<node> vout;//最后的结果
	node temp;
	int first,N,K;
	scanf("%d%d%d",&first,&N,&K);
	for(int i = 0; i<N; i++) //输入
	{
		scanf("%d%d%d",&temp.add,&temp.data,&temp.next);
		vin[temp.add]=temp;
	}
	if(first == -1) //首地址为-1.直接输出
		printf("-1\n");
	else
	{
		int nextAdd = first;
		while(nextAdd !=-1)
		{
			vsorted.push_back(vin[nextAdd]);
			nextAdd = vin[nextAdd].next;
		}
		int Nnew =vsorted.size();//排序后的链的大小，不一定等于N，因为可能存在废点不在链上
		int right = K-1;
		while(right < Nnew)
		{
			for(int i=right; i>right-K; i--)
				vout.push_back(vsorted[i]);
			right += K;
		}
		for(int i = right-K+1; i<Nnew ; i++)
			vout.push_back(vsorted[i]);
		for(int i =0; i<Nnew-1; i++)
		{
			vout[i].next = vout[i+1].add;
			printf("%05d %d %05d\n",vout[i].add,vout[i].data,vout[i].next);
		}
		printf("%05d %d %d\n",vout[Nnew-1].add,vout[Nnew-1].data,
		       -1);//最后地址-1 陷阱之一
	}
	return 0;
}
