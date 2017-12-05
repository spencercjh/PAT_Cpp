#include<iostream>
#include<cmath>
#include<cstdio>
using namespace::std;
int main()
{
	int RA,CA,RB,CB,A[100][100],B[100][100],C[100][100];
	scanf("%d %d",&RA,&CA);
//	printf("%d %d\n",RA,CA);
	/*fflush(stdin);
	getchar();*/
	if(RA<0||CA<0)
		return 0;
	for(int i=0;i<RA;i++)
		for(int j=0;j<CA;j++)
		{	
			scanf("%d",&A[i][j]);
			/*fflush(stdin);
			getchar();*/
			if(abs(A[i][j])>100)
				return 0;
		}
/*	for(int i=0;i<RA;i++)
	{	
		for(int j=0;j<CA;j++)
			printf("%d",A[i][j]);
		cout<<endl;	
	}*/
	scanf("%d %d",&RB,&CB);
//	printf("%d %d\n",RB,CB);
/*	fflush(stdin);
	getchar();*/
	if(RB<0||CB<0)
		return 0;
	if(CA!=RB)
	{
		printf("Error: %d != %d\n",CA,RB);
		return 0;
	}
	for(int i=0;i<RB;i++)
		for(int j=0;j<CB;j++)
		{	
			scanf("%d",&B[i][j]);
			if(abs(B[i][j])>100)
				return 0;
		}
/*	for(int i=0;i<RB;i++)
	{	
		for(int j=0;j<CB;j++)
			printf("%d",B[i][j]);
		cout<<endl;	
	}*/
	int RC,CC;
	RC=RA;
	CC=CB;
	for(int i=0;i<RC;i++)
	{
		for(int j=0;j<CC;j++)
		{
			C[i][j]=0;
			for(int k=0;k<CA;k++)
			{
				C[i][j]=C[i][j]+A[i][k]*B[k][j];
			}
		}
	}
	cout<<RC<<" "<<CC<<endl;
	for(int i=0;i<RC;i++)
	{
		for(int j=0;j<CC;j++)
		{
			if(j!=CC-1)
				cout<<C[i][j]<<" ";
			else
				cout<<C[i][j];
		}
		if(i!=RC-1)
			cout<<endl;
	}
	return 0;
}
