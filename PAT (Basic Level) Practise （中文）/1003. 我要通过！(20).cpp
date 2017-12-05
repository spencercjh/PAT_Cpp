#include<iostream>
#include<cstring> 
using namespace std;
int main()
{
	char num[10][100]={0};
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>num[i];
	}
	int j,P_j=0,T_j=0;
	for(int i=0;num[i][0]!=0;i++)
	{
		P_j=0;
		T_j=0;
		for(j=0;num[i][j]!='\0';j++)
		{
			if(num[i][j]!='A'&&num[i][j]!='P'&&num[i][j]!='T'&&num[i][j]!=' ')
			{
				cout<<"NO"<<endl;
				break;
			}
		for(j=0;num[i][j]!='\0';j++)
		{
			if(num[i][j]=='P')
			{
				P_j=j;
	
			}
			if(num[i][j]=='T')
			{
				T_j=j;
		
			}
		}
			if(T_j<=P_j+1||(strlen(num[i])-1-T_j)!=P_j*(T_j-P_j-1))
			{
			
				cout<<"NO"<<endl;
				break;
			}
			else
			{
				cout<<"YES"<<endl;
				break;
			}	
		}	
	}	
	return 0;
}
