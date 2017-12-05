/*
	Name:L2-008. 最长对称子串 （最长回文子串） 
	LPS:Longest Palindrome Subsequence
	Author: spencercjh
	Date:2017年11月15日18:14:59 
	Description:团体程序设计天梯赛-练习集
	reference:算法笔记p437 
	key word:dynamic programming 动态规划 
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
	//初始化动态规划数组DP 
	fill(DP[0],DP[0]+MAXN*MAXN,0);
	//边界
	for(int i=0;i<len;i++){
		DP[i][i]=1;
		if(i<len-1){
			if(S[i]==S[i+1]){
				DP[i][i+1]=1;
				ans=2;
			}
		}
	}
	//状态转移方程
	for(int L=3;L<=len;L++){	//枚举子串的长度 
		for(int i=0;i+L-1<len;i++){	//枚举子串的起始端点 
			int j=i+L-1;//子串的右端点 
			if(S[i]==S[j]&&DP[i+1][j-1]==1){
				DP[i][j]=1;
				ans=L;
			} 
		}
	}
	printf("%d\n",ans);
	return 0; 
}

