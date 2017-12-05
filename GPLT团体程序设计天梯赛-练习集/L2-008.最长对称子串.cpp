/*
	Name:L2-008. ��Գ��Ӵ� ��������Ӵ��� 
	LPS:Longest Palindrome Subsequence
	Author: spencercjh
	Date:2017��11��15��18:14:59 
	Description:����������������-��ϰ��
	reference:�㷨�ʼ�p437 
	key word:dynamic programming ��̬�滮 
*/
#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
#include<queue>
#include<functional>
#include<numeric>
#include<stack>
using namespace std;
const int MAXN=1010;
int DP[MAXN][MAXN];
int main(){
	string S;
	getline(cin,S);
	int len=S.length(),ans=1;
	//��ʼ����̬�滮����DP 
	fill(DP[0],DP[0]+MAXN*MAXN,0);
	//�߽�
	for(int i=0;i<len;i++){
		DP[i][i]=1;
		if(i<len-1){
			if(S[i]==S[i+1]){
				DP[i][i+1]=1;
				ans=2;
			}
		}
	}
	//״̬ת�Ʒ���
	for(int L=3;L<=len;L++){	//ö���Ӵ��ĳ��� 
		for(int i=0;i+L-1<len;i++){	//ö���Ӵ�����ʼ�˵� 
			int j=i+L-1;//�Ӵ����Ҷ˵� 
			if(S[i]==S[j]&&DP[i+1][j-1]==1){
				DP[i][j]=1;
				ans=L;
			} 
		}
	}
	printf("%d\n",ans);
	return 0; 
}

