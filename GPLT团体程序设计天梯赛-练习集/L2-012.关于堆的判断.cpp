#include<cstdio>
#include<iostream>
using namespace::std;
void siftdown(int i,int *h,int &n)
{
	int t,flag=0;
	while(i*2<=n&&flag==0)
	{
		if(h[i]>h[i*2])
			t=i*2;
		else
			t=i;
		if(i*2+1<=n)
		{
			if(h[t]>h[i*2+1])
				t=i*2+1;
		}
		if(t!=i)
		{
			swap(h[t],h[i]);
			i=t;
		}		
		else
			flag=1;
	}
	return;
}
void creat(int*h,int &n)
{
	for(int i=n/2;i>=1;i--)
		siftdown(i,h,n);
	return;
}
int findindex(int *h,int x,int n)
{
	for(int i=1;i<=n;i++)
	{
		if(h[i]==x)
			return i;
	}
}
int main()
{
	int n,m,h[1000];
	//printf("����Ԫ�صĸ�����\n");
	scanf("%d",&n);
	//printf("��Ҫ�жϵ���������\n");
	scanf("%d",&m);
	//printf("������������ѣ�\n");
	for(int i=1;i<=n;i++)
		scanf("%d",&h[i]);
	creat(h,n);
	cout<<"\n\nС����:"<<endl;
	for(int i=1;i<=n;i++)
		cout<<h[i]<<" "; 
	cout<<"\n"<<endl;
	//printf("������%d������\n",m);
	for(int i=1;i<=m;i++)
	{
		int x,y,ix,iy;
		char cmd[20],tmp[20];
		scanf("%d%s",&x,cmd);
		ix=findindex(h,x,n);
		if(cmd[0]=='a')
		{//A��B�ǲ����ֵܽڵ� 
			scanf("%d%s%s",&y,cmd,tmp); 
			iy=findindex(h,y,n);
			if(ix/2==iy/2)
				printf("T\n");
			else
				printf("F\n");
		}
		else
		{
			scanf("%s%s",tmp,cmd);  
			if(cmd[0]=='r') 
			{//A �ǲ��Ƕѵĸ� 
				if(ix==1)
					printf("T\n");
				else
					printf("F\n");
			}
			else if(cmd[0]=='p') 
			{//A�ǲ���B�ĸ��ڵ� 
				scanf("%s%d",tmp,&y);
				iy=findindex(h,y,n);
				if(iy/2==ix)
					printf("T\n");
				else
					printf("F\n");
			}
			else if(cmd[0]=='c')
			{//A�ǲ���B���ӽڵ� 
				scanf("%s%d",tmp,&y); 
				iy=findindex(h,y,n);
				if(ix/2==iy)
					printf("T\n");
				else
					printf("F\n");
			}
		}
	}
}
