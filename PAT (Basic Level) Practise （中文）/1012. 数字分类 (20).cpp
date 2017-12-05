#include<iostream>
using namespace std;
int main()
{
	int N;
	cin>>N;
	int* num=new int[N];
	int A1=0,A2=0,A3=0,A5=0;
	int tempA2=0;
	double A4=0,tempA4=0;
	for(int i=0; i<N; i++)
	{
		scanf("%d",&num[i]);
		if(num[i]%10==0)
		{
			A1+=num[i];
			continue;
		}
		else if(num[i]%5==1)
		{
			if((tempA2+1)%2==0)
				A2-=num[i];
			else
				A2+=num[i];
			tempA2++;
			continue;
		}
		else if(num[i]%5==2)
		{
			A3++;
			continue;
		}
		else if(num[i]%5==3)
		{
			tempA4++;
			A4+=num[i];
			continue;
		}
		else if(num[i]%5==4)
		{
			if(num[i]>A5)
				A5=num[i];
			continue;
		}
	}
	if(A1==0)
//		A1=78;	//ASCtwo code N
		cout<<"N"<<" ";
	else
		cout<<A1<<" ";
	if(tempA2==0)
//		A2=78;	//ASCtwo code N
		cout<<"N"<<" ";
	else
		cout<<A2<<" ";
	if(A3==0)
//		A3=78	//ASCtwo code N
		cout<<"N"<<" ";
	else
		cout<<A3<<" ";
	if(tempA4==0)
//		A4=78;	//ASCtwo code N	
		cout<<"N"<<" ";
	else
	{
		A4=A4/tempA4;
		printf("%.1lf ",A4);
	}
	if(A5==0)
//		A5=78;	//ASCtwo code N
		cout<<"N";	
	else
		cout<<A5;
	return 0;
}
