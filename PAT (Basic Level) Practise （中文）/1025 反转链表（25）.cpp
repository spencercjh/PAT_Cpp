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
	vector<node> vin(100000);//����ʱ�ݴ�ڵ�
	vector<node> vsorted;//�ݴ������Ľ��
	vector<node> vout;//���Ľ��
	node temp;
	int first,N,K;
	scanf("%d%d%d",&first,&N,&K);
	for(int i = 0; i<N; i++) //����
	{
		scanf("%d%d%d",&temp.add,&temp.data,&temp.next);
		vin[temp.add]=temp;
	}
	if(first == -1) //�׵�ַΪ-1.ֱ�����
		printf("-1\n");
	else
	{
		int nextAdd = first;
		while(nextAdd !=-1)
		{
			vsorted.push_back(vin[nextAdd]);
			nextAdd = vin[nextAdd].next;
		}
		int Nnew =vsorted.size();//���������Ĵ�С����һ������N����Ϊ���ܴ��ڷϵ㲻������
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
		       -1);//����ַ-1 ����֮һ
	}
	return 0;
}
